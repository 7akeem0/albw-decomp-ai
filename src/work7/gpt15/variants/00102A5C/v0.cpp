#include "../../range.h"
struct G{char pad[0x18];u32 flags;};extern G data_00714858;extern "C" bool func_00102A5C(){return (data_00714858.flags&7)==6;}
