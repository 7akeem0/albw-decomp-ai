unsigned f(float x){
  unsigned r0 = *(unsigned*)&x;
  unsigned r1 = r0 & 0x7fffffffu;
  if (r1 != 0) {
    r1 = (r0 << 1) >> 24;
    r1 = r1 - 0x40;
    if ((int)r1 < 0) { r0 = (r0 >> 31) << 23; return r0; }
  }
  unsigned r2 = (r0 << 9) >> 16;
  unsigned s = r0 >> 31;
  r1 = r2 | (r1 << 16);
  return r1 | (s << 23);
}
