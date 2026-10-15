/* Self-contained C99; scalar aliases retain the original widths. */
typedef unsigned char undefined1;
typedef unsigned int undefined4;
#pragma diag_warning 513,144,167,147,120,191,1293,174,177,550,940,1
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1

extern char G_006930C4[];
extern char G_00706E20[];
extern int FUN_0052fba0();
extern int FUN_00588be4();

undefined4 FUN_00514aa0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x548) == '\0') {
    if ((*(int *)(param_2 + 0x2c) != 0) && (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x11')) {
      *(undefined1 *)(param_1 + 0x514) = 1;
      return 1;
    }
  }
  else if (((*(char *)(param_1 + 0x548) == '\x05') &&
           (iVar1 = FUN_0052fba0(*((int *)G_00706E20) + 0x3dbbc,*(undefined4 *)(param_2 + 0x28)),
           iVar1 != 0)) && (FUN_00588be4() == *((int *)G_006930C4))) {
    return 1;
  }
  return 0;
}

