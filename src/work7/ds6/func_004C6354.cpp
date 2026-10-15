typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

struct Obj {
  u8 pad[0x3c0];
  u32 m3c0;
};

extern void func_003D2210(void*);
extern int func_004C5DA8(Obj*, int, u32, void*);

s32 func_004C6354(Obj* self, u16 a1) {
  u32 n = self->m3c0;
  for (u32 i = 0; i < n; i++) {
    u8 buf[0x16c];
    func_003D2210(buf);
    if (func_004C5DA8(self, 1, i, buf) == 0) {
      if (*(u16*)(buf + 0x6e) == a1) return i;
    }
  }
  return -1;
}
