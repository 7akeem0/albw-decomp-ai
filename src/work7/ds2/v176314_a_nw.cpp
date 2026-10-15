#include "ds2.h"

extern s32 func_0054E044(void*);
extern s32 func_0054EB78(void*);
extern void func_00325308(void*);
extern void func_00658EE0(void*, int) ;

struct VT1763 { char pad[0x5c]; s32 (*f)(void*, void*); };
struct Obj176314 {
    VT1763* vt;
};

void func_00176314(Obj176314* self) {
    if (!func_0054E044(self)) return;
    if (!func_0054EB78(self)) return;
    func_00325308(self);
    if (!self->vt->f(self, (char*)self + 0x478)) return;
    func_00658EE0((char*)self + 0x4f0, 1);
}

