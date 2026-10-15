/* auto-converted from Ghidra output */
extern char G_001207F4[];
extern char G_00706E20[];
extern void FUN_0015d0e0(int);
extern void FUN_002228d0(int,int,int);
extern void FUN_004fc07c(int,int,int,int);
extern void FUN_0052fd7c(int,int,int);
extern void FUN_00588c14(int,int,int);

static inline void sub_15fc0c(int param_1,int n)
{
  FUN_004fc07c(param_1,n,0xffffffff,0);
  if (*(int *)(param_1 + 0x960) != 0) {
    FUN_002228d0(*(int *)(param_1 + 0x960),n,0xffffffff);
  }
}

void FUN_0015fc0c(int param_1)

{
  sub_15fc0c(param_1,9);
  if ((*(unsigned short *)(param_1 + 0x2e) & 0xff) == 0) {
    FUN_00588c14(param_1,1,1);
  }
  FUN_0052fd7c(*((int *)G_00706E20) + 0x3dbbc,((int)G_001207F4),0);
  FUN_0015d0e0(param_1);
  return;
}
