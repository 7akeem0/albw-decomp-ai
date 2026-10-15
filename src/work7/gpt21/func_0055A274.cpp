#include "range.h"
struct S { char pad[0xc]; u32 mC; };
extern void* data_00711F50;
extern void func_004E99DC(void*,u32);
void f_55A274(S* p) { func_004E99DC(data_00711F50,p->mC); }
