#include "range.h"
struct O{char pad[0x3c];u32 count,reserved;void**data;};extern bool func_00260500(void*);void f(O*p){void**begin=p->data;void**end=begin+p->count;for(void**it=begin;it!=end;++it){if(func_00260500(*it))break;}}
