typedef unsigned char u8;

struct Obj {
  u8 pad0[0x34];
  void* m34;
  u8 pad1[0x44 - 0x38];
  void* m44;
  void* m48;
  void* m4c;
  void* m50;
  u8 pad2[0x83 - 0x54];
  u8 m83;
};

extern void func_004EA1E4(Obj*, int);
extern void func_00407F04(void*);
extern void func_0025AF44(void*);
extern void func_0049F5A8(void*);
extern void func_00429AA4(void*);
extern void func_00257128(void*);

void func_004E9A08(Obj* self) {
  if (self->m83) {
    func_004EA1E4(self, 0);
    self->m83 = 0;
  }
  func_00407F04(self->m4c);
  func_0025AF44(self->m50);
  func_0049F5A8(self->m44);
  func_00429AA4(self->m48);
  func_00257128(self->m34);
}
