#include "range.h"
struct Disposer4EAC { virtual ~Disposer4EAC(); };
struct Singleton4EAC : Disposer4EAC {
    virtual ~Singleton4EAC();
    static void* instance;
    static Singleton4EAC* disposer;
};
void* Singleton4EAC::instance=0;
Singleton4EAC* Singleton4EAC::disposer=0;
Singleton4EAC::~Singleton4EAC() {
    if(this==disposer) { disposer=0;instance=0; }
}

