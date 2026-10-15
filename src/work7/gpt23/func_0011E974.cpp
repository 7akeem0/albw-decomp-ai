#include "range.h"
extern "C" u8* func_0011E974(ByteResourceOwner* p,s32 index) {
    ByteResourceEntry16* entry = &p->entries[p->index];
    if (index >= 0 && (u32)index < entry->size) return entry->data + index;
    return 0;
}
