/* Self-contained C99; scalar aliases retain the original widths. */
typedef unsigned short undefined2;
#pragma diag_warning 513,144,167,147,120,191,1293,174,177,550,940,1
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1

extern void FUN_00231488(int,float);
extern int FUN_004529a0();
extern int FUN_00532c78();
extern int FUN_0066d024();
extern int FUN_00689a64();

void FUN_0045235c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00532c78(param_1 + 0x98);
  if (iVar1 == 0) {
    if (**(short **)(param_1 + 0x1d8) == 0) {
      FUN_0066d024(param_1 + 0x74,0);
    }
    else {
      FUN_00689a64(param_1 + 0x144,param_1 + 0xb8,0xffffffff);
      FUN_00689a64(param_1 + 0xb8,param_1 + 0x1d4,0xffffffff);
      **(undefined2 **)(param_1 + 0x1d8) = 0;
      FUN_004529a0(param_1);
    }
  }
  if (**(short **)(param_1 + 0x1d8) != 0) {
    FUN_00231488(param_1 + 0x98,3.0f);
    return;
  }
  return;
}

