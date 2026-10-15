#include "range.h"
struct Receiver00686394;
struct Delegate00686394 {
    virtual bool invoke(void*);
    Receiver00686394* owner;
    bool(Receiver00686394::*callback)(void*);
};
bool Delegate00686394::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
