typedef unsigned char u8;
typedef unsigned int u32;

struct Obj { u8 p0[0x2c8]; u32 m2c8; };

extern void func_0011558C(void*, void*);
extern void* func_0057D5C4(void*);
extern void func_00492254(void*, void*);
void func_0049224C(Obj* self) {
  char* a = (self->m2c8 & 1) ? (char*)self + 0x190 : (char*)self + 0x10;
  func_0011558C((char*)self + 0x120, a + 4);
  char* c = (char*)self + 0x150;
  char* b = (self->m2c8 & 2) ? (char*)self + 0x1f4 : (char*)self + 0x68;
  func_00492254(c, func_0057D5C4(b));
}

