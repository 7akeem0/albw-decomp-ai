typedef unsigned char u8;

struct Temp { u8 _p[0x4c]; Temp(); };

struct Obj {
  u8 p0[0x4c];
  void* m4c;
  void* m50;
};

extern void func_004EA028(void*);
extern void func_005382AC(void*, Temp*, u8*, int);
extern void func_00297140(void*, Temp*);

void func_004EA08C(Obj* self, u8* p) {
  func_004EA028(self->m50);
  if (*p != 8) return;
  Temp t;
  func_005382AC(self->m50, &t, p, 1);
  func_00297140(self->m4c, &t);
}
