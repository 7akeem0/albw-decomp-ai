#include "range.h"
struct Obj3727 {char pad[0x8ac];Flag32 flags;};
extern void func_004BD280(Obj3727*,s32,s32);
void func_00372780(Obj3727* p,s32 a,s32 b){p->flags.change(0x1000,a==3);func_004BD280(p,a,b);}
