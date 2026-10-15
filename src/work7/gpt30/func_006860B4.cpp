#include "range.h"
struct Receiver006860B4;
struct Delegate006860B4 {
    virtual bool invoke(void*);
    Receiver006860B4* owner;
    bool(Receiver006860B4::*callback)(void*);
};
bool Delegate006860B4::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
