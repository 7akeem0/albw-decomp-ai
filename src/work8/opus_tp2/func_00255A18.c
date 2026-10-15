int f(int *p)
{
  if (p[0x70/4] == 2 && p[0xdc/4] == 11) { p[0xdc/4] = 13; return 0; }
  if (p[0x74/4] == 2 && p[0xe0/4] == 11) { p[0xe0/4] = 13; return 1; }
  if (p[0x78/4] == 2 && p[0xe4/4] == 11) { p[0xe4/4] = 13; return 2; }
  if (p[0x7c/4] == 2 && p[0xe8/4] == 11) { p[0xe8/4] = 13; return 3; }
  if (p[0x80/4] == 2 && p[0xec/4] == 11) { p[0xec/4] = 13; return 4; }
  return -1;
}
