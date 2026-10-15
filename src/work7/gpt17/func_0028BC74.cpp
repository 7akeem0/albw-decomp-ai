#include "range.h"
struct Element {u8 pad[0x35];u8 active;u8 tail[2];};struct Buffer {u32 reserved[2];u32 count;Element*items;Element*at(u32 i){Element*e=items;if(i<count)e=&items[i];return e;}};struct Obj {u8 pad[0x1c];Buffer*buffer;u8 pad20[0x62-0x20];s16 index;};
bool f_0028BC74(Obj*p){s32 i=p->index;Buffer*b=p->buffer;if(i>=0){if(b->at(i)->active)return true;}return false;}
