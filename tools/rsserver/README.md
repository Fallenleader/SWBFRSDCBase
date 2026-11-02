# RS server

The online side of Renegade Squadron for every build of the game (PS Vita, PS5, Windows, Steam Deck). It answers the game's own
GameSpy protocols, so the game's Infrastructure menus work as they did, with these changes:

* **Search for the server.** The game looks for an RS server on the local network first (a broadcast on UDP 27950). If none
  answers, it uses `RS_SERVER` from its `settings.txt` (a name or an IP address). Every `*.gamespy.com` name the game looks up
  goes to that server.
* **Accounts.** The account screens ask for a **Username** (the old Nickname field: the name shown in matches) and a **Password**
  (the old Email field). A username can be taken only once. The server keeps only a salted hash of each password.
* **Install id.** Each game install makes a random id once (`rs_install_id.txt` in its data folder) and sends it with every log-in
  and account creation. Bans and "I Forgot" go by it; no network addresses are kept.
* **I Forgot.** An entry on the Login menu. The server finds the account last used from this install and the Login screen opens
  with its Username filled in; the password typed there within 10 minutes becomes the account's new password.
* **Message of the day.** The game shows what `motd.txt` says when the online menus start.
* **Text entry.** The game asks the device's own keyboard (PS Vita: the system keyboard; PS5: the system keyboard dialog, else a
  controller keyboard; PC: the keyboard, or a controller keyboard).

## Running it

```
python3 rsmaster.py [--data <folder>] [--game <PC game folder>] [-v]
```

On Windows, double-click `RSServer.bat` (edit the game folder in it first): it opens the server's window.
Python 3.7 or later; nothing else is needed. Open these ports, or forward them on the router for players outside your network:

| Port | Protocol | Use |
|---|---|---|
| 27950 | UDP | LAN discovery |
| 27900 | UDP | QR2: the availability check and match registration |
| 28910 | TCP | Server browsing: the match list |
| 29900 | TCP | GameSpy Presence: log in and create accounts |
| 29901 | TCP | GameSpy search: account checks |
| 29910 | TCP | Account recovery ("I Forgot") |
| 80 | TCP | Message of the day (needs administrator rights on Linux) |

## The server window

Type commands into the window the server runs in:

| Command | What it does |
|---|---|
| `/ban <username>` | Bans the account, and every install it was used from (new accounts from those installs are refused too). |
| `/unban <username>` | Lifts that ban. |
| `/users` | Lists the accounts. |
| `/sessions` | Lists the hosted sessions and their state. |
| `/restart <n>` | Restarts hosted session n, reading `serversession<n>.txt` again. |
| `/help` | Lists the commands. |
| `/quit` | Stops the server and its hosted sessions. |

`python3 rsmaster.py ban <username>` and `unban <username>` do the same without the server running.

## Hosted sessions

Each `serversession<N>.txt` next to `rsmaster.py` (or in `--data`) is one public session. With `--game <PC game folder>` (the
folder that holds `SWBFRS.exe` and `GAME/`), the server starts one copy of the game per valid file, in **dedicated mode**: no window,
nothing drawn and no sound (the null renderer), so it shows nothing on the screen and uses no GPU.

* `serversession1.txt`, `serversession2.txt` ... are numbered sessions; gaps are allowed. A name that does not match exactly
  (`serversession01.txt`, `serversession1.txt.bak`) is reported and not used. A file with any error is not started; every error is
  printed with its line number.
* `mods_serversession<N>/` is that session's mods folder, in the game's own `mods` layout (`maps/`, `files/`, `textures/`,
  `lights/`, `mod_maps.txt`, `Weapons_Mod.txt` ...). Only that session reads it: weapon mods (`Weapons_Mod.txt`) are read from it too.
* `sessions/serversession<N>/` is made by the server: the session's game settings, its log (`log.txt`), saves and patched files.
* A session whose game ends is started again. A changed file is used at that restart, or at `/restart <n>`.

`serversession<N>.txt`:

```
Name         = Classic Era Rotation     # the name shown in the server browser (1-31 characters)
MaxPlayers   = 16                       # players who can join, 2..16
Bots         = 32                       # AI soldiers in total, 0..64
AIDifficulty = 1                        # 0 easy, 1 medium, 2 hard
Tickets      = 300                      # reinforcements per team, 50..1000
TimeLimit    = 20                       # minutes, 0 = none, up to 60
HeroTime     = 60                       # seconds before heroes unlock, 0..600
AutoBalance  = 1                        # 0 / 1
Map          = HOTH CLASSIC CQST        # the rotation, one line per map: map, era (CLASSIC / PREQUEL), mode (CQST / CTF1 / CTF2 / HCTF)
Map          = ENDOR CLASSIC CQST
```

Maps are the game's own (as in `mods/original_maps.txt`) or custom maps installed in that session's `mods_serversession<N>/maps/`.
Each map line is checked: the map must have a level for that era and offer that mode.

**State of hosting.** The server finds, checks and starts the sessions, and each starts the game in dedicated mode (checked: no
window, the game runs, its mods come from its own folder). Making that game open its match by itself (log in, set up the rotation
and settings, host) is the next step and is not done yet; until it is, the sessions do not appear in the server browser.

## Files

These files are kept next to `rsmaster.py`, or in `--data`.

* **`User.txt`** holds one account per line:
  ```
  profile id <TAB> username <TAB> password hash <TAB> install ids <TAB> created
  ```
  Password hashes are PBKDF2-SHA256 with a random salt per account. Accounts of the earlier format (nickname, username, address
  hash) are converted when the server starts: the nickname becomes the username and the old username becomes the password.
* **`banned.txt`** holds banned usernames and installs (`uuid:<install id>`), one per line. Use `/ban` and `/unban`.
* **`motd.txt`** is the message of the day. It is read on every request, so you can edit it while the server runs.

## How it fits together

* `platform/common/net.c`: the PSP's network firmware on the host's sockets: resolving names, LAN discovery, the message of the
  day, the install id (added to log-ins and account creation as `\rsuuid\`), and recovery.
* `platform/common/gamespy_ui.c`: the account screens (Username / Password, I Forgot, the message of the day).
* `platform/common/osk_panel.c`: the keyboard panel, used where the device has no keyboard dialog.
* `platform/desktop/main.c` and `platform/common/gfx_backend.c`: dedicated mode (`RS_DEDICATED=1`): no window, the null renderer.
* `rsmaster.py`: LAN discovery, QR2, server browsing 2 (GOA cipher), GP and GP search, recovery, HTTP, the server window.
* `sessions.py`: the hosted sessions.
