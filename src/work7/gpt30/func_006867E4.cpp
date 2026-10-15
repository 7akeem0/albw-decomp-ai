#include "range.h"
struct Receiver006867E4;
struct Delegate006867E4 {
    virtual bool invoke(void*);
    Receiver006867E4* owner;
    bool(Receiver006867E4::*callback)(void*);
};
bool Delegate006867E4::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
