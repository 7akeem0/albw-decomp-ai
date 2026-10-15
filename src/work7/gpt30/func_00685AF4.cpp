#include "range.h"
struct Receiver00685AF4;
struct Delegate00685AF4 {
    virtual bool invoke(void*);
    Receiver00685AF4* owner;
    bool(Receiver00685AF4::*callback)(void*);
};
bool Delegate00685AF4::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
