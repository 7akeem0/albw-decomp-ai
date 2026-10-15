#include "ds3.h"
#include "vtbig.h"
extern void* data_00712F70;
extern void* data_00712538;
extern void* data_00712468;
extern "C" void func_0014CEA4(void*);
extern "C" void func_001E0EF8(void*);
extern "C" void func_0014A814(void*, int);
extern "C" void func_0014A70C(void*, int);
extern "C" void func_0014A980(void*, int);
struct S25D92C : VtBig { };
void func_0025D92C(S25D92C* self) {
    func_0014CEA4(data_00712F70);
    self->v26();
    func_001E0EF8(data_00712538);
    func_0014A814(data_00712468, 0);
    func_0014A70C(data_00712468, 1);
    func_0014A980(data_00712468, 0);
}
