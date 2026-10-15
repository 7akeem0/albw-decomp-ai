#include "ladder_types.h"
struct Singleton4ACD {
    struct SingletonDisposer_;
    static Singleton4ACD*sInstance_;
    static SingletonDisposer_*sStaticDisposer_;
};
struct Singleton4ACD::SingletonDisposer_:Disposer4A15 {virtual ~SingletonDisposer_();};
Singleton4ACD*Singleton4ACD::sInstance_=0;
Singleton4ACD::SingletonDisposer_*Singleton4ACD::sStaticDisposer_=0;
Singleton4ACD::SingletonDisposer_::~SingletonDisposer_(){if(this==sStaticDisposer_){sStaticDisposer_=0;sInstance_=0;}}
