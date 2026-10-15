#include "range.h"
struct Model28 { void func_004CF478(s8,s32); };
struct Obj28C3 { u8 p0[0x14]; Model28* model; u8 p18[0xc9-0x18]; s8 flag; void f(s8); };
void Obj28C3::f(s8 a){ flag=a; model->func_004CF478(a,0); }
