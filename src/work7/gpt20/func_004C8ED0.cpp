#include "ladder_types.h"
struct Singleton004C8ED0 {
    struct SingletonDisposer_;
    static Singleton004C8ED0*sInstance_;
    static SingletonDisposer_*sStaticDisposer_;
};
struct Singleton004C8ED0::SingletonDisposer_:Disposer4A15 {virtual ~SingletonDisposer_();};
Singleton004C8ED0*Singleton004C8ED0::sInstance_=0;
Singleton004C8ED0::SingletonDisposer_*Singleton004C8ED0::sStaticDisposer_=0;
Singleton004C8ED0::SingletonDisposer_::~SingletonDisposer_(){if(this==sStaticDisposer_){sStaticDisposer_=0;sInstance_=0;}}
