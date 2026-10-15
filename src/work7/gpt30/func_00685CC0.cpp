#include "range.h"
struct Receiver00685CC0;
struct Delegate00685CC0 {
    virtual bool invoke(void*);
    Receiver00685CC0* owner;
    bool(Receiver00685CC0::*callback)(void*);
};
bool Delegate00685CC0::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
