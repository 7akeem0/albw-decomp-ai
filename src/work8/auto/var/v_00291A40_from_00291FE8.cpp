#include "../../../work7/gpt25/range_types.h"
struct Entry291A {u8 kind;char pad[15];};extern Entry291A data_007111A8[];
struct Child291A {char pad[0x42];s16 kind;char gap[4];void*states;};
extern "C" bool func_0038C2E8(void*,const Vec3*,f32);
extern "C" bool f_00291FE8(Child291A*q,const Vec3*v,f32 rate){if(data_007111A8[q->kind].kind!=6)return false;return func_0038C2E8(q->states,v,rate);}
