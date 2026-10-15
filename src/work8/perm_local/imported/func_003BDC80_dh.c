 
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
extern int FUN_003abb24();
extern int FUN_00669c30();

void FUN_003bdc80(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1[0x12] + 0x8dc) + 0x14);
  if (*(signed char *)(iVar1 + 0x1c) != 0) {
    return;
  }
  if (*(float *)(iVar1 + 0x10) >= ((float)0.0f)) {
    if (!(*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14))) { } else {
      return;
    }
  }
  else if (!(*(float *)(iVar1 + 8) > ((float)0.0f))) { } else {
    return;
  }
  piVar2 = *(int **)(param_1[0x12] + 0xbcc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))(piVar2);
  }
  FUN_00669c30((char *)param_1 + 0x6c,0);
  iVar3 = *(int *)(param_1[0x12] + 0x93c);
  iVar1 = FUN_003abb24(iVar3,1,1); 
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar3 + 4);
    (**(code **)(*piVar2 + 0x138))(piVar2,2,1);
  }
  return;
}
