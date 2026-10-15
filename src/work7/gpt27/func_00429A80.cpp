#include "range.h"
struct OffsetList429{void*first;void*last;u32 count;s32 offset;};extern void func_0010F1DC(void*,void*);
void insert(OffsetList429*p,void*n,s32 off){func_0010F1DC(p,(u8*)n+off);}u32 func_00429A80(OffsetList429*p,void*n){insert(p,n,p->offset);return p->count++;}
