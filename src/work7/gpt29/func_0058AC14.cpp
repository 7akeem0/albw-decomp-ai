#include "range.h"
struct E_58AC14{char pad[20];f32 value;};struct O_58AC14{char pad[1048];BufferC<E_58AC14>*buffer;};
f32 f_58AC14(O_58AC14*p){if(!p->buffer)return 0.0f;return (*p->buffer)[0].value;}
