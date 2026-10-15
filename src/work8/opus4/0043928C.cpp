typedef unsigned int u32; typedef int s32; typedef unsigned short u16; typedef short s16; typedef unsigned char u8; typedef float f32;
struct St { char pad[0xd]; u8 md; u8 me; void setE(u8 v) { me = v; } };
extern "C" void func_002317C0(void*, f32);
struct Ctl { u16 m0; u16 m2; char pad4[4]; u32 m8;
  void start(u16 a, u16 b, u32 f); };
struct Obj { char pad0[0x1c]; u32 m1c; char pad20[0x74 - 0x20]; char m74[0xc]; char m80[0xc]; char m8c[0xc]; char m98[0xc]; char ma4[0xc]; char mb0[0xc];
  Ctl mbc; u8 pad_c8[0xcd - 0xc8]; u8 mcd; char padce[0x160 - 0xce]; u32 m160; char pad164[0x1a4 - 0x164]; St* m1a4; St* m1a8; St* m1ac; s16 m1b0; };
extern "C" {
void func_00439E74(Obj*);
void func_00231448(void*);
void func_002317C0(void*, f32);
void func_0012C718(St*);
}
void Ctl::start(u16 a, u16 b, u32 f) { m8 = f; m2 = a; m0 = b; func_002317C0(this, 1.0f); }
static int isIn(St* s, u8 v) { return s->md == v && s->me == v; }
extern "C" void FUN_0043928c(Obj* o)
{
    if (!o->mcd) func_00439E74(o);
    if (isIn(o->m1a4, 0)) { func_00231448(o->m98); func_002317C0(o->m74, 1.0f); o->m1a4->setE(1); }
    if (isIn(o->m1a8, 3)) { func_00231448(o->m80); func_002317C0(o->ma4, 1.0f); func_0012C718(o->m1a8); }
    if (isIn(o->m1ac, 3)) { func_00231448(o->m8c); func_002317C0(o->mb0, 1.0f); func_0012C718(o->m1ac); }
    if (o->m160 == 0) { o->mbc.start(6, 0, o->m1c); }
    o->m1b0 = -1;
}
