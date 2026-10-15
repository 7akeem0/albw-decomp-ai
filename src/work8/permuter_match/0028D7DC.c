 
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
extern char G_00711010[];
extern int FUN_0016a2a4();

void FUN_0028d7dc(int param_1)

{
  int iVar1;
  int perm_t54;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = (perm_t54 = *(int *)(*((int *)G_00711010) + 0x10));
  do {
    undefined4 *slot = (undefined4 *)(iVar2 + 0x110);
    FUN_0016a2a4(*(undefined4 *)(param_1 + 0x10),iVar1,slot[(short)iVar1]);
    if (iVar2) { if (param_1) { iVar1 = iVar1 + 1; } else { iVar1 = iVar1 + 1; } } else { iVar1 = iVar1 + 1; }
  } while (iVar1 < 0xb0);
  return;
}
