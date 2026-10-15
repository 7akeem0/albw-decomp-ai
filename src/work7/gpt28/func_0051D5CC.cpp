#include "range.h"
struct Value8 { char pad0[8]; f32 value; };
struct Object51D5 { Value8* child; char pad4[0x88]; f32 limit; bool test() const; };
bool withinFloatLimit(f32 bound, f32 value) { return value<=bound; }
bool Object51D5::test() const {
    if(child) { if(withinFloatLimit(limit,child->value)) return true; }
    return false;
}
