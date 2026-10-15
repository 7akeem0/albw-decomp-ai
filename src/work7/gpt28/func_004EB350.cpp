#include "range.h"
extern void func_0025B74C(Reset78*);
void Object4EB3::reset(u8 value) {
    Child4EB3* object = child;
    func_0025B74C(&object->reset);
    object->active = value;
}
