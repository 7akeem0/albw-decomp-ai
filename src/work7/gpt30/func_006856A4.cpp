#include "range.h"
struct Receiver006856A4;
struct Delegate006856A4 {
    virtual bool invoke(void*);
    Receiver006856A4* owner;
    bool(Receiver006856A4::*callback)(void*);
};
bool Delegate006856A4::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
