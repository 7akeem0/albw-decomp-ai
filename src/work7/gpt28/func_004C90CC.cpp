#include "range.h"
void Owner4C90::clear() {
    active = 0;
    Object3C4* object = holder->object;
    if (object) object->state = 0;
}
