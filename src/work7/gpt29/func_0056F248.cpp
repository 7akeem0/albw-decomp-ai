#include "range.h"
void* f_0056F248(Owner56F* p,u32 index) { RelTable56F* t=&p->table;if(t->count<=index)return 0;return (char*)t+t->entries[index].offset; }
