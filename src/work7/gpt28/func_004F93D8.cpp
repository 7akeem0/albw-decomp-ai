#include "range.h"
struct Child4F93 { char pad0[0x18]; u32 array; };
struct Entry4F93 { u32 m0; Vec3 scale; };
struct Object4F93 { char pad0[0x14]; Vec3 scale; char pad20[0x2b0]; Child4F93* child; Vec3 get(u32) const; };
extern Entry4F93* func_0054D884(u32*,u32);
Vec3 Object4F93::get(u32 index) const {
    Child4F93* data=child;
    const Vec3* value=&scale;
    Entry4F93* entry=func_0054D884(&data->array,index);
    Vec3 left=*value, right=entry->scale;
    Vec3 result={left.x*right.x,left.y*right.y,left.z*right.z};
    return result;
}
