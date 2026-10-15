#include "ds3.h"
struct Child29CB { char pad[0x94]; u8 b94; };
struct Big29CB { char pad[0x2c1b]; u8 b2c1b; };
struct S29CB { char pad[0xf4]; Child29CB* mF4; };
extern "C" void* data_007142B0;
extern "C" void* data_0070B960;
extern "C" void func_002DFEC0(void*);
void func_0029CBF8(S29CB* p) {
    func_002DFEC0(data_007142B0);
    p->mF4->b94 = 0;
    Big29CB* b = (Big29CB*)data_0070B960;
    b->b2c1b = 0;
}
