#include "ladder_types.h"
struct Singleton00518454 {
    struct SingletonDisposer_;
    static Singleton00518454*sInstance_;
    static SingletonDisposer_*sStaticDisposer_;
};
struct Singleton00518454::SingletonDisposer_:Disposer4A15 {virtual ~SingletonDisposer_();};
Singleton00518454*Singleton00518454::sInstance_=0;
Singleton00518454::SingletonDisposer_*Singleton00518454::sStaticDisposer_=0;
Singleton00518454::SingletonDisposer_::~SingletonDisposer_(){if(this==sStaticDisposer_){sStaticDisposer_=0;sInstance_=0;}}
