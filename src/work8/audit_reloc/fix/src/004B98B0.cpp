#include "../a5.h"
void func_004B964C(void* a);
void func_004B9998(void* a);
struct A { void g(); };
void A::g() { func_004B964C(this); func_004B9998(this); }
