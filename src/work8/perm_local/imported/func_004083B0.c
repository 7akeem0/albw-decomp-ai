 
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
extern int FUN_00412a3c();
extern int FUN_00412bb4();
extern int FUN_00412c68();

undefined4 FUN_004083b0(undefined1 param_1,undefined4 param_2)

{
  undefined4 perm_t53;
  int perm_arr9[2];

  
  perm_arr9[0] = FUN_00412bb4();
  perm_arr9[1] = FUN_00412a3c(perm_arr9[0],6);
  if (param_1) { perm_t53 = *(undefined4 *)(perm_arr9[0] + 0x184); *(undefined4 *)(perm_arr9[1] + 0xc) = perm_t53; } else { *(undefined4 *)(perm_arr9[1] + 0xc) = *(undefined4 *)(perm_arr9[0] + 0x184); }
  if (param_2) { *(undefined1 *)(perm_arr9[1] + 4) = 0x33; } else { *(undefined1 *)(perm_arr9[1] + 4) = 0x33; }
  if (param_2) { *(undefined1 *)(perm_arr9[1] + 0x10) = param_1;
  *(undefined4 *)(perm_arr9[1] + 0x14) = param_2;
  FUN_00412c68(perm_arr9[0],perm_arr9[1]); } else { *(undefined1 *)(perm_arr9[1] + 0x10) = param_1;
  *(undefined4 *)(perm_arr9[1] + 0x14) = param_2;
  FUN_00412c68(perm_arr9[0],perm_arr9[1]); }
  return 1;
}

