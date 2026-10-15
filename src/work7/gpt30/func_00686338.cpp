#include "range.h"
struct Receiver00686338;
struct Delegate00686338 {
    virtual bool invoke(void*);
    Receiver00686338* owner;
    bool(Receiver00686338::*callback)(void*);
};
bool Delegate00686338::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
