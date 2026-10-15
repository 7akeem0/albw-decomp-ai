#include "ladder_types.h"
struct O5205 {char pad0[0x7c9];u8 kind;u8 pad7CA;u8 flag;};
extern "C" u8 func_00530290(O5205*);
extern "C" u32 func_00520598(O5205* p){
    if(!func_00530290(p)) return 0;
    if(p->kind==1) {
        if(!p->flag) return 0;
    }
    return 16;
}
