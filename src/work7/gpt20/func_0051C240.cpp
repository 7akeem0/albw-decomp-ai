#include "ladder_types.h"
struct Child51C2 { char pad0[0x280]; u8 flag; };
struct O51C2 { char pad0[0x70]; Child51C2* child; u16 kind; };
extern "C" bool func_0058DEF4();
extern "C" void func_0051C240(O51C2* p) {
    if(func_0058DEF4() && p->kind==3) {
        if(p->child) p->child->flag=1;
    }
}
