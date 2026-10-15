 
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
extern char G_007142C8[];
extern int FUN_004b9998();
extern int FUN_00668e44();

void FUN_003aa540(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(*(int *)(*((int *)G_007142C8) + 300) + 0x24);
  if (0 < *(int *)(param_1 + 0x210)) {
    cVar1 = *(char *)((*(int *)(*(int *)(*((int *)G_007142C8) + 300) + 0x24)) + 0xd);
    bVar3 = cVar1 == '\0';
    if (bVar3) {
      cVar1 = *(char *)(iVar2 + 0xe);
    }
    if (bVar3 && cVar1 == '\0') {
      FUN_00668e44(param_1 + 0x210,5);
      FUN_004b9998(iVar2);
      return;
    }
  }
  return;
}

