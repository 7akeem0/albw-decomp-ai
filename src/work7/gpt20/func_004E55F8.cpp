#include "ladder_types.h"
struct Arg4E55{char pad0[0x28];u32 reference;char pad2c[0xc];u8 kind;};
extern u32 func_00521080(void*,const u32*);
bool f_004E55F8(void* p,const Arg4E55* a){if(a->kind==1&&func_00521080(p,&a->reference)==0)return false;return true;}
