#include "range.h"
struct Receiver00686E00;
struct Delegate00686E00 {
    virtual bool invoke(void*);
    Receiver00686E00* owner;
    bool(Receiver00686E00::*callback)(void*);
};
bool Delegate00686E00::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
