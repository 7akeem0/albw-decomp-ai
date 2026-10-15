 
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
extern char G_00693980[];
extern char G_00706E20[];
extern int FUN_0052fba0();
extern int FUN_00588be4();

undefined4 FUN_0050a00c(int param_1,int param_2)

{
  int perm_arr49[2];
  undefined4 uVar2;
  char *q;
  signed char sb;
  
  perm_arr49[0] = FUN_0052fba0(*((int *)G_00706E20) + 0x3dbbc,*(undefined4 *)(param_2 + 0x28));
  q = (char *)(param_1 + 0x400);
  if (((perm_arr49[0] == 0) || (perm_arr49[0] = FUN_00588be4(), perm_arr49[0] != *((int *)G_00693980))) ||
     (q[0x1c] != '\x02')) {

    perm_arr49[1] = param_2;
    if ((*(int *)(perm_arr49[1] + 0x2c) != 0) && (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x02')) {
      sb = *(signed char *)(q + 0x1c);
      if (sb == '\x02') {
        *(undefined1 *)(param_1 + 0x464) = 1;
        return 1;
      }
      if (sb == 4) {
        *(undefined4 *)(param_1 + 0x418) = 0;
        return 1;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x467) = 1;
  }
  return uVar2;
}
