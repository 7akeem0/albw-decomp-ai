/* auto-converted from Ghidra output */
extern void FUN_001b6c2c(int);
extern void FUN_002317c0(void *,float);
extern void FUN_002bed00(int);
extern int FUN_00579cec(int);
extern void FUN_0066bffc(int,int);

static inline void upd(int p,int n){ FUN_0066bffc(p + 0x38,n); }

void FUN_00479fe4(int param_1)

{
  int iVar1;
  
  if (*(unsigned char *)(*(int *)(param_1 + 0x1f4) + 0x3c) == 0xa) {
    upd(*(int *)(param_1 + 0x1f4),8);
  }
  if (*(unsigned char *)(*(int *)(param_1 + 0x1f8) + 0x3c) == 0xa) {
    upd(*(int *)(param_1 + 0x1f8),8);
  }
  iVar1 = FUN_00579cec(param_1);
  if ((iVar1 != 0) && (*(signed char *)(*(int *)(param_1 + 0x1f8) + 0xe4) != -1)) {
    FUN_002bed00(*(int *)(param_1 + 0x1fc));
    FUN_001b6c2c(*(int *)(param_1 + 0x1fc));
    *(unsigned short *)(param_1 + 0x1c4) = 0;
    FUN_002317c0((void *)(param_1 + 0x1c4),1.0f);
  }
  {
    signed char c = *(signed char *)(param_1 + 0x308);
    if ((unsigned)c < 0x14) {
      *(unsigned char *)(param_1 + 0x309) = c;
    }
  }
  return;
}
