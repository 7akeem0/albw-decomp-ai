#include "range.h"
extern s32 func_002ACDFC(Object5163*);
extern  void func_0066BA90(State5163*,s32);
void Object5163::update() {
    s32 value=func_002ACDFC(this);
    State5163* current=&state;
    s32 limit=current->current;
    if(value<=limit) func_0066BA90(current,2);
}
