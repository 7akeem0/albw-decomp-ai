#include "../range_types.h"
struct Obj25BF {char pad[0x38];void*a;void*b;void*c;char gap[8];void*d;};
extern "C" void func_00294644(void*);
extern "C" void func_002DF220(void*);
extern "C" void func_002977C8(void*);
extern "C" void func_0025BF90(void*);
extern "C" void f_0025BF64(Obj25BF*p){func_00294644(p->d);func_002DF220(p->b);func_002977C8(p->a);func_0025BF90(p->c);}
