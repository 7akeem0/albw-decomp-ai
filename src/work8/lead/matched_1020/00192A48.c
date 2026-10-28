typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004CF478(unsigned, unsigned, unsigned);
extern unsigned func_00151148(unsigned, unsigned);
extern unsigned func_00192934(unsigned);
void func_00192A48(unsigned a0, unsigned a1)
{
  if (*(unsigned char *)((char *)a0 + 0x410) != 1) goto L2;
  func_004CF478(*(unsigned *)((char *)a0 + 0x40C), 1, 0);
  func_00151148(*(unsigned *)((char *)a0 + 0x428), 1);
L2:;
  switch (a1) {
  case 0: goto L4;
  case 1: goto L5;
  case 2: goto L6;
  case 3: goto L8;
  case 4: goto L7;
  default: goto L3;
  }
L3:;
  goto L8;
L4:;
  func_00192934(a0);
  goto L8;
L5:;
  func_004CF478(*(unsigned *)((char *)a0 + 0x40C), 0, 0);
  func_00151148(*(unsigned *)((char *)a0 + 0x428), 0);
  goto L8;
L6:;
  func_00192934(a0);
  *(unsigned char *)((char *)a0 + 0x445) = 1;
  goto L8;
L7:;
  *(float *)((char *)a0 + 0x3DC) = 0.0f;
  *(float *)((char *)a0 + 0x3E0) = 0.0f;
  *(float *)((char *)a0 + 0x3E4) = 0.0f;
L8:;
  *(unsigned char *)((char *)a0 + 0x410) = a1;
  return;
}
