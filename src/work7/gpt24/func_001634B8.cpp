#include "range.h"
struct Obj163424{char pad[0x8f8];u32 handle;char pad8fc[0x920-0x8fc];u8 flag;};
extern GameActors24*data_00706E20;
extern void func_004F8638(Obj163424*,s32);
extern void*func_0052FBA0(u32*,u32);
extern void func_0028AE30(void*);
extern "C" void target(Obj163424*p){func_004F8638(p,-1);void*q=func_0052FBA0(data_00706E20->actors,p->handle);const u8&z=0;if(q)func_0028AE30(q);p->flag=z;}
