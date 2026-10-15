 
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
extern int FUN_00412a3c();
extern int FUN_00412bb4();
extern int FUN_00412c68();

bool FUN_004083f8(undefined1 param_1,int *param_2)

{
  int perm_t3;
  int iVar2;
  int iVar1;
  int iVar3;
  
  iVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_00412bb4();
    perm_t3 = iVar2; iVar3 = FUN_00412a3c(perm_t3,7);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0x184); __schedule_barrier();
    *(undefined1 *)(iVar3 + 4) = 0x31;
    *(undefined1 *)(iVar3 + 0x10) = param_1;
    *(int **)(iVar3 + 0x14) = param_2;
    int iVar3_c83 = iVar3;
    FUN_00412c68(iVar2,iVar3_c83);
  }
  return iVar1 != 0;
}

