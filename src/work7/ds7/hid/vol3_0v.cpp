
extern volatile unsigned g1;
extern volatile unsigned g2;
void f(unsigned* p){ p[0]=g1; p[1]=g1; p[2]=g1; p[3]=g2; }
