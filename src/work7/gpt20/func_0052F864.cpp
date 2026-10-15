#include "ladder_types.h"
struct O52F8{char pad[0x48c];AnimArray* anim;};
f32 f_0052F864(O52F8* p){return p->anim?(*p->anim)[0].value14:0.f;}
