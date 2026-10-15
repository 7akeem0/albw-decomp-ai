#include "range.h"
struct Receiver006858CC;
struct Delegate006858CC {
    virtual bool invoke(void*);
    Receiver006858CC* owner;
    bool(Receiver006858CC::*callback)(void*);
};
bool Delegate006858CC::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
