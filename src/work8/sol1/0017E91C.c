/* Self-contained C99; scalar aliases retain the original widths. */
typedef unsigned int undefined4;
#pragma diag_warning 513,144,167,147,120,191,1293,174,177,550,940,1
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1

extern int FUN_00180f98();
extern int FUN_001e68f0();
extern int FUN_00588bf0();
extern int FUN_00659400();

static inline void copy17(int dst,int src){ *(unsigned*)(dst+8)=*(unsigned*)(src+0x3d0); *(unsigned*)(dst+12)=*(unsigned*)(src+0x3d4); *(unsigned*)(dst+16)=*(unsigned*)(src+0x3d8); }
undefined4 FUN_0017e91c(int param_1,int param_2)

{
  signed char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(short *)(param_1 + 0x36) != 0) && (iVar2 = FUN_00588bf0(param_1,0), iVar2 == 0)) {
    uVar3 = FUN_001e68f0(param_1,param_2);
    return uVar3;
  }
  copy17(param_2,param_1);
  cVar1 = *(signed char *)(((int)0x964u) + param_1);
  if ((cVar1 == '\0' || cVar1 == '\v') || cVar1 == '\a') {
    FUN_00659400(param_1 + 0x960,5);
    return 0x16;
  }
  if ((cVar1 == '\x05') && (iVar2 = FUN_00180f98(param_1), iVar2 == 0)) {
    FUN_00659400(param_1 + 0x960,0xb);
    return 0x17;
  }
  return 0;
}

