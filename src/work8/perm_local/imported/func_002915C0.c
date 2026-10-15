 
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
extern char G_0070B728[];
extern char G_007111A8[];
extern int FUN_002d55d0();
extern int FUN_003406b8();
extern int FUN_0052e8a0();

undefined4 FUN_002915c0(int param_1,undefined4 *param_2)

{
  int iVar2;
  char cVar1;
  
  iVar2 = FUN_0052e8a0(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 == 0) {
    iVar2 = (int)*(short *)(param_1 + 0x42);
    cVar1 = *(char *)(((int)G_007111A8) + iVar2 * 0x10);
    if (cVar1 != '\x16') {
      if (cVar1 == '\v') {
        if (iVar2 != 0x4c) {
          return 0;
        }
      }
      else {
        if ((iVar2 == 0x42) || (iVar2 == 0xa6)) {
          return 0;
        }
        if ((cVar1 == '\x0f') || (cVar1 == '\x17')) {
          return 0;
        }
      }
      {
      int *obj = *((int **)G_0070B728);
      int id = *(int *)(param_1 + 0x78);
      if (((*(int *)((char *)obj + 0x44) == 0) ||
          (*(int *)((char *)obj + 0x44) != id)) && (cVar1 != '\x13')) {
        if (iVar2 == 0x43) {
          iVar2 = *(int *)(param_1 + 0x1c);
          *(undefined1 *)(iVar2 + 0x529) = 1;
          *(undefined4 *)(iVar2 + 0x51c) = *param_2;
          *(undefined4 *)(iVar2 + 0x520) = param_2[1];
          *(undefined4 *)(iVar2 + 0x524) = param_2[2];
          return 1;
        }
        FUN_002d55d0(*(undefined4 *)(param_1 + 0x48),0x43);
        iVar2 = *(int *)(param_1 + 0x1c);
        {
        int *b = (int *)(iVar2 + 0x68);
        b[0] = *(int *)(iVar2 + 0x74);
        b[1] = *(int *)(iVar2 + 0x78);
        b[2] = *(int *)(iVar2 + 0x7c);
        }
        int *pp = *(int **)(param_1 + 0x1c);
        if (*(char *)((char *)pp + 0x16e) != '\0') {
          if (pp) { FUN_003406b8(); } else { FUN_003406b8(); }
        }
        return 1;
      }
      }
    }
  }
  return 0;
}
