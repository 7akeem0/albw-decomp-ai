#include "range.h"
struct T588 { u32 m0; u32 m4; };
struct S588 { char pad[0x24]; T588* ptr; };
void func_00409F74(void*,u32);
void f_588258(const S588* p) { func_00409F74(&p->ptr->m4,0x4000001); }
