#include "range.h"
struct TaggedEntry56AC { u16 tag,reserved; s32 offset; };
struct TaggedTable56AC { u32 count; TaggedEntry56AC entries[1]; };
void* findTagged56AC(TaggedTable56AC* table,u32 index,u32 tag){if(index<table->count){if(table->entries[index].tag==tag)return(char*)table+table->entries[index].offset;}return 0;}
void* f_0056AC60(TaggedTable56AC* table,u32 index){return findTagged56AC(table,index,0x4102);}

