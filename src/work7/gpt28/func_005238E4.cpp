#include "range.h"
struct Entry5238 { s16 value; };
struct Array5238 {
    s32 count, capacity; Entry5238** data;
    Entry5238* at(s32 i) const { if((u32)i<(u32)count) return data[i]; return 0; }
};
struct Object5238 { char pad0[0x2b8]; Array5238* array; s32 get(s32) const; };
s32 Object5238::get(s32 index) const {
    if(!array || array->count<=index) return -1;
    return array->at(index)->value;
}
