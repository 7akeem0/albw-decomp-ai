typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef int s32; typedef unsigned int u32; typedef float f32;
struct Vec3 { f32 x, y, z; };
struct Flag{u32 v;void clear(u32 m){v&=~m;}};
struct Npc672 {
  u8 pad0[0x3dc];
  f32 m3dc;
  u8 pad1[0x3e4-0x3e0];
  f32 m3e4;
  s32 m3e8;
  u8 pad2[0x59c-0x3ec];
  Flag m59c;
  u8 pad3[0x8dc-0x5a0];
  s32 m8dc;
  u8 pad4[0x911-0x8e0];
  s8 m911;
  u8 pad5[0x97c-0x912];
  s32 m97c;
  u32 m980;
};
extern "C" void func_002F8DE4(Npc672*, s32, s32, s32);
extern "C" Vec3* func_00520FC0(Npc672*);
extern "C" void func_00115C70(Vec3*, const Vec3*, const Vec3*);
extern "C" s32 func_004904CC(f32, f32);
extern "C" void func_0051D37C(s32*, u32, u32);
extern "C" void func_004FAD90(Npc672*);
void reset(Npc672*p,s32 n){p->m3dc=0.f;__schedule_barrier();p->m3e4=0.f;p->m97c=n;}
void target(Npc672* p){
  struct Loc { s32 a; Vec3 v; } L;
  s8 b = p->m911;
  if (b == 6 || b == 8) {
    p->m59c.clear(0x100);
  } else {
    func_002F8DE4(p, 3, 5, 0);
  }
  reset(p,0x1e);
  const Vec3* pp = func_00520FC0(p);
  func_00115C70(&L.v, pp, (const Vec3*)((u8*)p + 0x3d0));
  L.a = func_004904CC(L.v.x, L.v.z); __schedule_barrier();
  L.a = L.a - p->m3e8;
  func_0051D37C(&L.a, 0xe0000000u, 0x20000000u);
  p->m8dc = L.a; __schedule_barrier();
  if (p->m980) func_004FAD90(p);
}
