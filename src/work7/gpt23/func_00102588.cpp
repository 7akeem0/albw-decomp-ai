#include "range.h"
struct ExpHeapState { char storage[0x3c]; };
struct HeapOwner {
    char pad0[0x18];
    ExpHeapState heap;
    u32 value54;
};
extern "C" void* func_0010467C(ExpHeapState*,void*,u32,u16);
extern "C" void func_0010C1B8();
extern "C" void func_00102588(HeapOwner* p,void* buffer,u32 size,u32 flags) {
    if (!func_0010467C(&p->heap,buffer,size,(u16)flags)) func_0010C1B8();
    p->value54 = 0;
}
