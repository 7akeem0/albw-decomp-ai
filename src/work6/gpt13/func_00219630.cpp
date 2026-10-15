#include "en218.h"
inline f32 dist(const Vec3&a,const Vec3&b){f32 x=b.x-a.x;f32 z=b.z-a.z;return x*x+z*z;}
bool func_00219630(EnB*o,const Vec3&p,f32 r){f32 d=dist(o->m8,p);if(r*r<d)return false;return true;}
