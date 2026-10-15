#include "range.h"
struct Base12C9 {Base12C9();virtual ~Base12C9();char pad[0x18-4];Flag32_24 flags;};
struct Object2325:Base12C9 {Object2325();u32 counter;};
Object2325::Object2325():counter(0){flags.set(4);}
