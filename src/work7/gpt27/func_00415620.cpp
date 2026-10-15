#include "range.h"
struct Delegate415 {u8 pad[0x1e8];void (*callback)(void*);void* arg;};
void func_00415620(){}
void func_00415624(Delegate415* p){if(p->callback)p->callback(p->arg);}
