typedef unsigned char u8;

struct Temp { u8 _p[0x4c]; Temp(); };
struct Obj { u8 p0[0x4c]; void* m4c; void* m50; };

extern bool func_0053900C(void*, Temp*, u8*);
extern void func_00296D28(void*, Temp*);
extern void func_004EB524b(void*, Temp*);
void func_004EB524(Obj* self, u8* p) {
  Temp t;
  if (!func_0053900C(self->m50, &t, p)) return;
  Temp* pt = &t;
  func_00296D28(self->m4c, pt);
  func_004EB524b(self->m50, pt);
}

