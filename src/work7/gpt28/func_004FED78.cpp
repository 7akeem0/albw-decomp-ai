#include "range.h"
struct Object4FED { char pad[0x3dc]; Vec3 velocity; char gap[0x1b4]; BitFlag32 flags; void reset(); };
void Object4FED::reset() {
    flags.reset(4);flags.reset(0x80);flags.reset(0x30);flags.reset(1);flags.reset(2);
    for(s32 i=0;i<3;++i) (&velocity.x)[i]=0.0f;
}
