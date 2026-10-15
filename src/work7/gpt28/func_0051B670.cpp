#include "range.h"
struct Object51B6 { char pad0[0x70]; void* child; s16 mode; };
extern void func_00472E60(void*);
extern void func_00486240(void*);
void f_0051B670(Object51B6* owner) {
    switch(owner->mode) {
    case 0: func_00486240(owner->child); break;
    case 1: func_00472E60(owner->child); break;
    }
}
