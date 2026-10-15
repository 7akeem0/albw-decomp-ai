#include "ladder_types.h"
struct O4C92 {char pad0[0x8bc];u32 state;};
extern void func_004CABC0(O4C92*);
extern bool func_004C9B74(O4C92*);
extern void func_0066A284(void*,s32);
void target(O4C92*p){func_004CABC0(p);if(func_004C9B74(p))func_0066A284(&p->state,7);}
