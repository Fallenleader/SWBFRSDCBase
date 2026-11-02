# RS server

The online side of Renegade Squadron for every build of the game (PS Vita, PS5, Windows, Steam Deck). It answers the game's own
GameSpy protocols, so the game's Infrastructure menus work as they did, with these changes:

* **Search for the server.** The game looks for an RS server on the local network first (a broadcast on UDP 27950). If none
  answers, it uses `RS_SERVER` from its `settings.txt` (a name or an IP address). Every `*.gamespy.com` name the game looks up
  goes to that server.
* **Accounts.** An account is a **Nickname** (the name shown in matches) and a **Username** (the old "Email" field). There are
  no passwords. A username can be taken only once.
* **I Forgot.** A new entry on the Login menu. It asks the server for the account made from this address. If there is one,
  the Login screen opens with the Nickname and Username filled in. If not, the Create screen opens.
* **Message of the day.** The game shows what `motd.txt` says when the online menus start.
* **Text entry.** The game asks the device's own keyboard:
  * PS Vita: the system keyboard.
  * PS5: the system keyboard dialog. If it cannot open, a controller keyboard is shown instead.
  * PC: type on the keyboard, or use a controller keyboard (D-pad and Cross; Start when done).

## Running it

```
python3 rsmaster.py [--data <folder>] [-v]
```

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

## Files

These files are kept next to `rsmaster.py`, or in `--data`.

* **`User.txt`** holds one account per line:
  ```
  profile id <TAB> nickname <TAB> username <TAB> address hash <TAB> created
  ```
  Nicknames and usernames are plain text. The address is never stored. Only a salted SHA-256 of it is kept: the salt is made
  once, in `ip_salt.txt`. Keep that file, or the existing hashes stop matching.
* **`banned.txt`** holds one username or address hash per line. A banned address cannot create accounts, log in or recover.
  To manage it:
  ```
  python3 rsmaster.py ban <username>      # bans the account and the address it was made from
  python3 rsmaster.py unban <username>
  ```
* **`motd.txt`** is the message of the day. It is read on every request, so you can edit it while the server runs.

## How it fits together

* `platform/common/net.c`: the PSP's network firmware on the host's sockets. It also handles resolving names, LAN discovery,
  and capturing the message of the day.
* `platform/common/gamespy_ui.c`: the account screens. It renames Email to Username, hides Password, adds I Forgot, and shows
  the message of the day. The game's data is changed as it is read.
* `platform/common/osk_panel.c`: the keyboard panel, used where the device has no keyboard dialog.
* `rsmaster.py` implements these services:
  * LAN discovery
  * QR2
  * Server browsing 2, with the game's key (GOA cipher)
  * GP and GP search
  * Recovery
  * HTTP
