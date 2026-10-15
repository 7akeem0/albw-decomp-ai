#include "range.h"
struct A { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14(); virtual void a15(); virtual void a16(); virtual ~A(); char pad[0x34]; };
struct B { virtual ~B() {} };
struct X : A, B { virtual ~X(); };
extern void* data_0070B898;
extern void func_00503970(void*, u32);
X::~X() { func_00503970(data_0070B898, 14); }
