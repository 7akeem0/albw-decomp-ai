#include "../a5.h"
void func_004BC8D8(void* a);
void func_004BC61C(void* a);
struct A { void g(); };
void A::g() { func_004BC8D8(this); func_004BC61C(this); }
