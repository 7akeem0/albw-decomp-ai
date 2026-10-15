#include "range.h"
struct Sub4EFA { char bytes[4]; };
struct Object4EFA2 { char pad[0x24]; Sub4EFA sub; void update(const Vec3*); };
extern void* data_0070C8E0;
extern void func_004AB708(void*);
extern void func_004EF418(Object4EFA2*,Sub4EFA*,const Vec3*,s32);
void Object4EFA2::update(const Vec3* vector) {
    func_004AB708(data_0070C8E0);
    func_004EF418(this,&sub,vector,0);
}
