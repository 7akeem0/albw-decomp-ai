#include "range.h"
u32 Object5264::get() const {
    const State5264* p=&state;
    if(p->gate) return 0;
    if(p->mode!=1) return 13;
    return 0;
}
