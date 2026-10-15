struct En { char p[0x2d7]; unsigned char dead; char p2[0xa90-0x2d8]; int hp; void f(); };
void En::f() { if(hp<=0) dead=1; }
