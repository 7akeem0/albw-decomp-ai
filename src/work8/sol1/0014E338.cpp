
typedef unsigned int u32;
typedef float f32;
typedef unsigned char u8;

union Vec2 { f32 xy[2]; u32 w[2]; };

extern "C" void* func_005330BC(void*);
extern "C" void* func_0014DF18(void* mgr, void* a2, u32 a3, void* r, Vec2 v);

struct Self {
    char  pad0[0x2d0];
    void* m2d0;             
    char  pad1[0x34c - 0x2d4];
    void* m34c;             
};

struct SolBox_0014E338_2{void* v;SolBox_0014E338_2(void* x):v(x){}};
struct SolBox_0014E338_4{u32 v;SolBox_0014E338_4(u32 x):v(x){}};
void sol1_boxed_0014E338(Self* self,u32 a1,SolBox_0014E338_2 box2,u32 a3,SolBox_0014E338_4 box4,Vec2 v){void* a2=box2.v;u32 a4=box4.v;
    void** arr = (void**)((u8*)self->m2d0 + 0x1c8);
    void* elem = arr[a3];
    void* r = func_005330BC(elem);
    void* q = func_0014DF18(self->m2d0, a2, a3, r, v);
    if (a4)
        self->m34c = q;
}
void f(Self* self, u32 a1, void* a2, u32 a3, u32 a4, Vec2 v) {sol1_boxed_0014E338(self,a1,a2,a3,a4,v);}
