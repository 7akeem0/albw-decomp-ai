typedef unsigned char u8;
typedef signed int s32;

extern void* data_00711F50;
extern void func_0010A464(void*);
extern void func_00587B7C(void*, s32, void*);
extern void func_0025B66C(void*, float);
extern void func_0025B788(void*, int);
extern void func_0025B84C(void*);

void func_0053993C(void* self, s32 a1) {
  if (a1 == -1) return;
  u8 buf[0x60];
  func_0010A464(buf);
  func_00587B7C(data_00711F50, a1, buf);
  func_0025B66C(buf, 0.4f);
  func_0025B788(buf, 3);
  func_0025B84C(buf);
}
