#include "range.h"
struct AnimElem24 {u32 a,b;float frame;u32 c;float rate;char rest[0x18];};
struct AnimArr24 {u32 pad[3];s32 count,capacity;AnimElem24*data;AnimElem24&operator[](u32 i){if(i<(u32)count)return data[i];return data[0];}};
struct Model15C2_24 {char pad[0x1c];AnimArr24*anim;};
struct Obj15C2_24 {char pad[0x960];Model15C2_24*model;};
extern void func_004FB4E0(Obj15C2_24*,float);
extern "C" void target(Obj15C2_24*p){func_004FB4E0(p,1.0f);(*p->model->anim)[0].rate=1.0f;}
