 
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
extern int FUN_00111ef0();
extern int FUN_00112364();
extern int FUN_0040e028();
extern int FUN_004161ec();

void FUN_0040f084(int *param_1)

{
  int iVar1;
  
  if (*(signed char *)((int)param_1 + 0x2c2e) != '\0') {
    *(undefined1 *)((int)param_1 + 0x2c2e) = 0;
    FUN_004161ec(0x76b + param_1);
    FUN_0040e028(param_1);
    iVar1 = *(int *)(((int)0x29E4u) + (int)param_1);
    FUN_00111ef0(iVar1 + 8,0x3d + param_1);
    (**(code **)(*param_1 + 0x10))(param_1);
    {
      void *a0 = (void *)(iVar1 + 0x14); __schedule_barrier();
      void *a1 = (void *)(iVar1 + 0x18);
      void *a2 = param_1 + 0x3d;
      FUN_00112364(a0,a1,a2);
    }
    return;
  }
  return;
}
