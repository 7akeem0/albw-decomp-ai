#include "range.h"
struct Receiver006871F4;
struct Delegate006871F4 {
    virtual bool invoke(void*);
    Receiver006871F4* owner;
    bool(Receiver006871F4::*callback)(void*);
};
bool Delegate006871F4::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
