#include "range.h"
struct Arg {u8 pad[0x20];u16 kind;};
extern bool func_001507A8(void*,Arg*);
bool f_00286388(void* p,Arg* a){if((a->kind&0x7e0)==0x240)return false;return func_001507A8(p,a);}
