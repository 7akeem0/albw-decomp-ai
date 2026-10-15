#include "ladder_types.h"
struct O4FACA {char pad0[0x40c];void* model;void* controller;char pad414[0xcc];void* resource;};
extern void func_00169688(void*,u32,const void*,void*);
extern void func_00133870(void*,u32,void*);
void target(O4FACA*p,u32 index,const void*name){func_00169688(p->controller,index,name,p->resource);func_00133870(p->controller,index,p->model);}
