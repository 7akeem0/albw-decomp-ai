/* Self-contained C99; scalar aliases retain the original widths. */
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef int code();
#pragma diag_warning 513,144,167,147,120,191,1293,174,177,550,940,1
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1

extern int FUN_00231340();

undefined4 FUN_001b6b38(int *param_1)

{
  undefined4 uVar1; int state=*(signed char *)((int)param_1 + 0xe);
  
  if (state == '\x04') {
    if (*(char *)((int)param_1 + 0xd) != '\x04') {
      (**(code **)(*param_1 + 0x2c))(param_1);
    }
    FUN_00231340(param_1 + 0xb);
    (**(code **)(*param_1 + 0x34))(param_1);
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    return 1;
  }
  if (state == '\x02') {
    if (*(char *)((int)param_1 + 0xd) != '\x02') {
      (**(code **)(*param_1 + 0x1c))(param_1);
    }
    FUN_00231340(param_1 + 8);
    (**(code **)(*param_1 + 0x34))(param_1);
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    uVar1 = 1;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

