/* auto-converted from Ghidra output */
typedef unsigned int undefined4;
typedef int code();

extern int FUN_0041497c();
extern int FUN_00417e24();
extern void FUN_00417f50();

void FUN_00417ec8(undefined4 param_1,int param_2,int param_3)

{
  int uVar2;
  
  uVar2 = 2;
  if (param_2 == 0) {
    FUN_0041497c();
  }
  else if (param_2 == 1) {
    uVar2 = 3;
    FUN_0041497c();
  }
  else if (param_2 == 2 || param_2 == 3) {
    uVar2 = 1;
  }
  if (*(code **)(param_3 + 0x198) != (code *)0x0) {
    (**(code **)(param_3 + 0x198))(param_3,uVar2,*(undefined4 *)(param_3 + 0x19c));
  }
  *(undefined4 *)(param_3 + 0x1a0) = 0;
  *(unsigned char *)(param_3 + 0x130) = 0;
  *(unsigned char *)(param_3 + 0x131) = 0;
  *(unsigned char *)(param_3 + 0x132) = 0;
  FUN_00417f50(FUN_00417e24(),param_3);
  return;
}
