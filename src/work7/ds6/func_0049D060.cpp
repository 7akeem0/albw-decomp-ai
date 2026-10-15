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

struct Obj {
  u8 p0[4];
  sead::CriticalSection mCS;
};

struct Sub;

struct T {
  u8 p0[0x10];
  Sub* m10;
};

struct Sub {
  u8 p0[0x14];
  T* m14;
  u8 p1[0x30 - 0x18];
  u32 m30;
  u8 p2[0x60 - 0x34];
  u8 m60;
};

bool func_0049D060(Obj* self, Sub* s) {
  sead::ScopedLock<sead::CriticalSection> lock(&self->mCS);
  if ((s->m30 & 2) && (s->m30 & 4)) {
    if (s->m60 == 4) {
      while (true) {
        T* p = s->m14;
        if (!p) return true;
        if (!func_0049D060(self, p->m10)) return false;
      }
    }
  }
  return false;
}
