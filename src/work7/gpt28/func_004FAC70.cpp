#include "range.h"
extern void func_00169608(void*,u32,u32,u32);
extern void func_00133870(void*,u32,void*);
void Object4FAC::update(u32 a,u32 b) {
    func_00169608(controller,a,b,option);
    func_00133870(controller,a,model);
}
