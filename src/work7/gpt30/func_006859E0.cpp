#include "range.h"
struct Receiver006859E0;
struct Delegate006859E0 {
    virtual bool invoke(void*);
    Receiver006859E0* owner;
    bool(Receiver006859E0::*callback)(void*);
};
bool Delegate006859E0::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
