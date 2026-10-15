#include "../../work7/ds6/ds6.h"

namespace sead { struct IDisposer { virtual ~IDisposer(); }; }

struct Single49E {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual ~Single49E();
    class SingletonDisposer_;
    static Single49E* sInstance_;
    static SingletonDisposer_* sStaticDisposer_;
};

class Single49E::SingletonDisposer_ : public sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

Single49E* Single49E::sInstance_ = 0;
Single49E::SingletonDisposer_* Single49E::sStaticDisposer_ = 0;

Single49E::SingletonDisposer_::~SingletonDisposer_() {
    if (this == sStaticDisposer_) {
        sStaticDisposer_ = 0;
        sInstance_->~Single49E();
        sInstance_ = 0;
    }
}
