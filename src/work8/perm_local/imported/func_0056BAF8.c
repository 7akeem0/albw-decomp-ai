 
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
extern int FUN_00103cbc();
extern int FUN_0011629c();

undefined4 FUN_0056baf8(uint *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint * perm_t12;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void * perm_pad35;
  
  uVar1 = FUN_00103cbc(param_2);
  uVar2 = *param_1;
  uVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      if (uVar2 > uVar4) {
        iVar5 = param_1[uVar4 * 2 + 2] + (int)param_1;
      }
      else {
        iVar5 = 0;
      }
      if (perm_t12) { iVar3 = FUN_0011629c(param_2,iVar5 + 0xc,uVar1); } else { iVar3 = FUN_0011629c(param_2,iVar5 + 0xc,uVar1); }
      if (iVar3 == 0) {
        *param_3 = *(undefined4 *)(iVar5 + 4);
        return 1;
      }
      perm_t12 = param_1; uVar2 = *perm_t12;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)uVar2);
  }
  return 0;
}

