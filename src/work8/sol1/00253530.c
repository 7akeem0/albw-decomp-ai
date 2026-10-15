extern char G_006D65CC[];
extern char G_006E0B24[];
extern int FUN_001510a4();
extern int FUN_002bea00();
extern int FUN_004edd04();
extern int FUN_004ee540();

void FUN_00253530(int *param_1)

{
  int iVar1;
  int iVar2;
  
  int vt=(int)G_006D65CC;int secondary;*param_1=vt;secondary=(int)(G_006D65CC+0x78);param_1[200]=secondary;
  iVar1 = FUN_004edd04(param_1 + 0x215);
  iVar2 = FUN_002bea00(iVar1 + -0x2cc);
  iVar1 = ((int)G_006E0B24);
  *(int *)(iVar2 + -0x268) = ((int)G_006E0B24) + 0x5c;
  *(int *)(iVar2 + -0x588) = iVar1;
  iVar1 = FUN_004ee540(iVar2 + -0x178);
  FUN_001510a4(iVar1 + -0x410);
  return;
}

