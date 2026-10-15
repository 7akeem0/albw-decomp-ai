

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct T {
u32 m0;
u8 b[0xc];
u32 a[0xc];
s32 b2[0xc];
};
void f(T* self) {
  self->m0 = 0;
  for (unsigned int i = 0; 0xc > i; i++) {
    self->b[i] = 0;
    (*self).a[i] = 0;
self->b2[i] = -1;
     do {} while (0);
  }
}
