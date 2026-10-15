#include "range.h"
struct Receiver006864A8;
struct Delegate006864A8 {
    virtual bool invoke(void*);
    Receiver006864A8* owner;
    bool(Receiver006864A8::*callback)(void*);
};
bool Delegate006864A8::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
