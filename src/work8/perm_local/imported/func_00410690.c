 
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
typedef int code(); typedef unsigned char unkbyte; typedef unsigned int unkuint; typedef signed char schar; typedef signed char sbyte;


#pragma diag_warning 513,144,167,147,120,191,1293,174,177,550,940,1
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1
extern int FUN_0056ec9c();

void FUN_00410690(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  if ((*param_2 == ((int)0x4B4E4243u)) && (param_2[2] - 0x1000000U < 0x101)) {
    *param_1 = (undefined4)(param_2);
    int * param_2_c37 = param_2;
    iVar1 = FUN_0056ec9c(param_2_c37);
    *(undefined1 *)(param_1 + 2) = 1;
    param_1[1] = iVar1 + 8;
  }
  return;
}

