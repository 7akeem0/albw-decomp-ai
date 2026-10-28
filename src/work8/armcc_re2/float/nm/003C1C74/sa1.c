 
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
extern char G_00712468[];
extern char G_0079DFAC[];
extern int FUN_003e35dc();
extern int FUN_005ff064();
extern int FUN_005ff314();

typedef void (*VFn)(void *, int, void *, float, int);

void FUN_003c1c74(int param_1)

{
  int *piVar1;
  int *p7;
  undefined4 uVar2;
  
  if (*(unsigned char *)(param_1 + 0x18d) != '\0') {
    piVar1 = *(int **)(*(int *)(*((int *)G_00712468) + 0x1c) + 0x11c);
    p7 = piVar1 + 7;
    (*(VFn *)(*piVar1 + 0x14))(piVar1,2,G_0079DFAC,1.0f,0);
    uVar2 = *(undefined4 *)(param_1 + 0x84);
    if ((*(uint *)(param_1 + 0x188) & 0x10000000) == 0) {
      FUN_003e35dc(*(undefined4 *)(param_1 + 0x3c));
      FUN_005ff314(*(undefined4 *)(param_1 + 0x3c),p7[0],*(undefined4 *)(param_1 + 0x84));
      return;
    }
    int param_1_c30 = param_1;
    FUN_005ff064(*(undefined4 *)(param_1_c30 + 0x3c),uVar2,0,p7[0],uVar2,0,uVar2);
  }
  return;
}
