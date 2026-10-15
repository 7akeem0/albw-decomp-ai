

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct GE590 { u8 p[0x10]; void* m10; };
extern void* data_00711010;
extern u32 data_006930E0;
extern u32 ro_006F5988[];
extern "C" u32 func_0019B04C(u32);
extern "C" void func_002C2C9C(void*, void*);
extern "C" u32 func_002C2D00(void*);
extern "C" u32 func_00584C14(u32, void*);
extern "C" void func_002D42E8(void*);
struct TE590 { u32 m0; u32 m4; u8 pad[0x1c - 8]; u32 m1c; };
namespace sead{template<class T>struct SafeStringBase{virtual ~SafeStringBase(){};virtual void assureTerminationImpl_()const{};const T*text;SafeStringBase(const T*s):text(s){}};}typedef sead::SafeStringBase<char> String;
void f(TE590* self) {
  u8 buf[0x40];
  GE590* g = (GE590*)data_00711010;
  char* h = (char*)g->m10;
  func_0019B04C(data_006930E0);
  func_002C2C9C(buf, *(void**)(h + 0x50));
  buf[0x1c] = 1;
  *(u32*)(buf + 0x18) |= 1; self->m4 = func_002C2D00(buf);
  
  
  self->m1c=func_00584C14(self->m4,&String("hook"));
  func_002D42E8(self);
}
