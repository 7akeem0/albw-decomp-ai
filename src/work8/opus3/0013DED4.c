typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16; typedef float f32;
typedef struct Vec3 { f32 x, y, z; } Vec3;
typedef struct Actor Actor;
typedef struct Msg { u32 m0; Vec3 m4; char pad10[0x18]; u32 m28; } Msg;
typedef struct Obj {
    char pad0[0x3d0]; Vec3 m3d0; char pad3dc[0x56c - 0x3dc]; Vec3 m56c; Vec3 m578;
    char pad584[0x62e - 0x584]; u8 m62e;
} Obj;
extern char* data_00706E20;
extern const s32 ro_00693060, ro_00693064, ro_00693074, ro_00693504, ro_006935EC, ro_006935F4;
extern Actor* func_0052FBA0(void* mgr, u32 h);
extern s32 func_00588BE4(Actor* a);
extern void func_00520F54(Actor* a, Vec3* p, Vec3* q);
extern void func_00115C54(Vec3* out, const Vec3* a, const Vec3* b);
extern void func_001507A8(Obj* o, Msg* m);

static void hit(Actor* a, Obj* self) { func_00520F54(a, &self->m578, &self->m3d0); }

void FUN_0013ded4(Obj* self, Msg* m)
{
    Actor* a = func_0052FBA0(data_00706E20 + 0x3dbbc, m->m28);
    if (a != 0) {
        s32 id = func_00588BE4(a);
        if (id == ro_00693060 || id == ro_00693064 || id == ro_00693074 || id == ro_00693504)
            hit(a, self);
        if (id != ro_006935EC && id != ro_006935F4)
            self->m62e = 0;
    }
    { Vec3* p = &self->m56c; func_00115C54(p, p, &m->m4); }
    func_001507A8(self, m);
}
