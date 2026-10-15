#include "range.h"
struct Child{char pad[0x38];u32 value;};struct S{char pad[0x9c];Child*child;};extern S bss_0079CAB8;
void f_601450(u32 n){if(bss_0079CAB8.child)bss_0079CAB8.child->value=n;}
