/* auto-converted from Ghidra output */
typedef unsigned char undefined1;
typedef unsigned int uint;
typedef int bool;

extern int FUN_00521064(undefined1 *);

unsigned int FUN_004fb0d8(undefined1 *param_1,float *param_2)

{
  int bVar1;
  
  bVar1 = FUN_00521064(param_1);
  if ((bVar1 != 0) && (*param_2 <= 0.0f)) {
    *param_2 = ((*(uint *)(param_1 + 0x5a0) & 0x40000) != 0) ? -0.119999997f : -9.99999975e-06f;
    return 1;
  }
  return 0;
}
