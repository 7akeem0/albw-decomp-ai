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

struct Sub { u8 p0[0x64]; void* m64; };

struct Obj {
  u8 p0[4];
  sead::CriticalSection mCS;
};

extern void* func_0048D9D0(void*, Sub*);
extern void* func_0049DC40(Obj*, Sub*, int);

void* func_0049DBDC(Obj* self, Sub* s) {
  sead::ScopedLock<sead::CriticalSection> lock(&self->mCS);
  if (s->m64) return func_0048D9D0(s->m64, s);
  return func_0049DC40(self, s, 0);
}
