#include "range.h"
struct Child{char pad[0xc];u32 value;};extern u32 bss_00725974;
struct A{virtual void a();Child*child;char pad[0x4c];};struct B{virtual u32*get();};struct D:A,B{virtual u32*get();};u32* D::get(){return child?&child->value:&bss_00725974;}
