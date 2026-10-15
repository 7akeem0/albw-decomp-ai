#include "range.h"
extern void func_emptyFirst(void*);
extern void func_emptySecond(void*);
extern void func_004A26A8(void*, s32);
void f_004C90A4(Object4C90A* owner) {
    func_emptyFirst(owner->first);
    func_emptySecond(owner->second);
    func_004A26A8(owner->first, -1);
}
