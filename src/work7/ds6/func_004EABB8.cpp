typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

struct Obj {
  u8 pad[0x5c];
  void* m5c;
};

extern void func_0010A464(void*);
extern void func_0025B7D8(void*, u32);
extern s32 func_00150A84(void*, void*, void*);
extern void func_0025B84C(void*);

s32 func_004EABB8(Obj* self, void* a1, void* a2) {
  if (self->m5c == 0) return 0;
  u8 buf[0x60];
  func_0010A464(buf);
  void* p = (a2 != 0) ? a2 : buf;
  func_0025B7D8(p, 0x4000008u);
  s32 r = func_00150A84(self->m5c, a1, p);
  func_0025B84C(buf);
  return r;
}
