#include "range.h"
struct Receiver00685BAC;
struct Delegate00685BAC {
    virtual bool invoke(void*);
    Receiver00685BAC* owner;
    bool(Receiver00685BAC::*callback)(void*);
};
bool Delegate00685BAC::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
