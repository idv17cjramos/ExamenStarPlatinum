//TODO: Usar mas TODO

/*
* BINARY OPERATORS
* | = OR
*	1 0 1 0 
*   0 1 1 0 |
*	---------
*	1 1 1 0
*
* & = AND
*	1 0 1 0
*   0 1 1 0 &
*	---------
*	0 0 1 0
*
* << = LEFTWISE BIT SHIFT
*	1 0 1 0 << 1
*	---------
*	0 1 0 0
*
* >> = RIGHTWISE BIT SHIFT
*	1 0 1 0 >> 1
*	---------
*	0 1 0 1
*/

#pragma once
#include <Windows.h>
typedef enum LetterColor{
	BLACK = 0,
	DARKBLUE = FOREGROUND_BLUE,
	DARKGREEN = FOREGROUND_GREEN,
	DARKCYAN = FOREGROUND_GREEN | FOREGROUND_BLUE,
	DARKRED = FOREGROUND_RED,
	DARKMAGENTA = FOREGROUND_RED | FOREGROUND_BLUE,
	DARKYELLOW = FOREGROUND_RED | FOREGROUND_GREEN,
	DARKGRAY = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
	GRAY = FOREGROUND_INTENSITY,
	BLUE = FOREGROUND_INTENSITY | FOREGROUND_BLUE,
	GREEN = FOREGROUND_INTENSITY | FOREGROUND_GREEN,
	CYAN = FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE,
	RED = FOREGROUND_INTENSITY | FOREGROUND_RED,
	MAGENTA = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE,
	YELLOW = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN,
	WHITE = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
} LetterColor;

typedef enum BackgroundColor{
	BBLACK = 0,
	BDARKBLUE = BACKGROUND_BLUE,
	BDARKGREEN = BACKGROUND_GREEN,
	BDARKCYAN = BACKGROUND_GREEN | BACKGROUND_BLUE,
	BDARKRED = BACKGROUND_RED,
	BDARKMAGENTA = BACKGROUND_RED | BACKGROUND_BLUE,
	BDARKYELLOW = BACKGROUND_RED | BACKGROUND_GREEN,
	BDARKGRAY = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE,
	BGRAY = BACKGROUND_INTENSITY,
	BBLUE = BACKGROUND_INTENSITY | BACKGROUND_BLUE,
	BGREEN = BACKGROUND_INTENSITY | BACKGROUND_GREEN,
	BCYAN = BACKGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE,
	BRED = BACKGROUND_INTENSITY | BACKGROUND_RED,
	BMAGENTA = BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE,
	BYELLOW = BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN,
	BWHITE = BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE,
} BackgroundColor;

typedef enum ExtraOptions {
	reverseColors = COMMON_LVB_REVERSE_VIDEO,
	underscore = COMMON_LVB_UNDERSCORE,
}ExtraOptions;

typedef enum Key {
	backspace = VK_BACK,
	tab = VK_TAB,
	clear = VK_CLEAR,
	returnK = VK_RETURN,
	shift = VK_SHIFT,
	ctrl = VK_CONTROL,
	alt = VK_MENU,
	pause = VK_PAUSE,
	caps = VK_CAPITAL,
	esc = VK_ESCAPE,
	space = VK_SPACE,
	pgup = VK_PRIOR,
	pgdown = VK_NEXT,
	end = VK_END,
	left = VK_LEFT,
	right = VK_RIGHT,
	up = VK_UP,
	down = VK_DOWN,
	print = VK_PRINT,
	insert = VK_INSERT,
	del = VK_DELETE,
	zero = 0x30,
	one = 0x31,
	two = 0x32,
	three = 0x33,
	four = 0x34,
	five = 0x35,
	six = 0x36,
	seven = 0x37,
	eight = 0x38,
	nine = 0x39,
	A = 0x41, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z,
	add = 0x6B,
	separator,
	substract,
	decimal,
	divide,
	f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12,
	lshift = 0xA0,
	rshift,
	lctrl,
	rctrl,
	lalt, 
	ralt,
	KeysEnd,
} Key;

enum TileType {
	Forest,
	Path,
	Lava,
	Water,
	Rock,
	Treasure,
	Merchant,
	Boss,
	Player,
	TileEnumEnd,
};

enum TileStatus {
	Walked,
	NotWalked,
	Seen
};

enum RPGClass {
	Warrior,
	Paladin,
	Barbarian,
	Archer,
	Thief,
	Priest,
	Mage,
	Summoner,
	RPGClassEnumEnd,
};

enum RPGWarriorSkills
{
	WarriorAttack,
	RPGWarriorSkillsEnumEnd,
};

enum RPGPaladinSkills
{
	PaladinAttack,
	RPGPaladinSkillsEnumEnd,
};

enum RPGBarbarianSkills 
{
	BarbarianAttack,
	RPGBarbarianSkillsEnumEnd,
};

enum RPGArcherSkills 
{
	ArcherAttack,
	RPGArcherSkillsEnumEnd,
};

enum RPGThiefSkills
{
	ThiefAttack,
	RPGThiefSkillsEnumEnd,
};

enum RPGPriestSkills
{
	PriestAttack,
	RPGPriestSkillsEnumEnd,
};

enum RPGMageSkills
{
	MageAttack,
	RPGMageSkillsEnumEnd,
};

enum RPGSummonerSkills
{
	SummonerAttack,
	RPGSummonerSkillsEnumEnd,
};

enum Element {
	ElementNone = 0x00,
	Earth = 0x01,
	Wind = 0x02,
	Fire = 0x04,
	ElementWater = 0x08,
};

enum Physical {
	PhysicalNone = 0x00,
	Slash = 0x01,
	Thrust = 0x02,
	Blunt = 0x03,
};

enum RPGItemType
{
	Head,
	Chest,
	Legs,
	Weapon,
	Consumable,
	RPGItemTypeEnumEnd,
};

enum RPGItemUsageType
{
	HealHP,
	HealMP,
	AddStr,
	AddStam,
	AddDex,
	AddInt,
	AddLuk
};