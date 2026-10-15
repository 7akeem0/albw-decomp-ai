 
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
extern int FUN_00110710();

void FUN_00419668(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  { uint uVar1;
  
  if (param_4 == 0) {
    return;
  }
  param_1[1] = param_3;
  param_1[3] = param_4;
  *param_1 = param_2;
  uVar1 = FUN_00110710(param_3,param_4);
  param_1[5] = 0;
  param_1[2] = uVar1 & 0xffffffe0; }
  param_1[4] = 0;
  return;
}

