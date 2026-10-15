#include "ladder_types.h"
struct O4956 {char pad0[0xd4];char atD4[0xd4];char at1A8[0x64];char at20C[0x64];char at270[4];};
extern "C" void func_0048E924(void*,O4956*,void*,void*,void*,void*,void*,u32,f32,f32);
extern "C" void func_00495670(O4956*p,void* a,void* b,f32 x,f32 y){
    func_0048E924(p->at270,p,p->at1A8,p->atD4,p->at20C,a,b,0,x,y);
}
