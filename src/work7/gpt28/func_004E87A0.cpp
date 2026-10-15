#include "range.h"
struct Object4E87 { char pad[0x4d4]; void* model; void* child; bool update(); };
extern bool func_0014F794(Object4E87*);
extern void func_004CF478(void*,bool,s32);
extern void func_00151148(void*,bool);
bool Object4E87::update() {
    bool visible=func_0014F794(this);
    func_004CF478(model,visible,0);
    func_00151148(child,visible);
    return visible;
}
