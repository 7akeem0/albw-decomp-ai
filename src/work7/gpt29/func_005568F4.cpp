#include "range.h"
bool f_005568F4(Owner556* p) {
    if (p->child->flags & 1) return true;
    if (p->child->flags & 8) return true;
    return p->child->enabled!=0;
}
