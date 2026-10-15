#include "range_types.h"
extern "C" void f_00321794(Table3217* p,u32 index,s32 n) {
    if (index<17) {
        Dispatch3217* entry=&p->entries[index];
        entry->dispatch(n);
    }
}
