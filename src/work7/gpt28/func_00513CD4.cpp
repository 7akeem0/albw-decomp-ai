#include "range.h"
extern void func_004CF478(void*, bool, bool);
void Object513C::activate() {
    active=1;
    if(mode==4) func_004CF478(child,false,false);
}
