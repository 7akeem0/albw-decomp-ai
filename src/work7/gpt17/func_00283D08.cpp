#include "range.h"
struct Obj{u8 pad[0x9f1];s8 flag;};
extern bool func_0062099C(Obj*);
bool f_00283D08(Obj*p){return func_0062099C(p)||p->flag;}
