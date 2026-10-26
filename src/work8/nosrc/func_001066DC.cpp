// PtrArray-with-inline-buffer constructor: zero three header words, zero the
// PtrArrayImpl fields, then point the impl at the inline buffer behind it.
// The writeback store (str r1,[r0,#0xc]!) comes from the pointer bump p += 3.
typedef unsigned int u32;
struct PtrArrayImpl { u32 num; u32 max; void* ptrs; };
extern "C" void setBuffer(PtrArrayImpl* arr, u32 max, void* buf);
extern "C" void* f(void* self) {
    u32* p = (u32*)self;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p += 3;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    setBuffer((PtrArrayImpl*)p, 0xC4, p + 3);
    return self;
}
