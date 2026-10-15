

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct T {
u8 p0[0x141];
u8 b141;
u8 b142;
u8 p1[1];
u8 b144;
};
extern "C" u32 func_00532C78(void*);
extern "C" void func_006695DC(void*, u32);
extern "C" void func_002317C0(void*, f32);
void f(T* self) {
  unsigned short perm_t71;
  if (func_00532C78((char*)self + 0x48)) return;
  if (self) { self->b141 = self->b142; } else { if (self || self) { perm_t71 = self->b142; } else { perm_t71 = self->b142; } self->b141 = perm_t71; }
  func_006695DC((char*)self + 0x20, self->b144 == 2 ? 2 : 0);
  if (self->b144 == 1)
    func_002317C0((char*)self + 0x54, 1.0f);
}
