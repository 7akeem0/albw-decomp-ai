#include "range.h"
typedef void(*CB)(void*,u32);struct G{u32 a;CB cb;};extern G data_00725834;extern "C" void*func_003CA35C(void*p,u32 a){const G*t=&data_00725834;void*q=p;if(t->cb)t->cb(q,a);return q;}
