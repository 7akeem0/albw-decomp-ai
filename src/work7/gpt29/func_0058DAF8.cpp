#include "range.h"
bool f_0058DAF8(Owner58DA* p) {
    if (!p->child) return false;
    if (p->child->flags & 0xe) return true;
    return false;
}
