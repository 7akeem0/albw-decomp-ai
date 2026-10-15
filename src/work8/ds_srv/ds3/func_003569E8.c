/* auto-converted from Ghidra output */
typedef unsigned int uint;
typedef int bool;

extern void FUN_00151148(int,int);
extern void FUN_00355c50(int);
extern int FUN_0036c45c(int);
extern void FUN_004fabdc(int,int,int,int);
extern void FUN_0051d39c(int,int,uint);
extern int FUN_0058a8f0(int);

static inline void orbit(uint *p) { *p |= 0x2000; }

void FUN_003569e8(int param_1)

{
  uint uVar1;
  uint uVar3;
  int iVar2;
  bool bVar4;
  
  if (*(short *)(param_1 + 0x9e8) == 0) {
    uVar1 = *(uint *)(param_1 + 0xa1c);
    uVar3 = *(uint *)(param_1 + 0xa20);
    bVar4 = uVar1 < uVar3;
    if (bVar4) {
      uVar1 = uVar1 + 1;
      *(uint *)(param_1 + 0xa1c) = uVar1;
    }
    FUN_0051d39c(param_1 + 1000,0,uVar3 - uVar1);
    if (FUN_0058a8f0(param_1) != 0) {
      FUN_004fabdc(param_1,0xc,0xffffffff,0);
      *(short *)(param_1 + 0x9e8) = *(short *)(param_1 + 0x9e8) + 1;
    }
    FUN_00355c50(param_1);
  }
  iVar2 = FUN_0036c45c(param_1 + 0x8c8);
  bVar4 = *(uint *)(param_1 + 0x98c) < *(uint *)(param_1 + 0x990);
  if (bVar4) {
    uVar1 = *(uint *)(param_1 + 0x59c) | 1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x59c) & 0xfffffffe;
  }
  *(uint *)(param_1 + 0x59c) = uVar1;
  FUN_00151148(*(int *)(param_1 + 0xa88),bVar4);
  if (iVar2 != 0) {
    orbit((uint *)(param_1 + 0x59c));
  }
  return;
}
