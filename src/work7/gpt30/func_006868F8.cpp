#include "range.h"
struct Receiver006868F8;
struct Delegate006868F8 {
    virtual bool invoke(void*);
    Receiver006868F8* owner;
    bool(Receiver006868F8::*callback)(void*);
};
bool Delegate006868F8::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
