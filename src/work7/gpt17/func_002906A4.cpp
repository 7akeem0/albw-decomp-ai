#include "range.h"
struct C {bool func_002906B8(int,int,float,int);};
struct O {u8 pad[0x14];C* child;};
bool f_2906A4(O* p,float f,int a,int b,int c){return p->child->func_002906B8(a,c,f,b);}
