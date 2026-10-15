typedef unsigned char u8; typedef unsigned int u32; typedef int s32;
struct P { char pad[4]; s32 count; void** array; };
s32 f(P* p, void* v){ for(u32 i=0;(s32)i<p->count;i++){ void** a=&p->array[i]; if(!*a){ *a=v; return i; } } return -1; }
