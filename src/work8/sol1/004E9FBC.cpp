typedef unsigned char u8;
typedef unsigned int u32;

struct Sub40 {
  u8 pad[0x84];
  u8 m84;
  u8 m85;
  u8 m86;
};

struct Sub4c {
  u8 pad[0x1a4];
  u8 m1a4;
};

struct Obj {
  u8 pad0[0x38];
  void* m38;
  void* m3c;
  Sub40* m40;
  u8 pad1[0x4c - 0x44];
  Sub4c* m4c;
  u8 pad2[0x79 - 0x50];
  u8 m79;
};

extern void func_00296BD0(void*, int);
extern void func_0029450C(void*);
extern void func_002DEC50(void*, int);
extern void func_00296C48(void*, int);
extern void func_00297648(void*);

struct Zero5{u8 v;Zero5(u8 n):v(n){}};
static void early5(Obj*self,Zero5 zero5){self->m79=zero5.v;}
static void late5(Obj*self,u8 zero5){  self->m40->m84 = zero5;
  self->m40->m85 = zero5;
  func_00297648(self->m38);
  self->m40->m86 = zero5;
  self->m4c->m1a4 = zero5;
}
void func_004E9FBC(Obj* self) {
  func_00296BD0(self->m4c, 0);
  func_0029450C(self->m4c);
  func_002DEC50(self->m3c, 0);
  early5(self,Zero5(0));
  func_00296C48(self->m4c, 0x1e);
  late5(self,0);
}
