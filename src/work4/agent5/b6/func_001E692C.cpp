#include "../a5.h"
void func_004ECF6C(void* a);
void func_004ECEAC(void* a);
struct A { void g(); };
void A::g() { func_004ECF6C(this); func_004ECEAC(this); }
