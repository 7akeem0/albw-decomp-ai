/* Self-contained C99; scalar aliases retain the original widths. */
typedef unsigned int undefined4;
typedef unsigned char byte;
typedef unsigned int uint;
#pragma diag_warning 513,144,167,147,120,191,1293,174,177,550,940,1
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1

extern int FUN_0011f198();
extern int FUN_0011f1e8();

int less11(unsigned i,unsigned n){return i<n;}
void reset11(unsigned* p){*p=0;}
undefined4 FUN_0011eba8(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  reset11(&uVar4);
  if (*(int *)(param_1 + 0x10) == -1) {
    return 0xfffffffe;
  }
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    uVar4 = uVar4 + 1;
    cVar1 = param_2[uVar4];
  }
  piVar7 = (int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 0x10);
  iVar2 = FUN_0011f198(param_2,*(undefined4 *)*piVar7);
  uVar8 = *(uint *)(*piVar7 + iVar2 * 8 + 4);
  iVar2 = *(int *)(*piVar7 + iVar2 * 8 + 8);
  uVar6 = 0;
  for (uVar6=0;less11(uVar6,uVar8);uVar6++) {
      uVar5 = (uint)*(byte *)(*piVar7 + iVar2);
      if ((uVar5 == uVar4) && (iVar3 = FUN_0011f1e8(param_2,iVar2 + 1 + *piVar7,uVar5), iVar3 != 0))
      {
        return *(undefined4 *)(*piVar7 + iVar2 + uVar5 + 1);
      }
      iVar2 = iVar2 + uVar5 + 5;
  }
  return 0xffffffff;
}

