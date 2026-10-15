#include "range.h"
struct Disposer4AE7 { virtual ~Disposer4AE7(); };
struct Singleton4AE7 : Disposer4AE7 {
    virtual ~Singleton4AE7();
    static void* instance;
    static Singleton4AE7* disposer;
};
void* Singleton4AE7::instance=0;
Singleton4AE7* Singleton4AE7::disposer=0;
Singleton4AE7::~Singleton4AE7() {
    if(this==disposer) { disposer=0;instance=0; }
}

