

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
namespace sead{template<class T>struct SafeStringBase{virtual~SafeStringBase(){}virtual void assureTerminationImpl_()const{}const T*text;SafeStringBase(const T*s):text(s){}};typedef SafeStringBase<char> SafeString;}typedef sead::SafeString SafeString;

extern u8 ro_006F5988[];
extern "C" void func_00150A84(void*,const SafeString&,u32);
extern "C" void func_00666D48(void*, u32);
u32 f(u8* self) {
  if (self[0x410] != 0) return 0;
  
  func_00150A84(self,SafeString("SE_MediumGanonBall_SHOT"),0); 
  func_00666D48(self + 0x40c, 1);
  
  return 1;
}
