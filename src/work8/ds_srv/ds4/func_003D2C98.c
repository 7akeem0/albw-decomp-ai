typedef unsigned char undefined; typedef unsigned int undefined4;
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef short s16;
typedef int s32; typedef unsigned int u32;
extern char G_007158E8[];
extern char G_007A03B8[];
extern int FUN_0010c210();

void FUN_003d2c98(void)
{
  s8 *p;
  int i;
  u8 r;
  void (**tab)();

  p = (s8 *)G_007158E8;
  if ((p[1] & ~p[2]) != 0) {
    tab = (void (**)())G_007A03B8;
    i = 0;
    do {
      void (*f)() = tab[i];
      if (f != 0) {
        (*f)();
      }
      i = i + 1;
    } while (i < 8);
    if (p[1] != 0) {
      FUN_0010c210(*(undefined4 *)(p + 8));
      p[1] = 0;
    }
    p[2] = 1;
    r = 1;
  }
  else {
    r = 0;
  }
  *p = r;
  return;
}
