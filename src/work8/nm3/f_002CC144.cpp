typedef unsigned int u32;typedef int s32;
struct S2CC1{char pad[0x9bc];u32* m9BC;};
extern "C" void* data_0070FB60;
extern "C" u32 func_005568E8(void*);
void func_002CC144(S2CC1* p,u32* a){void* g=data_0070FB60;if(!g)return;u32 v=func_005568E8(g);if(*a!=v)return;p->m9BC[0]|=0x20000;}
