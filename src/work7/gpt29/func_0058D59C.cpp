#include "range.h"
struct Owner58D5 { char pad[0x14]; void* actor; };
struct SaveData29 { char bytes[0x1a0]; };
extern void func_001DB87C(void*,SaveData29*);
extern void* func_0010E3C4(void*,const void*,u32);
void copySaveData29(void* out,const SaveData29& data){func_0010E3C4(out,&data,sizeof(data));}
void f_0058D59C(Owner58D5* p,void* out){SaveData29 data;func_001DB87C(p->actor,&data);copySaveData29(out,data);}
