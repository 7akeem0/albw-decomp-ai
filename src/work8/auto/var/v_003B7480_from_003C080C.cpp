#pragma O2
#pragma Otime



typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

extern "C" void* func_003838A8(void* self, u32 n);
extern "C" void func_003842C0(void* self, u32 n, u32 k, s32 flag);

struct Arr {
    s32 p0[3];
    s32 mNum;
    s32 mMax;
    void** mData;
};

struct Sub {
    char p0[0x20];
    Arr* m20;
};

struct XObj {
    char p0[0x8c0];
    Sub m8c0;
    char p1[0x936 - 0x8c0 - sizeof(Sub)];
    u8 m936;
};

struct Outer {
    char p0[0x48];
    XObj* m48;
};

static inline void issue(XObj* x,u32 n,u32 k,s32 flag){func_003842C0(&x->m8c0,n,k,flag);}
void func_003C080C(Outer* self) {
    XObj* x = self->m48;
    if (x->m936 == 3) {
        Sub* s = &x->m8c0;
        void* p = func_003838A8(s, 0x22);
        Arr* a = s->m20;
        volatile Arr* va = a;
        s32 dead = va->mNum; __schedule_barrier();   
        if (p != a->mData[0]) {
            issue(self->m48,0x22,0xa,1);
        }
    }
}
