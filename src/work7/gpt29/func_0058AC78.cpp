#include "range.h"
struct E_58AC78{char pad[16];f32 value;};struct O_58AC78{char pad[1040];BufferC<E_58AC78>*buffer;};
f32 f_58AC78(O_58AC78*p){if(!p->buffer)return 0.0f;return (*p->buffer)[0].value;}
