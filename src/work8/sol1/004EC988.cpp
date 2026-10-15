typedef unsigned char u8;
typedef signed char s8;

struct Sub50 {
  u8 pad[0xdb];
  s8 mdb;
};

struct Obj {
  u8 pad0[0x40];
  void* m40;
  void* m44;
  void* m48;
  void* m4c;
  Sub50* m50;
};

extern void* data_0070FB60;
extern int func_00556E7C(void*, int);
extern void* func_0025BAAC(void*, void*);
extern void func_0025B6A8(void*,void*);
extern void func_0025B74C(void*, s8);

void func_004EC988(Obj* self, void* a1, void* a2) {
  if (data_0070FB60 == 0) return;
  if (func_00556E7C(data_0070FB60, 0x62) != 0) return;
  void* r = func_0025BAAC(self->m40, a1);
  if (r == 0) return;
  if (a2 == 0) return;
  func_0025B6A8(a2,r);
  func_0025B74C(a2, self->m50->mdb);
}
