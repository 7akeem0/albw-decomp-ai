#include "range18.h"
struct CFEFC {u8 pad[0x3c];u32 count;u8 gap[0x15];u8 kind;};
struct OFEFC {u32 a;CFEFC*child;};
extern "C" u32 size_3DFF04(CFEFC*);
extern "C" u32 func_003DFEFC(OFEFC*p){return size_3DFF04(p->child);}
