typedef unsigned char u8;
typedef signed int s32;
typedef unsigned int u32;

struct Inner2 {
  u8 pad[4];
  s32 m4;
};

struct Inner {
  u8 pad[0x20];
  Inner2* m20;
};

struct Obj {
  u8 pad[0x530];
  Inner* m530;
};

extern void func_004CF5B0(Inner*, s32, s32, s32);
extern void func_004D01E0(Inner*, s32, s32);

void func_004D1BE0(Obj* self) {
  Inner* t = self->m530;
  if (t == 0) return;
  s32 n = t->m20->m4;
  for (s32 i = 0; i < n; i++) {
    func_004CF5B0(self->m530, i, 5, 0xff);
    func_004D01E0(self->m530, 1, i);
  }
}
