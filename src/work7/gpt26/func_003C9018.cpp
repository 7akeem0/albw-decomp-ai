#include "range.h"
extern u32 func_00561354(void*);
extern u32 func_003C9A4C(const u32*, u32*);
u32 func_003C9018(void* p, u32* out) {
    u32 resource = func_00561354(p);
    return func_003C9A4C(&resource, out);
}
