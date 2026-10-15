#include "range.h"
extern "C" f32 func_005670A0(CurveResource22*,f32);
u32 target(CurveParams22*p,f32*out,f32 t){for(Counter22 i(0);i<3;++i){if(p->flags&(0x100u<<i))continue;f32 v;if(p->flags&(1u<<i))v=p->values[i].constant;else v=func_005670A0(p->values[i].curve,t);out[i]=v;}return (~(p->flags&0xf00u))<<8;}
