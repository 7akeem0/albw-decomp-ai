#include "range.h"
Vec3* Object51E5::get() {
    PositionHolder* h = holder;
    Positions2C8* child = h->child;
    return (child->flags & 2) ? &child->second : &child->first;
}
