 
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


void FUN_001683ec(int param_1)

{
  int *piVar1;
  int perm_arr96[2];

  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0xc);
  perm_arr96[0] = 0;
  if (iVar4 != 0) {
    do {
      perm_arr96[1] = iVar5 + perm_arr96[0] * 0x38;
      piVar1 = *(int **)(perm_arr96[1] + 0x10);
      (**(code **)(*piVar1 + 0x10))(piVar1,0);
      perm_arr96[0] = (0, perm_arr96[0]) + 1;
      *(undefined1 *)(perm_arr96[1] + 0x35) = 0; if (!param_1) {}
    } while (perm_arr96[0] != iVar4);
  }
  return;
}

