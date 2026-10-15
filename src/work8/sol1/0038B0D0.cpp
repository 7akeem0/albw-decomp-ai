

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct GB0D0 { u8 p[0x10]; void* m10; };
extern void* data_00711010;
extern u32 ro_006F5988[];
extern "C" void func_002C2C9C(void*, void*);
extern "C" u32 func_002C2D00(void*);
extern "C" u32 func_00564A78(u32, void*);
extern "C" void func_002D42E8(void*);
struct TB0D0 { u32 m0; u32 m4; u8 pad[0x1c - 8]; u32 m1c; u32 m20; };
namespace sead{template<class T>struct SafeStringBase{virtual~SafeStringBase(){}virtual void assureTerminationImpl_()const{}const T*text;SafeStringBase(const T*s):text(s){}};}typedef sead::SafeStringBase<char> String;
void f(TB0D0* self) {
  u8 buf[0x40];
  GB0D0* g = (GB0D0*)data_00711010;
  char* h = (char*)g->m10;
  func_002C2C9C(buf, *(void**)(h + 0x3c));
  buf[0x1c] = 1;
  *(u32*)(buf + 0x18) |= 1;
  self->m4 = func_002C2D00(buf);

  self->m20 = func_00564A78(*(u32*)(self->m1c + 4), &String("Arrow_pos"));

  func_002D42E8(self);
}
