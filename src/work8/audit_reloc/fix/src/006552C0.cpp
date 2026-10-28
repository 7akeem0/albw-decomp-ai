typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef int s32; typedef unsigned int u32; typedef float f32;
typedef unsigned long long u64;
struct Vec3 { f32 x, y, z; };
struct StateControl { u32 count; };
struct P562 { u8 pad[0x8d8]; s32 m8d8; };
struct Blk562 { u8 pad[0xc8]; f32 m8c8; u8 pad2[0xe0-0xcc]; u16 m8e0; u16 m8e2; u16 m8e4; };
extern "C" void* data_007124F0;
extern "C" u32 func_00111A64(void*);
extern "C" f32 func_00219548(void*, f32);
extern "C" s32 func_00219630(void*, Vec3*, f32);
extern "C" Vec3* func_00520FC0(void*);
extern "C" void func_0065DF0C(StateControl*, s32);
extern "C" void func_003931EC(StateControl*, s32);
extern "C" __weak void func_0065DF78(StateControl*);
static void turn562(P562*p,Blk562*b,u32 r,u16 delay){if(r&1)r=0u-r;p->m8d8=(s32)r;b->m8e0=delay;}
void target(P562* p){
  func_00219548(p, 0.04f);
  Blk562* b = (Blk562*)((u8*)p + 0x800);
  if (b->m8e0) {
    b->m8e0--;
  } else {
    volatile u32 mul = 0x671c71c7u; 
    u32 raw = func_00111A64((char*)data_007124F0 + 0x660);
    u32 r = (u32)(((u64)raw * mul) >> 32);
    turn562(p,b,r,100);
  }
  if (func_00219630(p, (Vec3*)((u8*)p + 0x3d0), b->m8c8)) {
    if (b->m8e4 == 0) {
      if (func_00219630(p, func_00520FC0(p), b->m8c8)) {
        func_0065DF0C((StateControl*)((u8*)p+0x8f0), 2);
        func_003931EC((StateControl*)((u8*)p+0x8f0), 2);
        func_0065DF78((StateControl*)((u8*)p+0x8f0));
        return;
      }
    }
    return;
  }
  func_0065DF0C((StateControl*)((u8*)p+0x8f0), 1);
  func_003931EC((StateControl*)((u8*)p+0x8f0), 1);
  func_0065DF78((StateControl*)((u8*)p+0x8f0));
}
