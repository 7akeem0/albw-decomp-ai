typedef unsigned char u8;
typedef signed int s32;

struct Src {
  u8 pad[0x460];
  s32 m460;
  s32 m464;
  s32 m468;
};

struct Obj {
  u8 pad[0x57c];
  s32 m57c;
  s32 m580;
  s32 m584;
};

extern void func_0019CDBC(void*, void*);

void func_004C6A08(Obj* self, Src* src) {
  func_0019CDBC(self, src);
  self->m57c = src->m460;
  self->m580 = src->m464;
  self->m584 = src->m468;
  if (self->m57c < 0) self->m57c = 0;
  if (self->m580 < 0) self->m580 = 0;
  if (self->m584 < 0) self->m584 = 0;
  if (self->m584 > 0x14) self->m584 = 0x14;
}
