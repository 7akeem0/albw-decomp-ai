/* auto-converted from Ghidra output */
typedef unsigned int undefined4;

extern char G_0070FB60[];
extern char G_007142C8[];
extern void FUN_001b6c04();
extern void FUN_002316cc(int,float);
extern void FUN_00369ebc(int,int);
extern void FUN_0048371c(int);
extern int FUN_0055696c(int,int);
extern void FUN_0066eeec(int,int);

void FUN_00482e1c(int param_1)

{
  int iVar1;
  
  FUN_001b6c04();
  FUN_0048371c(param_1);
  FUN_00369ebc(*(int *)(*((int *)G_007142C8) + 0x130),3);
  FUN_0066eeec(param_1 + 0x74,0);
  iVar1 = FUN_0055696c(*((undefined4 *)G_0070FB60),0x1f);
  FUN_002316cc(param_1 + 0xb0,(float)((unsigned int)iVar1 - 2));
  return;
}
