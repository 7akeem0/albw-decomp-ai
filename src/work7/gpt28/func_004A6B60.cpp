#include "range.h"
const char* ResourceEntry4A6B::name(ResourceHeader4A6B* header) {
    const ResourceEntry4A6B* record=this;
    const char* result=header->strings+record->nameOffset;
    return *result ? result : 0;
}
const char* Resource4A6B::name(u32 index) {
    Resource4A6B* owner=this;
    ResourceEntry4A6B* records=owner->entries;
    ResourceHeader4A6B* header=owner->header;
    return records[index].name(header);
}
