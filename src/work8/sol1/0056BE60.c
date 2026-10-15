/* auto-converted from Ghidra output */
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
#define true 1
#define false 0
#pragma diag_warning 513,144,167,147,120,191,1293,174,177,550,940,1
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1
extern int FUN_00410704(void*,int);
extern int FUN_0056a6e0();
extern int FUN_0056c1b4();
extern int FUN_0056cbf8();

 uint*getItem(uint*p,uint i){if(*p<=i)return 0;return p+i*2+1;}
 _Bool hasItems(uint*p,uint n){return *p>n;}
undefined4 FUN_0056be60(int *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 auStack_20 [16];
  
  uVar1 = FUN_0056cbf8(param_1[1]);
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1,uVar1);
  
  if (((param_3 & 0xc) != 0) && (iVar2 == 0)) {
    return 0;
  }
  if ((param_3 & 8) != 0) {
    FUN_00410704(auStack_20,iVar2);
    puVar3 = (uint *)FUN_0056a6e0(auStack_20);
    if (puVar3 == (uint *)0x0) {
      return 0;
    }
    uVar4 = 0;
    if(hasItems(puVar3,0)) {
      do {
        uint*item=getItem(puVar3,uVar4);if(!item)return 0;iVar2=FUN_0056c1b4(param_1,item[0],item[1]);
        if (iVar2 == 0) {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *puVar3);
    }
  }
  return 1;
}

