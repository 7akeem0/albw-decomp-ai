#include "range18.h"
struct CFEFC {u8 pad[0x3c];u32 count;u8 gap[0x15];u8 kind;};
extern "C" u32 size_3DFF04(CFEFC*c){return c->count*c->kind*640+32;}
