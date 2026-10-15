#ifndef GPT30_NPC_RESET152_H
#define GPT30_NPC_RESET152_H
#include "range.h"
struct NpcTimer80030 {u8 pad0[0x34];f32 speed;u8 pad38[0x48-0x38];u16 timer,mode;u8 pad4c[4];u16 secondary;};
struct NpcReset30:NpcControl30 {u8 pad862[0x911-0x862];u8 randomKind;};
#endif
