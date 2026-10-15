#include "ladder_types.h"
struct Mat {float a[12];void func_001151EC(const Mat&);};
struct D {char pad[0x4884];Mat m;};
struct S {u32 v;Mat m;};
extern void func_001151EC(Mat*,const Mat*);
void f(D* p,const S* s){Mat* d=&p->m; const Mat* a=&s->m; func_001151EC(d,a);}
