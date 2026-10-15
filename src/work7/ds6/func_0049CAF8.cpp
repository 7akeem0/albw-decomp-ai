typedef unsigned char u8;
typedef unsigned int u32;

namespace sead {
struct CriticalSection { void lock(); void unlock(); };
template <class T> struct ScopedLock {
  T* mCS;
  explicit ScopedLock(T* cs) : mCS(cs) { mCS->lock(); }
  virtual ~ScopedLock() { mCS->unlock(); }
};
}
extern sead::CriticalSection bss_0079E064;

struct Sub { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
  virtual void s4(); virtual void s5(); virtual void s6(); virtual void v7(void* p);
  virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
  virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15();
  virtual void s16(); virtual bool v17(); };
struct Obj { virtual void v0(); u8 p0[0x1c - 4]; void* m1c; u8 p1[0x24 - 0x20]; Sub* m24; };
void func_0049CAF8(Obj* self) {
  sead::ScopedLock<sead::CriticalSection> lock(&bss_0079E064);
  Sub* p = self->m24;
  void* q = self->m1c;
  self->v0();
  if (p) { if (p->v17()) p->v7(q); }
}

