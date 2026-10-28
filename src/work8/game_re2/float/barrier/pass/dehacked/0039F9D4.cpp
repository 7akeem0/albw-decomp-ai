

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct G9D4 { u8 p[0x10]; void* m10; };
extern void* data_00711010;
extern "C" void func_002C2C9C(void*, void*);
extern "C" u32 func_002C2D00(void*);
extern "C" void func_002D42E8(void*);
struct T9D4 { u32 m0; u32 m4; };
template<class T0> inline void hlp0(T0 buf) { *(u32*)(buf + 0x18) |= 1; }
void f(T9D4* self) {
  u8 buf[0x40];
  G9D4* g = (G9D4*)data_00711010;
  char* h = (char*)g->m10;
  func_002C2C9C(buf, *(void**)(h + 0x40));
  buf[0x1c] = 1;
  hlp0(buf);
   *(const char**)(buf + 0xc) = "HammerA";
  self->m4 = func_002C2D00(buf);
  func_002D42E8(self);
}
