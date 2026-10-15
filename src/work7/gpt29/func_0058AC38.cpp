#include "range.h"
struct E_58AC38{char pad[20];f32 value;};struct O_58AC38{char pad[1040];BufferC<E_58AC38>*buffer;};
f32 f_58AC38(O_58AC38*p){if(!p->buffer)return 0.0f;return (*p->buffer)[0].value;}
