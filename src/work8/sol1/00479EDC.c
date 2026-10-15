/* Self-contained C99; scalar aliases retain the original widths. */
typedef unsigned char undefined1;
typedef unsigned int uint;
typedef unsigned char bool;
#pragma diag_warning 513,144,167,147,120,191,1293,174,177,550,940,1
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1

extern int FUN_002313dc();
extern int FUN_00231448();
extern int FUN_0031bec0();
extern int FUN_0047b5e4();
extern int FUN_0066c0cc(int,int);

void FUN_00479edc(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  if (*(char *)(*(int *)(param_1 + 0x208) + 0x24) == '\x06') {
    int st=*(int *)(param_1+0x208)+0x20; int two=2; FUN_0066c0cc(st,two);
  }
  FUN_0047b5e4(param_1);
  FUN_002313dc(param_1 + 0x1d0);
  FUN_00231448(param_1 + 0x1e8);
  uVar3 = 0;
  do {
    piVar2 = (int *)(param_1 + 0x168);
    if (uVar3 < 0x14) {
      piVar2 = piVar2 + uVar3;
    }
    if (*(char *)(*piVar2 + 0xe1) != '\0') {
      piVar2 = (int *)(param_1 + 0x168);
      if (uVar3 < 0x14) {
        piVar2 = piVar2 + uVar3;
      }
      iVar4 = *piVar2;
      *(undefined1 *)(iVar4 + 0xe3) = 0;
      cVar1 = *(char *)(iVar4 + 0xd);
      bVar5 = cVar1 == '\0';
      if (bVar5) {
        cVar1 = *(char *)(iVar4 + 0xe);
      }
      if ((!bVar5 || cVar1 != '\0') && (*(char *)(iVar4 + 0x3c) == '\0')) {
        FUN_002313dc(iVar4 + 200);
        FUN_0031bec0(iVar4 + 0x78,0);
      }
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x14);
  return;
}

