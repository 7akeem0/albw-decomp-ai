#include "range.h"
struct Record5691 { u32 reserved; void* value; };
struct Owner5691 { char pad[0xcd]; u8 count; char padCE[2]; Record5691* records; void* fallback; };
void* f_005691D4(Owner5691* p,u8 index){if(!index)return p->fallback;--index;if(index>=p->count)return 0;return p->records[index].value;}
