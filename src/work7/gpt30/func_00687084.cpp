#include "range.h"
struct Receiver00687084;
struct Delegate00687084 {
    virtual bool invoke(void*);
    Receiver00687084* owner;
    bool(Receiver00687084::*callback)(void*);
};
bool Delegate00687084::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
