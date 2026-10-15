#include "range.h"
void Object4DB7::reset() {
    flags.set(0x4000);
    state=0;
    first=0;
    second=0;
    timer=0;
}
