#include "../range_types.h"
struct List {void* first;void* last;u32 count;s32 offset;};
extern "C" void func_0010F1DC(List*,void*);
void insert(List* p,void* item,s32 offset){func_0010F1DC(p,static_cast<char*>(item)+offset);}
extern "C" u32 f_00297950(List* p,void* item){insert(p,item,p->offset);return p->count++;}
