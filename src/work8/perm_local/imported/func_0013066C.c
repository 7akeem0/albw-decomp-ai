 
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
extern int FUN_00130334();
extern int FUN_001309a4();
extern int FUN_002fe86c();
extern int FUN_002fe9a8();
extern int FUN_002fe9cc();

void FUN_0013066c(int param_1)

{
  undefined4 uVar1;
  
  if (uVar1) { FUN_00130334(param_1,0); } else { FUN_00130334(param_1,0); }
  if ((**(int **)(((int)0x2888u) + param_1) != 0) && ((*(byte *)(((int)0x2C1Eu) + param_1) & 1) == 0)) {
    uVar1 = FUN_002fe9cc(*(undefined4 *)(param_1 + 0x4c));
    FUN_001309a4(param_1,uVar1,*(undefined4 *)(((int)0x28D0u) + param_1),0);
    FUN_002fe86c(*(undefined4 *)(param_1 + 0x4c));
    return;
  }
  FUN_002fe9a8(*(undefined4 *)(param_1 + 0x4c));
  return;
}

