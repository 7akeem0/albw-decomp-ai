#include "range.h"
typedef unsigned long long u64;
#pragma pack(4)
struct Link{char pad[0xc];void*object;};
struct Pair{u64 v;};struct S{char pad[0xc];Link*link;char pad10[0xc];Pair value;};struct Out{u32 pad;u64 value;};extern u32 func_00110B44(void*,void*,Pair);void f_5817C0(S*p,Out*out,void*arg){out->value=func_00110B44(p->link->object,arg,p->value);}
