#include "range.h"
struct Disposer004ED47C { virtual ~Disposer004ED47C(); };
struct Singleton004ED47C : Disposer004ED47C {
    virtual ~Singleton004ED47C();
    static void* instance;
    static Singleton004ED47C* disposer;
};
void* Singleton004ED47C::instance=0;
Singleton004ED47C* Singleton004ED47C::disposer=0;
Singleton004ED47C::~Singleton004ED47C() {
    if(this==disposer) { disposer=0;instance=0; }
}
