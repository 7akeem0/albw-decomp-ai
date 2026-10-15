#include "range.h"
struct Message4CB7 { char pad[0x27]; u8 active; };
struct Object4CB7 { void update(u32,const Message4CB7*); };
extern void func_004FABDC(Object4CB7*,s32,s32,s32);
void Object4CB7::update(u32 kind,const Message4CB7* message) {
    u32 value=kind&255;
    if((value==30 || (value>=14&&value<=17)) && message->active)
        func_004FABDC(this,1,-1,0);
}
