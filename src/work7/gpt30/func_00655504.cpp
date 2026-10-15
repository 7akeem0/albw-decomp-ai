#include "range.h"
struct ActorHook30:ActorFocus30 {u8 pad8e8[0x914-0x8e8];u8 kind;u8 pad915;u8 flag;};
extern "C" void func_004FC570(ActorHook30*);
extern "C" void func_004FC178(ActorHook30*);
extern "C" void func_0028FCC8(Player30*);
void target(ActorHook30*p,s32 kind){
    func_004FC570(p);
    p->flag=0;
    func_004FC178(p);
    if(p->kind!=kind&&kind!=6){
        if(data_0070FB60)func_0028FCC8(data_0070FB60);
        u32*selected=&data_00706E20->focus->selected;
        if(*selected&&*selected==p->id)*selected=0;
        p->timer=250;
    }
}
