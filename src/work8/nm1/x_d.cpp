#include "../../work7/gpt25/range_types.h"
struct Child2B1440 {char pad[0x248];u8 kind;u8 unused;u8 flag;char gap[9];Flag16 flags;};
extern "C" void f_002B1448(Child2B1440*q,s32 kind,u16 mask,u8 flag){u8 k = kind>=0 ? (u8)kind : 4; q->kind=k; q->flags.set(mask); q->flag=flag;}
