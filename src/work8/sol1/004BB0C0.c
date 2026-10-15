/* Self-contained C99; scalar aliases retain the original widths. */
typedef unsigned int undefined4;
typedef unsigned short ushort;
#pragma diag_warning 513,144,167,147,120,191,1293,174,177,550,940,1
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1

extern char G_006930CC[];
extern char G_00706E20[];
extern int FUN_0014d9d8();
extern int FUN_001507a8();
extern int FUN_0052fba0();
extern int FUN_00588be4();

undefined4 FUN_004bb0c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x180) {
    FUN_0014d9d8(param_1,param_1 + 0x39c,param_2);
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_0052fba0(*((int *)G_00706E20) + 0x3dbbc,*(undefined4 *)(param_2 + 0x28));
    if ((iVar1 == 0) || (FUN_00588be4() != *((int *)G_006930CC))) {
      uVar2 = FUN_001507a8(param_1,param_2);
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}

