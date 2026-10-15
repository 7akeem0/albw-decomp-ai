#include "range.h"
struct S{char pad[0x9d];u8 mode;};
bool f_56A120(const S*p){return p->mode==1||p->mode==2;}
