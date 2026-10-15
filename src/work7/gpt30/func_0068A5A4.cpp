#include "range.h"
struct Receiver0068A5A4;
struct Delegate0068A5A4 {
    virtual void invoke();
    Receiver0068A5A4* receiver;
    void (Receiver0068A5A4::*callback)();
};
void Delegate0068A5A4::invoke() {
    if(receiver && callback) (receiver->*callback)();
}
