#define OBJ1D8_EXTRA void f(s32 a); void func_001D8BF4(); void func_001D8F9C(); void func_001D8E70(); void func_0014E138(s32 a); \
  void stopAnim(); void playAnim();
#include "obj1d8.h"
void func_00169A80(Ctl* c);
void func_00168E9C(Ctl* c, void* id, s32 z);
// Out-of-line helpers in the same TU are auto-inlined by ARMCC -O3 AFTER address CSE:
// orig reloads [r4,#0x410] (no 'add r5,this,#0x410'); writing m410 twice in f() hoists the address.
void Obj1D8::stopAnim() { func_00169A80(m410); }
void Obj1D8::playAnim() { func_00168E9C(m410, m40c, 0); }
// vtable ro_6D1850 slot; tail-calls the base implementation 0x14E138
void Obj1D8::f(s32 a) {
    stopAnim();
    playAnim();
    func_001D8BF4();
    func_001D8F9C();
    func_001D8E70();
    func_0014E138(a);
}
