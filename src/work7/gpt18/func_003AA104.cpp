#include "range.h"
struct C{char pad[0xe];u8 flag;void set(u8 n){flag=n;}};struct M{char pad[0x24];C*c;};struct G{char pad[0x12c];M*m;};extern G*data_007142C8;extern void*data_00711F50;extern void func_004EB524(void*);void f(){data_007142C8->m->c->set(1);func_004EB524(data_00711F50);}
