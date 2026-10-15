#include "range.h"
struct S {u8* cursor;};
u8 f_004204EC(S* p){u8* q=p->cursor;u8 v=*q++;p->cursor=q;return v;}
