#include "range.h"
struct Receiver00686F70;
struct Delegate00686F70 {
    virtual bool invoke(void*);
    Receiver00686F70* owner;
    bool(Receiver00686F70::*callback)(void*);
};
bool Delegate00686F70::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
