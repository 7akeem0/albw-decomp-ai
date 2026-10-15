#include "../../work7/ds3/ds3.h"
struct Q27D7 { f32 f0, f4, f8, fC, f10; };
struct CP27 { u32 cur, max; };
struct S27D7 { char pad[0x59c]; CP27 m59c; char p5a4[8]; Q27D7* m5AC; };
extern "C" f32 func_0051CF68(void*, f32, f32, f32);
extern "C" bool func_00588BF0(S27D7*, s32);
extern "C"  void func_00660E2C(void*, s32);
void func_0027D0E4(S27D7* p) {
    Q27D7* q = p->m5AC;
    q->f10 = func_0051CF68(&q->fC, q->f4, q->f0, q->f8);
    CP27 t = p->m59c;
    if (t.cur < t.max) return;
    if (func_00588BF0(p, 0)) func_00660E2C((char*)p + 0x40c, 2);
}
