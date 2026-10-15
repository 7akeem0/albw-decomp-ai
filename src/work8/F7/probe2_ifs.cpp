
typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern "C" void A(u32 g, void* p, u32 z, f32 f);
extern "C" void B(u32 g, void* p, f32 f);
extern "C" void C(u32 g, void* p, f32 f);
struct P { u8 pad[0x2c]; void* m2c; };
struct S900 { u8 pad[0x14]; s16 cnt; };

bool f(char* self, P* p) {
  void* t = p->m2c;
  if (t) {
    S900* s = (S900*)(self + 0x900);
    if (s->cnt <= 0) {
      u32 g = *(u32*)0x70FB60;
      s8 type = *(s8*)((char*)t + 1);
      if (type == 5) A(g, self + 0x3d0, 0, 0.2f);
      else if (type == 8) B(g, self + 0x3d0, 0.2f);
      else if (type == 0xE) C(g, self + 0x3d0, 0.2f);

      s->cnt = 0x1e;
      return true;
    }
  }
  return false;
}
