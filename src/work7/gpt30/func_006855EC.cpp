#include "range.h"
struct Receiver006855EC;
struct Delegate006855EC {
    virtual bool invoke(void*);
    Receiver006855EC* owner;
    bool(Receiver006855EC::*callback)(void*);
};
bool Delegate006855EC::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
