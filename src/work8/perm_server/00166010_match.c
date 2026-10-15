 
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
extern char G_00708998[];
extern int FUN_00120fbc();
extern int FUN_002e1b70();

typedef struct { float x, y, z; } Vec3;

void FUN_00166010(int param_1)

{
  int iVar1;
  Vec3 v;
  
  if (*((int *)G_00708998) != 0) {
    iVar1 = *(int *)(*((int *)G_00708998) + 0x18);
    v = *(Vec3 *)(param_1 + 0xb4);
    v.x = v.x + *(float *)(param_1 + 0xf0);
    v.z = v.z + *(float *)(param_1 + 0xf4);
    if (iVar1 != 0) {
      *(undefined2 *)(param_1 + 0xb2) = *(undefined2 *)(param_1 + 0xec);
      FUN_002e1b70(param_1 + 0xac);
      iVar1 = FUN_00120fbc(iVar1,param_1 + 0xac,&v,param_1 + 0xc0,
                           *(undefined2 *)(param_1 + 0xec),0,param_1 + 0xfc);
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0xfa) = 0;
      }
    }
  }
  return;
}
