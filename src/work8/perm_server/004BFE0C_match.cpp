typedef unsigned char u8;
typedef unsigned int u32;

namespace sead {
class SafeString {
public:
  SafeString(const char* s) : mStringTop(s) {}
  virtual void assureTerminationImpl_() const;
  const char* mStringTop;
};
}

struct Res7A0 {
  u32 find(const sead::SafeString& name) const;
};

struct Obj {
  u8 p0[0x7a0];
  Res7A0* m7a0;
  u8 p1[0x840 - 0x7a4];
  u32 m840;
  u32 m844;
  u8 p2[0x8ac - 0x848];
  u32 m8ac;
};

void func_004BFE0C(Obj* self) {
  sead::SafeString h("Head");
  self->m840 = self->m7a0->find(h); __schedule_barrier();
  if (!(self->m8ac & 0x400)) {
    sead::SafeString s("Spine");
    self->m844 = self->m7a0->find(s);
  }
}
