typedef unsigned char u8;
typedef signed char s8;
typedef signed int s32;

s32 func_00513744(void* self, void* a1) {
  void* p = *(void**)((char*)a1 + 0x2c);
  if (p == 0) return 0;
  u8 k = *(u8*)((char*)self + 0x548);
  s32 v = *(s8*)((char*)p + 1);
  if (k != 0 && k != 1) return 0;
  if (v == 1 || v == 2 || v == 5 || v == 6 || v == 7 || v == 8 || v == 9 ||
      v == 0xa || v == 0xb || v == 0xc || v == 0xe || v == 0xf) {
    *(u8*)((char*)self + 0x558) = 1;
  }
  return 0;
}
