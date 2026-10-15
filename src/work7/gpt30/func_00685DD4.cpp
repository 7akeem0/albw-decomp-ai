#include "range.h"
struct Receiver00685DD4;
struct Delegate00685DD4 {
    virtual bool invoke(void*);
    Receiver00685DD4* owner;
    bool(Receiver00685DD4::*callback)(void*);
};
bool Delegate00685DD4::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
