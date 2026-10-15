typedef unsigned int u32;
typedef int s32;

struct Self;

struct X {
    u32 a;
    u32 b;
    u32 c;
};

struct Frame {
    X x;
    void* y;
};

void func_003C7DD4(X* out,u32 zero,u32 a1,u32 zero4);
static void sol1ctx_0(X* const& a0,u32 a1,u32 a2){X* b0=a0;u32 b1=a1;u32 b2=a2;func_003C7DD4(b0,b1,b2,0);}

s32 func_003C9544(void** out, X* in);
s32 func_0010EB00(Self* self,u32 v,u32 zero,u32 zero4);

s32 func_003C7E50(Self* self, u32 a1) {
    u32 z = 0;
    Frame f;
    func_003C7DD4(&f.x,z,a1,0);
    s32 r = func_003C9544(&f.y, &f.x);
    bool bad = r < 0;
    if (bad) {
        return r;
    }
    s32 r2 = func_0010EB00(self,(u32)f.y,z,0);
    bool bad2 = r2 < 0;
    if (bad2) {
        void* obj = f.y;
        void (*fn)(void*) = (void (*)(void*))((*(void***)obj)[12]);
        fn(obj);
        return r2;
    }
    return 0;
}
