typedef unsigned char u8;
typedef signed short s16;
typedef unsigned int u32;
typedef signed int s32;

extern s16 tableA[];
extern s32 tableB[];

struct Obj {
  u8 p0[0x38];
  u32 m38;
};

void* func_004ACC38(Obj* self) {
  u32 i = self->m38;
  if (i == 0) return 0;
  s32 a = *(s16*)((char*)tableA + i);
  if (a < 0) return 0;
  s32 b = *(s32*)((char*)tableB + i);
  if (b <= a) return 0;
  return (void*)(i + a * 0x50c + 0x183c);
}

