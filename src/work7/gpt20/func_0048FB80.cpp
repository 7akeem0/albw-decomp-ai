#include "ladder_types.h"
extern void func_0058FA08(void*);
struct Object48FB {
    virtual ~Object48FB();
    char pad4[0x10];void* buffer;char pad18[8];Flag32 flags;
    void release();
};
void Object48FB::release(){if(flags.v&1)func_0058FA08(buffer);}
Object48FB::~Object48FB(){release();}
