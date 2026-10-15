#include "range.h"
struct Receiver006866D0;
struct Delegate006866D0 {
    virtual bool invoke(void*);
    Receiver006866D0* owner;
    bool(Receiver006866D0::*callback)(void*);
};
bool Delegate006866D0::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
