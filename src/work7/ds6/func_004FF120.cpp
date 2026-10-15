typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

struct Obj;

extern void func_004FABDC(Obj*, u32, s32, s32);
extern s32 func_0058AB74(Obj*);

void func_004FF120(Obj* self, u32 v) {
  u32 k = (u8)v;
  if (!(k == 0x1e || (u32)k - 0xe <= 3)) {
    if (func_0058AB74(self) == 2) {
      func_004FABDC(self, 4, 0, 0);
    }
    return;
  }
  func_004FABDC(self, 5, -1, 0);
}
