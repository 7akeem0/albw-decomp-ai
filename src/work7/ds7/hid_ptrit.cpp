typedef unsigned int u32;
struct T { u32 w[8]; };
extern T data_00714C8C;
struct S { T* p; S() : p(&data_00714C8C) {} };
S s;
