typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

struct Obj {
  u8 pad[0x3c0];
  u32 m3c0;
};
struct T8 { u8 b[8]; T8(); };
struct R12 { u8 b[0xc]; };
extern void func_003D2210(void*);
extern int func_004C5DA8(Obj*, int, u32, void*);
extern R12 func_003D2288(const void*, T8&);
extern void func_003CF8C4(Obj*, int, T8&);

void func_004C62C4(Obj* self, u16 a1) {
  u32 n = self->m3c0;
  for (u32 i = 0; i < n; i++) {
    u8 buf[0x168];
    func_003D2210(buf);
    if (func_004C5DA8(self, 1, i, buf) == 0 && *(u16*)(buf + 0x6e) == a1) {
      T8 t;
      func_003D2288(buf, t);
      func_003CF8C4(self, 1, t);
      return;
    }
  }
}
