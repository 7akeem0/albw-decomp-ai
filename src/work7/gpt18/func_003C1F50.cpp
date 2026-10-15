#include "range.h"
extern const Mtx34_18*func_0053ED3C(void*);extern void func_001151EC(Mtx34_18*,const Mtx34_18*);extern void func_004CEAF0(MatrixChild18*);void f(MatrixOwner18*p,const ModelRequest18*q){MatrixChild18*c=p->child;Mtx34_18*m=&c->matrix;c->flags|=0x40000000;func_001151EC(m,func_0053ED3C(q->model));func_004CEAF0(p->child);}
