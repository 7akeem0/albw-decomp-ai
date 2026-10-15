#include "range.h"
struct Disposer4C3D { virtual ~Disposer4C3D(); };
struct Singleton4C3D : Disposer4C3D {
    virtual ~Singleton4C3D();
    static void* instance;
    static Singleton4C3D* disposer;
};
void* Singleton4C3D::instance=0;
Singleton4C3D* Singleton4C3D::disposer=0;
Singleton4C3D::~Singleton4C3D() {
    if(this==disposer) { disposer=0;instance=0; }
}

