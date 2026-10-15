#include "range.h"
struct Child{char pad[0x408];void*value;};struct S{char pad[0x10];Child*child;};extern S* data_00711010;
void* f_556C7C(){return data_00711010->child->value;}
