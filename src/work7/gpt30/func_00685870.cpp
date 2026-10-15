#include "range.h"
struct Receiver00685870;
struct Delegate00685870 {
    virtual bool invoke(void*);
    Receiver00685870* owner;
    bool(Receiver00685870::*callback)(void*);
};
bool Delegate00685870::invoke(void* arg) {
    if(owner && callback) return (owner->*callback)(arg);
    return false;
}
