#include "range.h"
struct S {u8 pad[0x3dc];Vec3 velocity;}; extern "C" void func_00219668(S*); void f_006549BC(S* p){for(int i=0;i<3;++i) (&p->velocity.x)[i]=0.0f;func_00219668(p);}
