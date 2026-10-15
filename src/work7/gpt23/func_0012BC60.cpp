#include "range.h"
extern "C" f32 func_0058AC78(Actor12BC*);
extern "C" void func_004FB4E0(Actor12BC*,f32);
extern "C" void func_0012BC60(Actor12BC* p) {
    func_004FB4E0(p,func_0058AC78(p)*0.9f);
    if(p->count>10)p->flags.set(0x1000);
}
