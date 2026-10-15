/* Self-contained C99; scalar aliases retain the original widths. */
typedef unsigned char undefined1;
typedef unsigned int undefined4;
#pragma diag_warning 513,144,167,147,120,191,1293,174,177,550,940,1
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1

extern char G_0070B850[];
extern int FUN_0016656c(int,int);
extern int FUN_00166c00();
extern int FUN_001b6c04();
extern int FUN_002313dc();
extern int FUN_002c00a8();
extern int FUN_004b9660();

void FUN_00471f24(int param_1)

{
  undefined4 *puVar1;
  
  int copy=param_1;
  puVar1 = ((undefined4 *)G_0070B850);
  FUN_0016656c(*((undefined4 *)G_0070B850),copy);
  FUN_00166c00(*puVar1,0);
  FUN_001b6c04(param_1);
  FUN_004b9660(param_1,*(undefined4 *)(param_1 + 0x14));
  FUN_004b9660(param_1,*(undefined4 *)(param_1 + 0xfc));
  FUN_004b9660(param_1,*(undefined4 *)(param_1 + 0x100));
  FUN_004b9660(param_1,*(undefined4 *)(param_1 + 0x104));
  FUN_002c00a8(*(undefined4 *)(param_1 + 0x14));
  FUN_002c00a8(*(undefined4 *)(param_1 + 0xfc));
  FUN_002c00a8(*(undefined4 *)(param_1 + 0x100));
  FUN_002c00a8(*(undefined4 *)(param_1 + 0x104));
  FUN_002313dc(param_1 + 0x74);
  *(undefined1 *)(param_1 + 0xea) = 0;
  return;
}

