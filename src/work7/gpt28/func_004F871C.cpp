#include "range.h"
void Object4F87::set(u32 value) {
    if (first) first->value = value;
    if (second) second->value = value;
}
