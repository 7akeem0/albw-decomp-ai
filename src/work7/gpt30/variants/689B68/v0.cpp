#include "../../range.h"
struct PrimaryOwner30 {
    u32 field4;virtual ~PrimaryOwner30(){}
    virtual void v0();virtual void v1();virtual void v2();virtual void v3();
};
struct SecondaryOwner30 {
    u8 pad4[0x198-4];virtual~SecondaryOwner30();
    bool hasResource()const;void close();
};
extern "C" void func_0058FA08(void*);
void operator delete(void*) throw();
struct BufferOwner30:PrimaryOwner30,SecondaryOwner30{
    void*bufferA;void*bufferB;void clean();virtual~BufferOwner30();
};
void BufferOwner30::clean(){if(hasResource())close();if(bufferA){func_0058FA08(bufferA);bufferA=0;}if(bufferB){func_0058FA08(bufferB);bufferB=0;}}
BufferOwner30::~BufferOwner30(){clean();}
