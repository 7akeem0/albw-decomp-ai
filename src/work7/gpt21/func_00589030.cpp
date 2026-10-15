#include "range.h"
struct S{char pad[0x7c];void* value;};bool f(S*p,void*q){return p->value && p->value==q;}
