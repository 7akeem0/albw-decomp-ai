#include "range.h"
struct Disposer50D4 {
    Disposer50D4(u32,u32);
    virtual ~Disposer50D4();
    char pad4[0xc];
};
struct Object50D4 : Disposer50D4 {
    u32 value;
    Object50D4();
};
Object50D4::Object50D4() : Disposer50D4(0,3), value(0) {}
