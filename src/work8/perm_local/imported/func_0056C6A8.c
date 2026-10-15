 
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
extern int FUN_0056a2bc();
extern int FUN_0056a32c();
extern int FUN_0056a338();
extern int FUN_0056a35c();
extern int FUN_0056a448();
extern int FUN_0056a480();
extern int FUN_0056a4a8();
extern int FUN_0056a4d0();
extern int FUN_0056a4f8();
extern float FUN_0056a51c();
extern int FUN_0058fb74();

undefined4 FUN_0056c6a8(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  unsigned char perm_t19;
  uint perm_t75;
  int uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0056a2bc(param_1[1],param_3);
  uVar2 = FUN_0056a32c();
  *(float *)param_2 = FUN_0056a51c();
  perm_t19 = uVar2; *(undefined1 *)((int)param_2 + 9) = FUN_0056a4f8((uVar2));
  *(undefined1 *)((int)param_2 + 10) = FUN_0056a4d0(uVar2);
  FUN_0056a35c(uVar2,(int)param_2 + 0xb,3 + param_2,2);
  uVar3 = FUN_0056a448(uVar2);
  FUN_0058fb74(param_2 + 1,uVar3);
  perm_t75 = *(uint *)(*param_1 + 8); if (perm_t75 >= ((uint)0x1000100u)) {
    *(undefined1 *)((int)param_2 + 0xe) = FUN_0056a338(uVar2);
    *(undefined1 *)((int)param_2 + 0xf) = FUN_0056a480(uVar2);
    uVar1 = FUN_0056a4a8(uVar2);
  }
  else {
    *(undefined1 *)((int)param_2 + 0xe) = 0x40;
    *(undefined1 *)((int)param_2 + 0xf) = 0; __schedule_barrier(); if (uVar3) {}
    if (param_2) { uVar1 = 0; } else { uVar1 = 0; }
  }
  *(undefined1 *)((int)param_2 + 0x10) = uVar1;
  return 1;
}
