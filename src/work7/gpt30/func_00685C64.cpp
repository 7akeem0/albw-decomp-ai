#include "range.h"
struct Receiver00685C64;
struct Delegate00685C64 {
    virtual bool invoke(void*);
    Receiver00685C64* owner;
    bool(Receiver00685C64::*callback)(void*);
};
bool Delegate00685C64::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
