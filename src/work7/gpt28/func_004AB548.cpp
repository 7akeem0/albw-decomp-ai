#include "range.h"
struct Disposer4AB5 { virtual ~Disposer4AB5(); };
struct Singleton4AB5 : Disposer4AB5 {
    virtual ~Singleton4AB5();
    static void* instance;
    static Singleton4AB5* disposer;
};
void* Singleton4AB5::instance=0;
Singleton4AB5* Singleton4AB5::disposer=0;
Singleton4AB5::~Singleton4AB5() {
    if(this==disposer) { disposer=0;instance=0; }
}
