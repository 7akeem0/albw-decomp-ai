typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef unsigned long long u64; typedef float f32;
typedef struct Random Random;
typedef struct P { char pad[0xb48]; char mb48[4]; } P;
typedef struct Self Self;
typedef struct SelfVt { char pad[0x104]; int (*f104)(Self*, int); char pad108[0x138 - 0x108]; void (*f138)(Self*, int, int); } SelfVt;
struct Self { SelfVt* vt; char pad4[0x44]; P* m48; char pad4c[0x6c - 0x4c]; u32 m6c; };
extern Random* func_0058A7D4(P*);
extern u32 func_00111A64(Random*);
extern int func_0055C4AC(void*, f32);

static u32 getU32n(Random* r, u32 n) { return (u32)(((u64)func_00111A64(r) * n) >> 32); }

void FUN_003c418c(Self* self)
{
    if (!(self->vt->f104(self, 0) || self->vt->f104(self, 2) || self->vt->f104(self, 1))) return;
    if (self->m6c < 10) return;
    if (!func_0055C4AC(self->m48->mb48, 0.7f)) return;
    if ((s32)getU32n(func_0058A7D4(self->m48), 101) > 5) return;
    self->vt->f138(self, 5, 1);
}
