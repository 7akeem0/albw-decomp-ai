#include "range.h"
struct Object4F6D { char pad[0x34]; void* child; char gap[0x14]; u8 active; bool update(); };
extern bool func_003248F8(void*);
bool Object4F6D::update() {
    if(child && func_003248F8(child)) { active=1;return true; }
    return false;
}
