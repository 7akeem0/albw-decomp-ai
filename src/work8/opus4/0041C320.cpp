typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8;
struct Ret8 { u32 a; u32 b; Ret8(u32 x); u32 getB() const; };

struct Arg { u32 m0; u32 m4[4]; u32 m14[4]; s8 m24[4]; u32 m28; };
struct Obj;
struct ObjVt { void* v0; void* v4; void* v8; void (*vc)(Obj*); };
struct Mgr;
extern "C" {
void func_0041B8B4(Obj*);
Ret8 func_0041365C(u32 x);
void func_00416EF8(void* p, u32 a, u32 b);
void func_00417690(void* p);
void func_00410690(void* p, u32 a);
void func_00413394(void* p, u32 a, s32 b);
Mgr* func_0041C81C(void);
void func_0041C870(Mgr*, void*);
Mgr* func_00414FF0(void);
void func_00415644(Mgr*, void*);
}
struct E12 { u32 a, b, c; };
struct E16 { u32 a, b, c, d; };
struct Obj { ObjVt* vt; char pad4[8]; u8 mc; char padd[0x44 - 0xd]; char m44[0xc]; char m50[0x90 - 0x50]; void* m90; char pad94[0xf4 - 0x94];
  E16 mf4[4]; E12 m134[4]; u8 m164; u8 m165; u8 m166; };
void FUN_0041c320(Obj* self, Arg* a)
{
    void* p;
    u32 i;
    if (self->mc) func_0041B8B4(self);
    p = self->m90;
    if (p == 0) { self->vt->vc(self); return; }
    {
    Ret8 r(a->m0);
    func_00416EF8(p, r.getB(), a->m28);
    }
    func_00417690(p);
    for (i = 0; i < 4; i++) {
        func_00410690(&self->m134[i], a->m4[i]);
        func_00413394(&self->mf4[i], a->m14[i], a->m24[i]);
    }
    self->m164 = 3;
    self->mc = 1;
    func_0041C870(func_0041C81C(), self->m44);
    func_00415644(func_00414FF0(), self->m50);
    self->m166 = 1;
}
