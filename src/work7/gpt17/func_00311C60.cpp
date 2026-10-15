#include "range.h"
struct Obj {u8 pad[0x78c];void*child;u8 gap[0xa3b-0x790];u8 flag;};
extern void func_004BC61C(Obj*);extern const Vec3 bss_0077EF84;extern void func_00151150(void*,const Vec3*);
void f_00311C60(Obj*p){func_004BC61C(p);if(p->flag&&p->child)func_00151150(p->child,&bss_0077EF84);}
