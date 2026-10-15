typedef unsigned char u8;
typedef signed char s8;

struct Obj {
  u8 pad0[0x416];
  u8 m416;
  u8 pad1[0x41c - 0x417];
  s8 m41c;
  u8 pad2[0x43c - 0x41d];
  void* m43c;
  u8 pad3[0x466 - 0x440];
  u8 m466;
};

extern void func_0066B580(void*, int) ;

struct Zero5{u8 v;Zero5(u8 n):v(n){}};
static void clear5(void*p,u8 z){*((u8*)p+0x61)=z;}
void func_00509FA0(Obj* self) {
  self->m466 = 1;
  s8 k = *(s8*)((char*)self + 0x41c);
  char* p = (char*)self + 0x418;
  switch (k) {
    case 1:
      func_0066B580(p, 0);
      break;
    case 2:
    case 3:
      clear5(self->m43c,0);
      break;
    case 4:
      func_0066B580(p, 5);
      break;
  }
}
