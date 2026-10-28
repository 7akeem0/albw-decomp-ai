 
typedef unsigned char undefined; typedef unsigned char undefined1; typedef unsigned short undefined2;
typedef unsigned int undefined3; typedef unsigned int undefined4; typedef unsigned long long undefined5;
typedef unsigned long long undefined6; typedef unsigned long long undefined7;
typedef unsigned long long undefined8; typedef unsigned char byte; typedef unsigned int uint;
typedef unsigned short ushort; typedef unsigned char uchar; typedef unsigned long ulong;
typedef long long longlong; typedef unsigned long long ulonglong; typedef int int3; typedef unsigned int uint3;
typedef long long int5; typedef long long int6; typedef long long int7; typedef unsigned long long uint5;
typedef unsigned long long uint6; typedef unsigned long long uint7; typedef long double float10;
typedef unsigned char bool; typedef unsigned short wchar16; typedef unsigned short char16;
typedef unsigned int dword; typedef unsigned short word; typedef unsigned long long qword;
typedef int code(); typedef unsigned char unkbyte; typedef unsigned int unkuint;


#pragma diag_warning 513,144,167,147,120,191,1293,174,177,550,940,1
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1
extern int FUN_004f88a0();
extern int FUN_004f9554();
extern int FUN_004fb024();
extern int FUN_004fc07c();

static __inline void clear59c(int p) { *(uint *)(p + 0x59c) &= 0xfffffffb; }
void FUN_001a2e2c(int param_1)

{
  int q;
  q = *(int *)(param_1 + 0x968);
  *(undefined1 *)(q + 0x44) = 1;
  clear59c(param_1);
  FUN_004fb024(param_1);
  FUN_004f9554(*(undefined4 *)(param_1 + 0x964),5,4,1);
  FUN_004f9554(*(undefined4 *)(param_1 + 0x430),5,4,1);
  FUN_004f9554(*(undefined4 *)(param_1 + 0x434),5,4,1);
  FUN_004f88a0(param_1,*(undefined4 *)(param_1 + 0x8e0));
  FUN_004fc07c(param_1,1,0xffffffff,0);
  *(float *)(param_1 + 0x3dc) = 0.0f;
  *(float *)(param_1 + 0x3e4) = 0.0f;
  return;
}
