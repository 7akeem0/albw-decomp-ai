#include "range.h"
struct M{u32 a;char pad[0x3c];u32 b;void set(u32 x,u32 y){a=x;b=y;}};struct S{char pad[0x20];M m;};extern S data_00714888;extern "C" void func_00101788(u32 a,u32 b){data_00714888.m.set(a,b);}
