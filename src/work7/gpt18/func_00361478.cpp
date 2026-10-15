#include "range.h"
struct Table{char pad[0x10];void* items[1];void* get(u32 i){return items[i];}};struct Mgr{char pad[0x10];Table* table;};extern Mgr* data_00711010;void* func_00361478(void*,u32 i){Table* t=data_00711010->table;return t->items[i];}
