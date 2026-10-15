 
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
extern char G_006F5108[];
extern char G_006F7500[];
extern char G_007A96F0[];
extern int FUN_00115dc8();


undefined4 *
FUN_0048c028(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (uVar1) { uVar1 = ((undefined4)G_007A96F0);
  *param_1 = ((undefined4)G_006F7500); } else { uVar1 = ((undefined4)G_007A96F0);
  *param_1 = ((undefined4)G_006F7500); }
  FUN_001119f4(param_1 + 1,uVar1);
  *param_1 = ((undefined4)G_006F5108);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  param_1[0xd] = *param_2;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  param_1[0x10] = *param_3;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  param_1[0x13] = *param_4;
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar2;
  FUN_00115dc8(param_1 + 0x13);
  return param_1;
}

