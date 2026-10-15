typedef unsigned char u8;
typedef unsigned short u16;

extern int func_0058DEF4(void*);
extern void func_0012C790(void*);
extern void func_001B6B38(void*);
extern void func_0029E18C(void*, int);
extern void func_0045295C(void*);

void func_0051B404(void* self) {
  if (func_0058DEF4(self) == 0) return;
  if (*(u16*)((char*)self + 0x74) != 3) {
    void* p = *(void**)((char*)self + 0x70);
    if (p != 0 && (*(u8*)((char*)p + 0xd) != 0 || *(u8*)((char*)p + 0xe) != 0)) {
      func_0012C790(p);
      func_001B6B38(*(void**)((char*)self + 0x70));
    }
    func_0029E18C((char*)self + 0x64, 3);
  }
  if (*(void**)((char*)self + 0x70) != 0) {
    func_0045295C(*(void**)((char*)self + 0x70));
  }
}
