typedef unsigned char undefined; typedef unsigned char undefined1; typedef unsigned short undefined2;
typedef unsigned int undefined4; typedef signed char s8; typedef unsigned char u8;
typedef unsigned short u16; typedef short s16; typedef int s32; typedef unsigned int u32;
typedef unsigned char bool;
#define true 1
#define false 0
typedef int code();
extern char G_006F64F4[];
extern char G_00706E20[];
extern char G_00725B44[];
extern char G_00725B48[];
extern int FUN_00100174();
extern int FUN_0052fba0();
extern void __cxa_guard_release();

void *FUN_00556068(int param_1)
{
  void **puVar1;
  int iVar2;
  void *ti;
  u32 *obj;

  iVar2 = *(int *)(param_1 + 0xc);
  puVar1 = (void **)FUN_0052fba0(*(int *)G_00706E20 + 0x3dbbc, iVar2);
  if (((*((u32 *)G_00725B44) & 1) == 0) && (iVar2 = FUN_00100174(G_00725B44), iVar2 != 0)) {
    obj = (u32 *)G_00725B48;
    *obj = ((u32)G_006F64F4);
    __cxa_guard_release(G_00725B44);
  }
  ti = (void *)G_00725B48;
  if ((puVar1 == (void **)0x0) || ((**(code **)*puVar1)(puVar1,ti) == 0)) {
    puVar1 = (void **)0x0;
  }
  return puVar1;
}
