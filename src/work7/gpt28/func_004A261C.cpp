#include "range.h"
extern void* func_0010CEE0(u32, void*, s32);
struct Buffer4A26 {
    u32 capacity, count;
    void* data;
    Buffer4A26(u32, void*);
};
Buffer4A26::Buffer4A26(u32 n, void* heap) {
    capacity=n;
    data=func_0010CEE0(n*8,heap,4);
    count=0;
}
