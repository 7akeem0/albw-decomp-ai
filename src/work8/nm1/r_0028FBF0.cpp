#include "../../work7/gpt25/range_types.h"
struct Entry28FBF0{u8 kind;char pad[15];};extern Entry28FBF0 data_007111A8[];
struct Child28FBF0{char pad[0x42];s16 kind;char gap[4];void*states;};
extern "C" void func_00377820(void*,const Vec3*);
extern "C" void f_0028FBF8(Child28FBF0*q,const Vec3*v){if(data_007111A8[q->kind].kind==11&&q->states)func_00377820(q->states,v);}
