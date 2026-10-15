#include "range.h"
struct Vector4BCA { f32 x,y,z; void add(const Vector4BCA&,const Vector4BCA&); void accumulate(const Vector4BCA&); };
void Vector4BCA::accumulate(const Vector4BCA& value) { add(*this,value); }
struct Object4BCA { char pad0[0x3d0]; Vector4BCA position, velocity; void update(); };
void Object4BCA::update() {
    position.accumulate(velocity);
    for(u32 i=0;i<3;++i) (&velocity.x)[i]=0.0f;
}
