


typedef unsigned int u32;
typedef signed int s32;

struct Link {
    char p0[4];
    Link* m4;
};

struct Holder {
    Link* cur;
};

struct Src {
    char p0[8];
};

extern "C" void func_00676AA0(void** out, void* p);
extern "C" void func_006769C4(void* p, u32* v);

static void consume3D(void*p,u32*t,u32 value_input){*t=value_input;func_006769C4((char*)p+8,t);}
s32 func_003D7F98(Holder* self, u32* outv, Src** src, u32* inv) {
    Src* p = *src;
    u32 tmp;
    void* res;
    func_00676AA0(&res, (char*)p + 8);
    if (res == 0) return 2;
    consume3D(res,&tmp,*inv);
    *outv = *inv;
    self->cur = self->cur->m4;
    return 0;
}
