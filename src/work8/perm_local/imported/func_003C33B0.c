 
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


undefined4 FUN_003c33b0(int *param_1,uint param_2)

{
  uint perm_t2;
  int *piVar1; __schedule_barrier();
  
  piVar1 = param_1;
  if (param_2 < 3) {
    piVar1 = param_1 + param_2 * 9;
  }
  if (piVar1[1] == 0) {
    perm_t2 = param_2; if (perm_t2 < 3) {
      param_1 = param_1 + param_2 * 9;
    }
    if (*param_1 == 0) {
      return 1;
    }
  }
  return 0;
}

