#define CLS_EXTRA void func_001DD354();
#include "../shared_include/cls_1DE.h"

struct Anim { char pad[0x20]; };
void func_0028D7DC(Anim* a);
struct Model600 {
    char pad0[0x3c];
    Anim mAnimA;   // +0x3c
    Anim mAnimB;   // +0x5c
};
struct Obj711010 { char pad[0x10]; void* m10; };
extern Obj711010* data_00711010;
bool func_003459C8(void* p);
void func_002914B0(Actor* a);

void Cls::func_001DD354() {
    if (func_003459C8(data_00711010->m10)) {
        func_0028D7DC(&m600->mAnimA);
        func_0028D7DC(&m600->mAnimB);
    }
    func_002914B0(m614);
}
