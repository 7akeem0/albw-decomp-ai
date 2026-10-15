/* auto-converted from Ghidra output */
extern char G_0068A3E8[];
extern char G_0068A5A0[];
extern int FUN_00100118();
extern int FUN_0010cee0();

void FUN_00496c18(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_0010cee0(param_4 * 0xc,param_2,4);
  *(int *)(param_3 + 0x7a0) = (iVar1 != 0) ? FUN_00100118(iVar1,((int)G_0068A5A0),0xc,param_4) : 0;
  iVar1 = FUN_0010cee0(param_4 << 3,param_2,4);
  *(int *)(param_3 + 0x7a4) = (iVar1 != 0) ? FUN_00100118(iVar1,((int)G_0068A3E8),8,param_4) : 0;
  *(int *)(param_3 + 0x7a8) = FUN_0010cee0(param_4 << 2,param_2,4);
  *(int *)(param_3 + 0x790) = FUN_0010cee0(param_5 << 1,param_2,4);
  return;
}
