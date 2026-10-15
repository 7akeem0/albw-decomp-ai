#include "range.h"
struct O93D {u8 pad[0x34];void* member;};
extern "C" void func_003AB994(O93D*,void*);
extern "C" void func_003AB8DC(O93D*,void*);
extern "C" void func_003993F8(O93D*);
extern "C" void func_003993D0(O93D*p){func_003AB994(p,p->member);func_003AB8DC(p,p->member);func_003993F8(p);}
