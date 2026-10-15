#include "range.h"
void Object4E4C::update() {
    CounterPair state = counter;
    if(state.current < state.maximum) counter.current = state.current + 1;
    else active = 1;
}
