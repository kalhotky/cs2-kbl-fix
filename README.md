# CS2 Keyboard Layout Fix

English keyboard layout fix for CS2/CS:GO. Removes that annoying english keyboard layout after launching the game.

> I'm not sure if this issue is still present in the latest version of CS2, I don't play it anymore.

## Usage

1. Launch CS2/CS:GO.
1. Open `cs2_kbl_fix.exe` after the new keyboard layout has appeared.

## Technical details

Going from memory `inputsystem.dll` tries to map english virtual keys to other languages so it calls `user32!LoadKeyboardLayoutA` with `00000409` as locale identifier (U.S. English), but then forgets to unload it using `user32!UnloadKeyboardLayout` which is what the fix does.