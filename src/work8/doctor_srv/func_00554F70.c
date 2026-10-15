 
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
extern int FUN_001fe944();
extern int FUN_001fea20();

void FUN_00554f70(int param_1,int param_2)

{
  uint uVar2;
  undefined4 *puVar1;
  int *piVar3;
  float f18;
  float f1c;
  undefined4 u14;
  uint cnt;
  int p2 = param_2;

  cnt = *(uint *)(param_1 + 0xc); __schedule_barrier();
  uVar2 = *(uint *)(param_1 + 0x10);
  f18 = *(float *)(param_1 + 0x18);
  u14 = *(undefined4 *)(param_1 + 0x14);
  f1c = *(float *)(param_1 + 0x1c); __schedule_barrier();
  puVar1 = (undefined4 *)(p2 + 0x1418);
  uint cnt_c11 = cnt;
  if (cnt_c11 < 0x10) {
    puVar1 = puVar1 + cnt;
  }
  piVar3 = (int *)*puVar1;
  if (piVar3 != (int *)0x0) {
    if ((uVar2 & 0x20000) != 0) {
      FUN_001fea20(piVar3,uVar2 & 0xffff);
      return;
    }
    if ((uVar2 & 0x40000) != 0) {
      FUN_001fe944(piVar3,uVar2 & 0xffff);
      ((float *)piVar3)[8] = f18;
    }
    else {
      (**(code **)(*piVar3 + 4))(piVar3,uVar2,u14);
      ((float *)piVar3)[6] = f18;
      ((float *)piVar3)[7] = f1c;
    }
  }
  return;
}
