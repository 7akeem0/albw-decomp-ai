typedef unsigned int u32;
typedef long long s64;
struct T { u32 w[8]; };
extern T other;
struct S { T* p; S() : p(&other) {} };
S s;
