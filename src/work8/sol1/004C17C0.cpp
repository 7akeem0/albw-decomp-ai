typedef unsigned char u8;
typedef unsigned int u32;

namespace sead{template<class T>struct SafeStringBase{virtual~SafeStringBase(){}virtual void assureTerminationImpl_()const{}const T*mStringTop;SafeStringBase(const T*s){mStringTop=s;}};typedef SafeStringBase<char>SafeString;}

extern "C"u32 func_00564A78(const void*,const void*);
struct Res7A0 {
  u32 find(const sead::SafeString&name)const{return func_00564A78(this,&name);}
};

struct Obj {
  u8 p0[0x7a0];
  Res7A0* m7a0;
  u8 p1[0x8f8 - 0x7a4];
  u32 m8f8;
  u8 p2[0x910 - 0x8fc];
  u8 m910;
};

void func_004C17C0(Obj* self) {
  const sead::SafeString&n=sead::SafeString("skl_root");
  u8 s = self->m910;
  if (s == 2) return;
  if (s == 0) {
    self->m8f8 = self->m7a0->find(n);
  }
  self->m910 = 1;
}
