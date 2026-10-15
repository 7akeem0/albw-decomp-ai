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
struct Node{int prev;undefined4 next;};static void prevstore(int off,undefined4 value,int obj){struct Node*q=(struct Node*)(obj+off);q->next=value;}
void FUN_003d31f4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)((int)param_1 + 10);
  piVar2 = (int *)(uVar3 + param_2);
  uVar1 = *(undefined4 *)(param_2 + uVar3 + 4);
  if (*piVar2 == 0) {
    *param_1 = uVar1;
  }
  else {
    prevstore(uVar3,uVar1,*piVar2);
  }
  if (piVar2[1] == 0) {
    param_1[1] = *piVar2;
  }
  else {
    *(int *)(piVar2[1] + (uint)*(ushort *)((int)param_1 + 10)) = *piVar2;
  }
  *piVar2 = 0;
  piVar2[1] = 0;
  *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + -1;
  return;
}

