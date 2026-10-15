 
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
extern int FUN_00414bd8();

void FUN_00417134(int param_1,uint param_2)

{
  unsigned char perm_t72;
  undefined4 perm_t13;
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1a4)) {
    if ((*(char *)((iVar1 & 0xffffffff) + 0x131) != '\0') && ((*(char *)(iVar1 + 0x130) != '\0') != param_2)) {
      perm_t72 = param_2; if (perm_t72) { *(char *)(iVar1 + 0x130) = (char)(perm_t72 & 0xffffffff);
      perm_t13 = *(undefined4 *)(iVar1 + 0x1a0); } else { *(char *)(iVar1 + 0x130) = (char)(perm_t72 & 0xffffffff);
      perm_t13 = *(undefined4 *)(iVar1 + 0x1a0); } if (iVar1) { FUN_00414bd8(perm_t13,param_2); } else { FUN_00414bd8(perm_t13,param_2); }
    }
  }
  return;
}

