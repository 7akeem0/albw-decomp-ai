#include "range.h"
struct Owner1287{char pad0[0x8bc];StateMgrBlock state;};
struct Message1287{char pad0[0x24];u8 kind;};
extern "C" void func_006568D8(StateMgrBlock*,s32) ;
extern "C" s32 func_0012873C(Owner1287* p,s32 value,const Message1287* message){
    if(message->kind==11 && (p->state.current==1 || p->state.current==8)){
        func_006568D8(&p->state,2);return 0;
    }
    return value==10?15:value;
}
