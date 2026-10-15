 
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
extern int FUN_00294404();
extern int FUN_0053900c();
extern int FUN_00689024();
extern int FUN_004ec4fc_tail();

undefined4 FUN_004ec4fc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *pA;
  undefined4 v2;
  undefined4 v3;
  undefined1 auStack_5c [76];
  
  v2 = param_2;
  v3 = param_3;
  FUN_00689024(auStack_5c);
  iVar1 = FUN_0053900c(*(undefined4 *)(param_1 + 0x50),auStack_5c,v3);
  if (iVar1 == 0) {
    return 0;
  }
  pA = (undefined4 *)auStack_5c;
  undefined4 v2_c54 = v2;
  FUN_00294404(*(undefined4 *)(param_1 + 0x4c),pA,v2_c54,1,1);
  return FUN_004ec4fc_tail(*(undefined4 *)(param_1 + 0x50),pA);
}
