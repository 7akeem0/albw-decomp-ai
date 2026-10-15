#include "range.h"
struct Object4FAD { char pad[0x40c]; void* model; void* controller; void update(); };
extern void func_00169A80(void*);
extern void func_00168E9C(void*,void*,s32);
void Object4FAD::update() {
    if(controller) { func_00169A80(controller);func_00168E9C(controller,model,0); }
}
