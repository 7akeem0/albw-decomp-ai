typedef unsigned char undefined1; typedef unsigned int undefined4; typedef int code();
extern char G_00708998[]; extern void FUN_00275438();
extern void FUN_004ed46c(void *,int); extern int FUN_0053b098(undefined1 *);
typedef struct { char pad[0x39]; unsigned char m39; char pad3a[0x2e]; signed char m68; } Obj;
void FUN_001b9978(int param_1)
{
  int *p414;
  int iVar;
  signed char cVar1;
  p414 = (int *)(param_1 + 0x414);
  if (((0 < *(short *)(param_1 + 0x2c)) &&
      (FUN_0053b098(*(undefined1 **)(param_1 + 0x414)))) &&
     (*(unsigned char *)(param_1 + 0x475) == 0)) {
    int v = *(unsigned short *)(param_1 + 0x2e) & 0xff;
    FUN_004ed46c((void *)*((undefined4 *)G_00708998),v);
    *(unsigned char *)(param_1 + 0x475) = 1;
  }
  FUN_00275438(*(undefined4 *)(param_1 + 0x414));
  iVar = *p414;
  cVar1 = ((Obj *)iVar)->m68;
  if (((cVar1 == 1) || (cVar1 == 2)) || (((Obj *)iVar)->m39 != 0)) {
    if (*(unsigned short *)(param_1 + 0x30) == 2) {
      *(unsigned char *)(param_1 + 0x475) = 0;
    }
  }
  return;
}
