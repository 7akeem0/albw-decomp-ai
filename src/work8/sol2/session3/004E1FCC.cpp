typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Vec3 {
    f32 x, y, z;
    void setAdd(const Vec3& a, const Vec3& b);
};

struct Obj;
void func_004E2030(Obj* self);

struct Obj {
    char pad0[0x2d7];
    u8 m2d7;
    char pad2d8[0x3d0 - 0x2d8];
    Vec3 m3d0;
    Vec3 m3dc;
    char pad3e8[0x420 - 0x3e8];
    s32 m420;
    char pad424[0x4c1 - 0x424];
    u8 m4c1;
    char pad4c2[0x514 - 0x4c2];
    u32 m514;
    u32 m518;
};

static void add(Vec3* dst,const Vec3* b,const Vec3* a){dst->setAdd(*a,*b);}
void func_004E1FCC(Obj* self) {
    if (self->m420 == 1) {
        if (self->m4c1 != 0) self->m4c1 = 0;
    }
    add(&self->m3d0,&self->m3dc,&self->m3d0);
    u32 a = self->m514;
    u32 b = self->m518;
    if (a < b) {
        a = a + 1;
        self->m514 = a;
    }
    if (a >= b) self->m2d7 = 1;
    func_004E2030(self);
}
