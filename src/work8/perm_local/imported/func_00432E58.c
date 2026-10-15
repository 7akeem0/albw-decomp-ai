 
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
extern int FUN_00115ca8();

void FUN_00432e58(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short perm_pad66;
  
  uVar4 = 0;
  if (0 < (int)*param_1) {
    do {
      iVar3 = 0;
      do {
        uVar1 = param_1[2];
        uint uVar4_c37 = uVar4;
        if (uVar4_c37 < *param_1) {
          uVar1 = uVar1 + uVar4 * 0x24;
        }
        if (uVar4) { iVar2 = uVar1 + iVar3 * 0xc; } else { iVar2 = uVar1 + iVar3 * 0xc; }
        FUN_00115ca8(iVar2,param_2,iVar2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)*param_1);
  }
  return;
}

