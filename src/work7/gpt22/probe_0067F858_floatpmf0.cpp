#include "range.h"
struct FloatCallbackOwner22{};typedef void(FloatCallbackOwner22::*FloatMethod22)(f32);
struct CallbackGroup22{u8 pad[0x90];FloatCallbackOwner22*objects[16];FloatCallbackOwner22*get(s32);};
FloatCallbackOwner22*CallbackGroup22::get(s32 i){if(i>15)return 0;return objects[i];}
void target(CallbackGroup22*p,u32 mask,FloatMethod22 method,f32 value){for(Counter22 i(0);i<16;++i,mask>>=1){if(!mask)break;if(mask&1){FloatCallbackOwner22*o=p->get(i);if(o)(o->*method)(value);}}}
