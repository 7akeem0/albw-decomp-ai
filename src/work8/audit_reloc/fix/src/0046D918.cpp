#include "../a5.h"
void func_001B6D40(void* a);
void func_004B964C(void* a);
struct A { void g(); };
void A::g() { func_001B6D40(this); func_004B964C(this); }
