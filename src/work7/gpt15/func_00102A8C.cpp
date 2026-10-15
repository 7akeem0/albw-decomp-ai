#include "range.h"
struct S{char pad[0x18];u32 a;};extern S data_00714858;extern "C" bool func_00102A8C(){return (data_00714858.a&7)==0;}
