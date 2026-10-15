#include "range.h"
struct Receiver00685FA0;
struct Delegate00685FA0 {
    virtual bool invoke(void*);
    Receiver00685FA0* owner;
    bool(Receiver00685FA0::*callback)(void*);
};
bool Delegate00685FA0::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
