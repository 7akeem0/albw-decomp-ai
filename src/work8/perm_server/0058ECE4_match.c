 
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
extern char G_006F2CB4[];
extern char G_00709DF8[];
extern char G_0070B800[];
extern char G_00712F70[];
extern int FUN_0014b1d4();
extern int FUN_004b9aa0();

void FUN_0058ece4(int *param_1)

{
  int iVar1;
  int *p = param_1 + -0xe;

  iVar1 = ((int)G_006F2CB4) + 0x54; *p = ((int)G_006F2CB4);
  *param_1 = iVar1;
  __schedule_barrier();
  if (*((int *)G_00712F70) != 0) {
    FUN_0014b1d4(*((int *)G_00712F70),0,1);
  }
  if (*((int *)G_00709DF8) != 0) {
    __schedule_barrier(); *(undefined1 *)(*((int *)G_00709DF8) + 0x65) = 1;
  }
  *(undefined1 *)(*((int *)G_0070B800) + 0x1438) = 0;
  FUN_004b9aa0(p);
  return;
}

