#include "range.h"
struct Receiver00685C08;
struct Delegate00685C08 {
    virtual bool invoke(void*);
    Receiver00685C08* owner;
    bool(Receiver00685C08::*callback)(void*);
};
bool Delegate00685C08::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
