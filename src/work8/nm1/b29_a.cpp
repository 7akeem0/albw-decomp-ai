typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef int s32; typedef float f32;

struct X { char pad[0x18]; u32 m18; };
struct S { char pad[0x42]; u16 m42; char p2[0x70-0x44]; void* m70; char p3[0x88-0x74]; u32 m88; f32 m8c; };
u32 g(void*, X*, void*, s32);
bool f(S* p, X* x, void* y, f32 v){
  if(p->m42 != 0x5f) return false;
  p->m88 = x->m18;
  p->m8c = v;
  return g(p->m70, x, y, 0) != 0;
}
