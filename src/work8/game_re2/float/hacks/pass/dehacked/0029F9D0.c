 
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
extern char G_00708998[];

void FUN_0029f9d0(undefined1 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  
  piVar1 = ((int *)G_00708998);
  *param_1 = 0;
  fVar3 = *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x90) + 0x18) + *(float *)(*piVar1 + 0x80);
  *(float *)(param_1 + 4) = fVar3;
  *(float *)(param_1 + 8) = fVar3;
  unsigned int t66 = *(int *)(param_1 + 0x1c);  uVar2 = *(undefined4 *)(*(int *)(t66 + 0x90) + 0x20);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

