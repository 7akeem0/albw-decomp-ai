typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

extern u8 ro_006F4F20[];
extern u8 ro_006F5CBC[];
extern u8 data_00715164[];
extern u32 data_00715168;
extern u32 data_0071516C;

struct Obj {
  void* vt;
  u8 m4;
  u8 m5;
  u8 pad[0x88 - 6];
  u8 m88;
  u32 m8c;
  u32 m90;
  f32 m94[6];
};

Obj* func_00492888(Obj* self, f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5) {
  *(void**)self = ro_006F4F20;
  self->m4 = 1;
  self->m5 = 1;
  self->m88 = *data_00715164;
  self->m8c = data_00715168;
  self->m90 = data_0071516C;
  *(void**)self = ro_006F5CBC;
  self->m94[0] = a0;
  self->m94[1] = a1;
  self->m94[2] = a2;
  self->m94[3] = a3;
  self->m94[4] = a4;
  self->m94[5] = a5;
  return self;
}
