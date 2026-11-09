"""The game's weapons as the policy sees them: a weapon class and the range it is good at, from the blueprint name.

The bridge gives each soldier's weapons as hashes of their blueprint names (AI object +0xB4 weapon 1, +0xB8 weapon 2, +0xBC
explosive) and the weapon of each hit (damage message +0).  The hash is the game's: h = h * 31 + c over the lower-cased name
(platform/common/blueprints.c).  Names are the game's own (MISC/COMMON.ASR, as listed in Weapons_*_Default.txt)."""
import numpy as np

# class: (ideal distance, longest useful distance) in world units; the order is the observation's one-hot order
CLASSES = {
    "close":    (6.0, 12.0),     # shotgun, flamethrower / incinerator, fusion cutter, arc caster, lightsaber, tri-shot
    "rifle":    (25.0, 60.0),    # blaster rifles, chainguns, bowcasters, repeating blasters
    "pistol":   (15.0, 35.0),
    "sniper":   (60.0, 150.0),
    "launcher": (35.0, 80.0),    # rockets, guided missiles, EMP launcher (anti-vehicle)
    "lobbed":   (20.0, 40.0),    # grenades, grenade / mortar launchers, cluster grenades, carbonite gun
    "placed":   (3.0, 8.0),      # det packs, mines (thrown or set down)
    "other":    (20.0, 40.0),    # anything else (force powers, packs, power-ups, vehicle guns)
}
CLASS_NAMES = list(CLASSES)
N_CLASSES = len(CLASS_NAMES)

RULES = [  # first match wins (lower-case substrings of the name)
    ("sniper", "sniper"), ("shotgun", "close"), ("flame", "close"), ("incinerator", "close"), ("fusion", "close"),
    ("arccaster", "close"), ("lightsaber", "close"), ("tri_shot", "close"), ("trishot", "close"), ("harpoon", "close"),
    ("rocket", "launcher"), ("missile", "launcher"), ("emp_launcher", "launcher"), ("torpedo", "launcher"),
    ("grenade", "lobbed"), ("mortar", "lobbed"), ("carbonite", "lobbed"), ("orbital", "lobbed"),
    ("det_pack", "placed"), ("mine", "placed"), ("pistol", "pistol"),
    ("rifle", "rifle"), ("chaingun", "rifle"), ("bow_caster", "rifle"), ("bowcaster", "rifle"), ("repeating", "rifle"),
    ("particle", "rifle"), ("blaster", "rifle"),
]


def bp_hash(name):
    h = 0
    for c in name.lower():
        h = (h * 31 + ord(c)) & 0xFFFFFFFF
    return h


def classify(name):
    n = name.lower()
    for key, cls in RULES:
        if key in n:
            return cls
    return "other"


NAMES = """ALL_Blaster_Pistol
ALL_Blaster_Rifle
ALL_Bow_Caster
ALL_Carbonite_Gun
ALL_Flamethrower
ALL_Fusion_Cutter
ALL_Guided_Missile
ALL_HealthAmmo_Dispenser
ALL_Incinerator
ALL_Orbital_Strike_Gun
ALL_Rocket_Launcher
ALL_Shotgun
ALL_Sniper_Rifle
ALL_Tri_Shot
Ackbar_Blaster_Pistol
Advanced~Homing~Missiles
ArcCaster
AutoTurretLasers
Auto_Turret_Droid
Beam~Cannon
Beam~Cannon~Blue
Beam~Cannon~Blue~Feeble
Beam~Cannon~Red
Beam~Cannon~Space
BlasterPistol
BlasterRifle
BobaFett_Blaster_Rifle
BowCaster
Cannons
Carbonite_Gun
Chaingun
Chewbacca_Bow_Caster
ClusterGrenadesHero
Cluster_Grenades
Concussion_Missile
Det_Pack
Det_Pack_Hero
DualRepeatingBlaster
EMP_Blaster_Pistol
EMP_Blaster_Rifle
EMP_Fusion_Cutter
EMP_Guided_Missile
EMP_Rocket_Launcher
EMP_Shotgun
EMP_Sniper_Rifle
Emp_Launcher
FED_Blaster_Pistol
FED_Blaster_Rifle
FED_Fusion_Cutter
FED_Guided_Missile
FED_Rocket_Launcher
FED_Shotgun
FED_Sniper_Rifle
Flame~Thrower
FlamethrowerHero
FlamethrowerIG88Campaign
Force_Choke
Force_Jump
Force_Lightning
Force_Pull
Force_Push
Fusion~Cutter
GrenadeHero
Grenade_Launcher_OnImpact
Grenade_Launcher_OnTime
GuidedMissileHero
Guided_Missile
Guided_Rocket
HanSolo_Blaster_Pistol
Harpoon~Gun
Homing~Missiles
Homing~Missiles~Slave1
IG88_BlasterRifle
IG88_BlasterRifle_Base
IG88_BlasterRifle_Campaign
IG88_BlasterRifle_Campaign_Offhand
IG88_BlasterRifle_Offhand
JangoFett_Blaster_Pistol
JangoFett_Blaster_Pistol_OffHand
Jetpack
JetpackBoba
Jumppack
Lightsaber
Lightsaber_Blue
Lightsaber_DarthMaul
Lightsaber_Dooku
Lightsaber_Green
Lightsaber_Grevious
Lightsaber_Grevious_Blue
Lightsaber_Grevious_Green
Lightsaber_Purple
Lightsaber_Ventress
Lightsaber_Ventress_L
Lightsaber_Ventress_R
Lightsaber_Yoda
Missile_Spread_Launcher
Missile_Tri_Fighter_Launcher
MortarLauncher_ATRT
MortarLauncher_T4B
MortarLauncher_TankDroid
Orbital~Strike~Gun
OrbitalStrikeHero
Particle_Beam
Particle_Beam_ATAT
Particle_Beam_ATST
Particle_Beam_Turret
Particle_Beam_Vehicle
Particle_Pistol
Personal_Shield
Proton~Torpedo~Launcher
Proton_Bomb_Launcher
Proximity_Mines
REP_Blaster_Pistol
REP_Blaster_Rifle
REP_Chaingun
REP_Fusion_Cutter
REP_Grenade
REP_Guided_Missile
REP_Rocket_Launcher
REP_Shotgun
REP_Sniper_Rifle
Rage
Rally
Recon_Droid
Regenerate
Remote_Rocket
RepeatingBlaster
Rocket_Launcher
SelfDestruct
SelfDestruct_Droid
SelfDestruct_Missile
SelfDestruct_Rocket
Shock~Cannon
Shotgun
Sniper~Rifle
SpaceLasers_ALL_LAAT
SpaceLasers_ARCFighter
SpaceLasers_A_Wing
SpaceLasers_Advanced
SpaceLasers_B_Wing
SpaceLasers_Bombers
SpaceLasers_DroidFighter
SpaceLasers_Fighters
SpaceLasers_Hero
SpaceLasers_Imperial_Troop_Transporter
SpaceLasers_Interceptors
SpaceLasers_JediStarfighter
SpaceLasers_Jedi_Interceptor
SpaceLasers_MillenniumFalcon
SpaceLasers_REP_LAAT
SpaceLasers_Slave1
SpaceLasers_Strike_Bomber
SpaceLasers_TIE_Advanced
SpaceLasers_TIE_Bomber
SpaceLasers_TIE_Defender
SpaceLasers_TIE_Fighter
SpaceLasers_TIE_Interceptor
SpaceLasers_Transports
SpaceLasers_TriFighter
SpaceLasers_V_Wing
SpaceLasers_X_Wing
SpaceLasers_Y_Wing
Stamina
Stealth_Suit
SuperLaser
TankLasers_A5R
TankLasers_AAC1
TankLasers_AAT
TankLasers_ATAT
TankLasers_ATST
TankLasers_ATTE
TankLasers_ArmouredDroidTank
TankLasers_BigWalkers
TankLasers_Heavy
TankLasers_IFT
TankLasers_Medium
TankLasers_Speederbike
TankLasers_Speederbike_STAP
TankLasers_Spider
TankLasers_T4B
Throw_Lightsaber
TriShot
TurretLasers_Heavy
TurretLasers_Heavy_Green
TurretLasers_Light
TurretLasers_Medium
Turret_Concussion_Missile
VehicleAutoRepair
WristRocketHero
Wrist_Rocket""".split()
BY_HASH = {bp_hash(n.replace("~", " ")): n.replace("~", " ") for n in NAMES}
CLASS_OF = {h: classify(n) for h, n in BY_HASH.items()}


def class_index(h):
    """index into CLASS_NAMES of a weapon hash; -1 for 0 (none)"""
    if not h:
        return -1
    return CLASS_NAMES.index(CLASS_OF.get(int(h), "other"))


def ideal_range(h):
    return CLASSES[CLASS_OF.get(int(h), "other")][0] if h else CLASSES["rifle"][0]


def max_range(h):
    return CLASSES[CLASS_OF.get(int(h), "other")][1] if h else CLASSES["rifle"][1]


def name_of(h):
    return BY_HASH.get(int(h), f"{int(h):08x}")
