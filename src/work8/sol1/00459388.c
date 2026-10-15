/* Self-contained C99; scalar aliases retain the original widths. */
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned int uint;
#pragma diag_warning 513,144,167,147,120,191,1293,174,177,550,940,1
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1

extern char G_0070B850[];
extern int FUN_00166c00();
extern void FUN_002317c0(int,float);

static inline void clear45(unsigned char field,int flag,int p){*(undefined1*)(p+0x224)=field;FUN_00166c00(*((undefined4*)G_0070B850),flag);}
void FUN_00459388(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x180) != '\0') {
    clear45(0,0,param_1);
    uVar1 = *(uint *)(param_1 + 0x210);
    switch(uVar1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      piVar2 = (int *)(param_1 + 0x1c4);
      if (uVar1 < 6) {
        piVar2 = piVar2 + uVar1;
      }
      iVar3 = *piVar2;
      FUN_002317c0(iVar3 + 0x50,1.0f);
      *(undefined1 *)(iVar3 + 0xa8) = 1;
      return;
    case 6:
      iVar3 = *(int *)(param_1 + 0x1dc);
      FUN_002317c0(iVar3 + 0x50,1.0f);
      *(undefined1 *)(iVar3 + 0xa8) = 1;
      return;
    case 7:
      iVar3 = *(int *)(param_1 + 0x1e0);
      FUN_002317c0(iVar3 + 0x50,1.0f);
      *(undefined1 *)(iVar3 + 0xa8) = 1;
      return;
    }
  }
  return;
}

