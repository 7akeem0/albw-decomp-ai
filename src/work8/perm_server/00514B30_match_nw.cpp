typedef unsigned char u8;
typedef float f32;

struct Obj {
  u8 pad0[0xc];
  f32 mC;
  u8 pad1[0x3d4 - 0x10];
  f32 m3d4;
  u8 pad2[0x48c - 0x3d8];
  u8 m48c[0x100];
};

extern int func_00520EE4(Obj*);
extern int func_00520ED8(Obj*);
extern void func_00520FF8(Obj*);
extern void func_0066B94C(void*, int) ;

void func_00514B30(Obj* self) {
  char* p = (char*)self + 0x48c;
  f32 a = self->m3d4;
  f32 b = self->mC;
  if (!(b < a)) {
    if (func_00520EE4(self) != 0) {
      func_0066B94C(p, 0xb);
      return;
    }
  }
  if (func_00520ED8(self) == 0) return;
  func_00520FF8(self);
  func_0066B94C(p, 1);
}
