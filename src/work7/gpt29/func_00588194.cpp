#include "range.h"
struct Child5881 { char pad[0x140]; void* node; };
struct Owner5881 { char pad[0x24]; Child5881* child; };
extern void* func_0057F260(void*);
extern bool func_005699DC(void*,s32,u32,u32*);
u32 f_00588194(Owner5881* p,s32 id){u32 value=0;void* resource=func_0057F260(p->child->node);func_005699DC(resource,id,1,&value);return value;}
