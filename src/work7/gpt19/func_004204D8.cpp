#include "range.h"
struct S {u16* cursor;};
u16 f_004204D8(S* p){u16* q=p->cursor;u16 v=*q++;p->cursor=q;return v;}
