#include "range.h"
struct Obj381 { char pad[0xb32]; u8 flag; };
extern "C" void func_004FB404(Obj381*);
void func_00381690(Obj381* p) { p->flag=1; func_004FB404(p); }
