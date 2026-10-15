#include "range.h"
struct Vector4E54 { f32 x,y,z; void add(const Vector4E54&,const Vector4E54&); void accumulate(const Vector4E54&); };
void Vector4E54::accumulate(const Vector4E54& value) { add(*this,value); }
struct Arg4E54 { u32 m0; Vector4E54 vector; };
struct Object4E54 { char pad0[0x4ec]; Vector4E54 position; void update(const Arg4E54*); };
extern void func_001507A8(Object4E54*,const Arg4E54*);
void Object4E54::update(const Arg4E54* arg) { position.accumulate(arg->vector); func_001507A8(this,arg); }
