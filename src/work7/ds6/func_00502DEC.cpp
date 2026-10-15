typedef unsigned char u8;
typedef unsigned int u32;

struct Obj {
  u8 pad[0x2cc];
  u8 m2cc;
  u8 m2cd;
  u8 m2ce;
  u8 m2cf;
  u32 m2d0;
};

extern void* data_0070D858;
extern void* data_0070FB60;
extern void* data_007142C8;
extern int func_0053F090(void*);
extern void func_00172010(void*);
extern void func_0051AA0C(void*);
extern void func_00230A08(Obj*);

void func_00502DEC(Obj* self) {
  self->m2cc = 0;
  self->m2cd = 0;
  self->m2ce = 0;
  self->m2cf = 0;
  self->m2d0 = 0;
  if (*(u8*)((char*)data_0070D858 + 0x70) != 9) {
    if (func_0053F090(data_0070FB60) == 0) {
      func_00172010(data_0070D858);
    }
  }
  func_0051AA0C(data_007142C8);
  func_00230A08(self);
}
