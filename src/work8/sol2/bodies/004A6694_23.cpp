


typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

struct Local {
    u32 m0;
    u32 m4;
    u32 m8;
    s32 mC;
    u8 m10;
};

struct Sub {
    char p0[0xc];
    void* m0c;
};

struct Src {
    char p0[0xc];
    Sub* m0c;
    char p1[0x1c - 0x10];
    u32 m1c;
    u32 m20;
};

extern "C" u32 func_00110B44(void* a, u32 b, u32 c, u32 d);
extern "C" void func_00110AEC(Local* l);
extern "C" void func_00110988(void* self, Src* s, Local* l);

struct impl_004A6694B2{u32 v;impl_004A6694B2(u32 x):v(x){}};
void impl_004A6694(void* self,Src* src,impl_004A6694B2 p2){u32 arg=p2.v;
    Local L;
    L.m0 = 0;
    L.m4 = 0;
    L.m8 = 0;
    L.mC = -1;
    L.m10 = 0;
    void* q = src->m0c->m0c;
    L.m4 = func_00110B44(q, arg, src->m1c, src->m20);
    L.m8 = 0;
    func_00110AEC(&L);
    func_00110988(self, src, &L);
}
void func_004A6694(void* self, Src* src, u32 arg){impl_004A6694(self,src,arg);}
