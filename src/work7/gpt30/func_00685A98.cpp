#include "range.h"
struct Receiver00685A98;
struct Delegate00685A98 {
    virtual bool invoke(void*);
    Receiver00685A98* owner;
    bool(Receiver00685A98::*callback)(void*);
};
bool Delegate00685A98::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
