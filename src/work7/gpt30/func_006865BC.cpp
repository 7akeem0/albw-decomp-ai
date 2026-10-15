#include "range.h"
struct Receiver006865BC;
struct Delegate006865BC {
    virtual bool invoke(void*);
    Receiver006865BC* owner;
    bool(Receiver006865BC::*callback)(void*);
};
bool Delegate006865BC::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
