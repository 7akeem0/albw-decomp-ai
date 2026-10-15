#include "range.h"
struct Message22E924{char pad[0x21];s8 mode;u8 reserved,flag;};
extern "C" float target(void*,const Message22E924*p){if(p->mode==1||(p->mode==3&&p->flag==1))return 100.f;return 1.f;}
