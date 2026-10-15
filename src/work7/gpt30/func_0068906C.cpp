#include "range.h"
extern "C" f32 sqrtf(f32);
f32 f_0068906C(Vec3* out,const Vec3* in) {
    f32 length=sqrtf(in->x*in->x+in->y*in->y+in->z*in->z);
    if(length>0.0f){
        f32 inv=1.0f/length;
        out->x=in->x*inv;
        out->y=in->y*inv;
        out->z=in->z*inv;
    }
    return length;
}
