#include "range.h"
struct Receiver006861C8;
struct Delegate006861C8 {
    virtual bool invoke(void*);
    Receiver006861C8* owner;
    bool(Receiver006861C8::*callback)(void*);
};
bool Delegate006861C8::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
