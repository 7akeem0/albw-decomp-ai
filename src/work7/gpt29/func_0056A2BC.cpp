#include "range.h"
struct TaggedEntry56A { u16 tag,reserved; s32 offset; };
struct TaggedTable56A { u32 count; TaggedEntry56A entries[1]; };
struct Owner56A2BC { char pad[0xc]; s32 offset; };
void* f_0056A2BC(Owner56A2BC* p,u32 index){TaggedTable56A* table=(TaggedTable56A*)((char*)p+p->offset);if(index<table->count){if(table->entries[index].tag==0x4900)return(char*)table+table->entries[index].offset;}return 0;}
