typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef int s32; typedef short s16;

typedef struct Res { u8 pad[8]; u32 m8; u8 pad2[0x20 - 0xc]; u16 m20; u8 pad3[0x32 - 0x22]; s16 m32; u8 pad4[0x3d - 0x34]; u8 m3d; u8 pad5[0x60 - 0x3e]; s16 m60; } Res;
struct Anim;
typedef struct AnimVt { void* f[0x18]; void (*play)(struct Anim*, u32, int, u32); } AnimVt;
typedef struct Anim { AnimVt* vt; } Anim;
typedef struct Flags { u8 pad[0x70]; u8 m70; } Flags;
typedef struct Info { u8 pad[0xc]; u8 mc, md, me, mf; } Info;
typedef struct Self {
    u8 pad[0x1c]; Flags* m1c;
    u8 pad2[0x74 - 0x20]; void* m74; Res* m78; void* m7c; Anim* m80;
    u8 pad3[0xb4 - 0x84]; s32 mb4;
} Self;
typedef struct Mgr7142C8 { u8 pad[0x338]; s32 m338; } Mgr7142C8;
typedef struct Mgr709F30 { u8 pad[0x51c]; Info* m51c; } Mgr709F30;
Info* func_getInfo51C(Mgr709F30*);

extern Mgr7142C8* data_007142C8;
extern Mgr709F30* data_00709F30;
extern void* data_0070FB60;
void func_001788DC(Res*, void*);
u32 func_0031B9C8(u8);
u32 func_0031BC9C(u32);
void func_00367F80(void*, int, u32, u32);
u32 func_0055696C(void*, u32);
u32 func_00556AA8(void*, int);

void func_0046420C(Self* self)
{
    Res* r = self->m78;
    Info* info;
    void* g;
    if (r != 0 && self->m80 != 0) {
        s32 v = data_007142C8->m338;
        if (self->mb4 != v) {
            Anim* a;
            Res* r2;
            self->mb4 = v;
            r->m60 = (s16)v;
            func_001788DC(self->m78, self->m7c);
            r2 = self->m78;
            a = self->m80;
            {int z = 0;
            r2->m32 = z;
            r2->m3d = z;
            a->vt->play(a, self->m78->m8, z, self->m78->m20 >> 1);}
            self->m1c->m70 |= 2;
        }
    }
    info = func_getInfo51C(data_00709F30);
    if (info != 0) {
        func_00367F80(self->m74, 4, func_0031B9C8(info->me), info->mc + 1);
        func_00367F80(self->m74, 3, func_0031B9C8(info->mf), info->md + 1);
    }
    g = data_0070FB60;
    if (g != 0) {
        u32 id = func_00556AA8(g, 2);
        u32 n = func_0055696C(g, id);
        func_00367F80(self->m74, 6, func_0031BC9C(id), n);
        id = func_00556AA8(g, 1);
        n = func_0055696C(g, id);
        func_00367F80(self->m74, 5, func_0031BC9C(id), n);
    }
}
