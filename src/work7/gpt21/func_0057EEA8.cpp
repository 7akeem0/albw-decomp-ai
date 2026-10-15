#include "range.h"
struct Mtx44 { f32 a[16]; };
struct S57E { char pad[0x94]; Mtx44 matrix; };
void func_00115224(Mtx44*,const Mtx44*);
void f_57EEA8(const S57E* p,Mtx44* out) { Mtx44* d=out; const Mtx44* s=&p->matrix; func_00115224(d,s); }
