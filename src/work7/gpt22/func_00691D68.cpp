#include "range.h"
struct S {u32 pad;u32 value;u8 kind;};
typedef void (*Fn)(u8*,u32);extern Fn data_00715240[];
void target(S* p){data_00715240[p->kind](&p->kind,p->value);}
