/* auto-converted from Ghidra output */
typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef unsigned int uint;

extern char G_007A19F0[];
extern int FUN_003dc2e4();
extern int FUN_003dda44();

typedef struct { void *m0; int m4; void *m8; u8 mc; s8 md; u8 me; u8 mf; } Obj;
typedef struct { u16 a0,a2; u16 rest[26]; } Local;

uint FUN_003db894(Obj *param_1,uint param_2)

{
  int iVar2;
  uint uVar4;
  s8 cVar1;
  Local local;
  
  if ((param_1->md == 0) || (param_1->md == 1)) {
    iVar2 = 0;
    if (param_1->m0 != 0) {
      iVar2 = (int)param_1->m8;
    }
    if (param_1->m0 != 0 && iVar2 != 0) {
      local.a2 = (u16)param_2;
      local.a0 = 1;
      cVar1 = param_1->md;
      uVar4 = FUN_003dda44(FUN_003dc2e4(),(int)cVar1,(int)&local);
      if ((param_2 & ~uVar4) == 0) {
        param_1->me = (u8)param_2;
      }
      if (param_1->me == 0) {
        param_1->mf = *(u8 *)(((int)G_007A19F0) + 0x19);
      }
      return uVar4;
    }
  }
  return 0;
}
