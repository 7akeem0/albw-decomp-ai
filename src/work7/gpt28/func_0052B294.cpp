#include "range.h"
extern u8 func_00530290(Object5302*);
u32 f_0052B294(Object5302* owner) {
    if(!func_00530290(owner)) return 0;
    if(owner->mode) return 0;
    return 12;
}
