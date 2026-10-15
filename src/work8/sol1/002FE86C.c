typedef unsigned int uint, undefined4;typedef unsigned char byte,undefined1;
extern char G_00715160[];
extern int FUN_0010e15c();
extern int FUN_003cc054();
extern int FUN_005ff418();
extern void FUN_005ffdc0(void);
extern int FUN_005fff7c();
extern int FUN_006003d8();
extern int FUN_00601378();

static inline void flush25(int n){if(!n){FUN_005ffdc0();}else{}}
void FUN_002fe86c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x40) = 0;__schedule_barrier();

  if ((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14) & 0xfffffffcU) != 0) {
    FUN_00601378();
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      FUN_005fff7c(iVar1);
      *(int *)(param_1 + 0x40) = iVar1;
    }
    FUN_006003d8(0x208,&local_18);
    FUN_003cc054(param_1 + 0x10,local_18);
  }
  flush25(*(int *)(param_1+0x40));
  FUN_006003d8(0x208,param_1 + (uint)*(byte *)(param_1 + 0x44) * 4 + 0x30);
  FUN_005ff418(*(undefined4 *)(param_1 + 0x24));
  FUN_0010e15c(*((undefined4 *)G_00715160));
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  *(char *)(param_1 + 0x44) = '\x01' - *(char *)(param_1 + 0x44);
  return;
}

