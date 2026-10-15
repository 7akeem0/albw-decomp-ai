#include "../include/swap_actor.h"

void Actor1E4::func_001E4158() {
    Ctl48C** const& controller = &m48C;
    if (*controller) {
        func_00169A80(*controller);
        func_00168E9C(*controller, m47C, 0);
    }
}
