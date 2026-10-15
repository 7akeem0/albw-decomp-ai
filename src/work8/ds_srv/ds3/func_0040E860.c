/* auto-converted from Ghidra output */
extern void FUN_0010c0c0(int);
extern void FUN_0010c160(int);
extern void FUN_0040f21c();
extern void FUN_0040f2e4();
extern void FUN_0040f484();
extern void FUN_00412e2c();
extern void FUN_00412f58();

void FUN_0040e860(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') return;
  do {
    FUN_0040f2e4();
    FUN_0040f484();
    if (*(char *)(param_1 + 0x14) != '\0') return;
    {
      int *p = (int *)(param_1 + 8);
      FUN_0010c0c0((int)p);
      FUN_0040f2e4();
      FUN_0040f21c();
      FUN_0010c160((int)p);
    }
    FUN_00412f58();
    FUN_00412e2c();
  } while (*(char *)(param_1 + 0x14) == '\0');
  return;
}
