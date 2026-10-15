 
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
extern int FUN_004c9b74();
extern int FUN_004cadd8();
extern int FUN_00520fc0();
extern int FUN_0066a284() ;

void FUN_004cb500(int param_1)
{
  float *pfVar1;
  unsigned int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  pfVar1 = (float *)FUN_00520fc0(param_1);
  fVar4 = *(float *)(param_1 + 0x3d8) - pfVar1[2];
  fVar5 = *(float *)(param_1 + 0x3d0) - *pfVar1;
  fVar5 = fVar5 * fVar5 + fVar4 * fVar4;
  FUN_004c9b74(param_1);
  iVar2 = FUN_004cadd8(param_1,*(undefined4 *)(param_1 + 0x928));
  fVar4 = ((float)3.40282347e+38f);
  if (iVar2 != 0) {
    fVar6 = *(float *)(param_1 + 0x3d8) - *(float *)(iVar2 + 0x3d8);
    fVar4 = *(float *)(param_1 + 0x3d0) - *(float *)(iVar2 + 0x3d0);
    fVar4 = fVar4 * fVar4 + fVar6 * fVar6;
  }
  if (fVar5 > fVar4) {
    uVar3 = 7;
  }
  else {
    uVar3 = 0xb;
  }
  FUN_0066a284(param_1 + 0x8bc,uVar3);
  return;
}
