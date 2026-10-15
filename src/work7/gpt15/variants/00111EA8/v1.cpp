#include "../../range.h"
struct S{f32 start,end;s32 frames,current;};f32 func_00111EA8(const S*p){if(p->current>=p->frames)return p->end;return p->start+(p->end-p->start)*p->current/p->frames;}
