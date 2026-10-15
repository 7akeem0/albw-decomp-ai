#include "range.h"
extern "C" void func_004CF478(void*,s32,s32);
extern "C" void func_00138D98(Actor138* p) {
    func_004CF478(p->model,0,0);
    p->child->setFlag(0);
}
