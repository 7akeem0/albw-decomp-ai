/* auto-converted from Ghidra output */
extern int FUN_00532c78();
extern float FUN_00532b54();
extern  void FUN_0066d544();

void FUN_004596a0(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int bVar5;
  
  piVar1 = (int *)(param_1 + 0x1e4);
  if (*(unsigned int *)(param_1 + 0x214) < 3) {
    piVar1 = piVar1 + *(unsigned int *)(param_1 + 0x214);
  }
  iVar4 = *(int *)(*piVar1 + 0xfc);
  iVar2 = FUN_00532c78(iVar4 + 0x20);
  if ((iVar2 == 0) || (FUN_00532b54(iVar4 + 0x20) == 0.0f)) {
    uVar3 = *(unsigned int *)(param_1 + 0x1d0);
    bVar5 = *(char *)(uVar3 + 0xd) == 0;
    if (bVar5) {
      uVar3 = (unsigned int)*(unsigned char *)(uVar3 + 0xe);
    }
    if (bVar5 && uVar3 == 0) {
      uVar3 = *(unsigned int *)(param_1 + 0x1d4);
      bVar5 = *(char *)(uVar3 + 0xd) == 0;
      if (bVar5) {
        uVar3 = (unsigned int)*(unsigned char *)(uVar3 + 0xe);
      }
      if (bVar5 && uVar3 == 0) {
        FUN_0066d544(param_1 + 0x17c,5);
      }
    }
  }
  return;
}
