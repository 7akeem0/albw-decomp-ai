typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef int s32; typedef unsigned int u32; typedef float f32;
struct StateControl { u32 count; };
struct Npc656 {
  u8 pad0[0x8e0];
  u16 timer8e0;
  u8 pad1[0x8f0-0x8e2];
  StateControl state;
  u8 pad2[0x915-0x8f4];
  u8 f915;
  u8 pad3[4];
};
extern "C" f32 func_00219548(Npc656*, f32);
extern "C" void func_004FB4E0(Npc656*, f32);
extern "C" s32 func_0058ACC8(Npc656*, f32);
extern "C" void func_0065DF0C(StateControl*, s32);
extern "C" void func_003931EC(StateControl*, s32);
extern "C"  void func_0065DF78(StateControl*);
void target(Npc656* p){
  f32 s = func_00219548(p, 0.33f);
  s = s * 3.030303f;
  s = s * s;
  s = s * 2.5f;
  if (s < 1.0f) s = 1.0f;
  else if (s > 2.5f) s = 2.5f;
  func_004FB4E0(p, s);
  if (p->timer8e0) { p->timer8e0--; return; }
  if (func_0058ACC8(p, 0.0f)) {
    u8 v = p->f915;
    func_0065DF0C(&p->state, v);
    func_003931EC(&p->state, (s8)v);
    func_0065DF78(&p->state);
  }
}
