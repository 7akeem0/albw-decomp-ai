typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00715160[];
extern void func_0010E0E0(unsigned);
extern void func_00601390(void);
extern unsigned func_0010E15C(unsigned);
extern void func_005808BC(unsigned, unsigned);
__svc(0x28) unsigned long long svc_28(unsigned, unsigned);
extern void func_00104914(void);
void func_004960AC(unsigned a0)
{
  unsigned lv[2];
  unsigned long long w_t14;
  unsigned k1, t12, t13, t14;
  k1 = (unsigned)data_00715160;
  func_0010E0E0(*(unsigned *)((char *)k1));
  func_00601390();
  ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)a0) + 0x68))(a0);
  ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)a0) + 0x6C))(a0);
  ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)a0) + 0x34))(a0);
  ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)a0) + 0x78))(a0);
  func_0010E15C(*(unsigned *)((char *)k1));
  func_005808BC((unsigned)&lv[0], a0 + 0xB0);
  t12 = *(unsigned *)((char *)&lv[0]);
  t13 = *(unsigned *)((char *)&lv[1]);
  *(unsigned *)((char *)a0 + 0xA8) = t12;
  *(unsigned *)((char *)a0 + 0xAC) = t13;
  w_t14 = svc_28(t12, t13);
  t14 = (unsigned)w_t14;
  *(unsigned *)((char *)a0 + 0xB0) = t14;
  *(unsigned *)((char *)a0 + 0xB4) = (unsigned)(w_t14 >> 32);
  ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)a0) + 0x7C))(a0);
  if (*(unsigned char *)((char *)a0 + 0x28) != 1) {
    return;
  }
  func_00104914();
  *(unsigned char *)((char *)a0 + 0x28) = 2;
  return;
}
