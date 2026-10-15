typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef int s32; typedef unsigned int u32; typedef float f32;
struct Vec3 { f32 x, y, z; };
struct StateControl { u32 count; };
struct Blk544 { u8 pad[0xc8]; f32 m8c8; u8 pad2[0xe0-0xcc]; u16 m8e0; u16 m8e2; u16 m8e4; };
struct P544 {
  u8 pad0[0x8c8+0xc8];
};
extern "C" f32 func_00219548(void*, f32);
extern "C" s32 func_00219630(void*, Vec3*, f32);
extern "C" void func_00219668(void*);
extern "C" Vec3* func_00520FC0(void*);
extern "C" void func_00660AE4(StateControl*, s32);
extern "C" void func_003931EC(StateControl*, s32);
extern "C" __weak void func_00660B50(StateControl*);

void target(P544* p){
  func_00219548(p, 0.04f);
  Blk544* b = (Blk544*)((u8*)p + 0x800);
  if (b->m8e4 == 0) {
    if (func_00219630(p, func_00520FC0(p), b->m8c8)) {
      if (func_00219630(p, (Vec3*)((u8*)p + 0x3d0), b->m8c8)) {
        func_00660AE4((StateControl*)((u8*)p+0x8f0), 2);
        func_003931EC((StateControl*)((u8*)p+0x8f0), 2);
        func_00660B50((StateControl*)((u8*)p+0x8f0));
        return;
      }
    }
  }
  if (b->m8e0) { b->m8e0--; return; }
  if (func_00219630(p, (Vec3*)((u8*)p + 0x3d0), b->m8c8 * 0.3f)) {
    func_00660AE4((StateControl*)((u8*)p+0x8f0), 0);
    func_003931EC((StateControl*)((u8*)p+0x8f0), 0);
    func_00660B50((StateControl*)((u8*)p+0x8f0));
    return;
  }
  func_00219668(p);
}

