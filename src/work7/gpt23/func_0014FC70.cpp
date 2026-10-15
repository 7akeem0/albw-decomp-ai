#include "range.h"
struct CollResource { char storage[0x50]; };
struct ActorFC {
    char pad0[0x40c];
    void* model;
    char pad410[0x43c-0x410];
    CollResource collision;
};
extern "C" void func_0014ED58(void*);
extern "C" void func_0014FC94(ActorFC*,CollResource*);
extern "C" void func_0014FC70(ActorFC* p) {
    func_0014ED58(p->model);
    func_0014FC94(p,&p->collision);
}
