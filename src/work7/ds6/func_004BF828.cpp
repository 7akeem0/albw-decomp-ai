typedef unsigned char u8;
typedef unsigned int u32;

struct Obj {
  u8 p0[0x85a];
  u8 m85a;
  u8 p1[0x86c - 0x85b];
  u32 m86c;
};

extern void* data_00709D28;
extern void func_004A879C(void*, u32, int);

void func_004BF828(Obj* self) {
  u8 s = self->m85a;
  if (s == 0) {
    func_004A879C(data_00709D28, self->m86c, 3);
    self->m85a = 3;
  } else if (s == 1) {
    self->m85a = 2;
  }
}
