#include "../range_types.h"
struct Child2E4B{char pad[0x44];u8 flag;void set(u8 n){flag=n;}};
struct Obj2E4B{char pad[0x8c4];Child2E4B*child;};
extern "C" void func_004FB070(Obj2E4B*,f32);
extern "C" void func_004FACD4(Obj2E4B*,s32);
extern "C" void func_004FC178(Obj2E4B*);
void func_002E4B50(Obj2E4B*p){func_004FB070(p,0.f);func_004FACD4(p,0);p->child->set(0);func_004FC178(p);}
