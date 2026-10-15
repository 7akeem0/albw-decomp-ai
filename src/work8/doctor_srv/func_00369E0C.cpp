

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct Obj { u8 p[0x44]; u8 b44; };
struct Elem { u8 p[0x54]; Obj* m54; };
struct T { u8 p[0x3c]; u32 m3c; u32 m40; Elem** m44; };
void f(T* self, u8 v) {
  Elem** p = self->m44;
  Elem** end = p + self->m3c;
  Elem ** end_c1 = end;
  for (; p != end_c1; ++p) {
    Obj* o = (*p)->m54;
    if (o) o->b44 = (o->b44 & 0xfe) | v;
  }
}
