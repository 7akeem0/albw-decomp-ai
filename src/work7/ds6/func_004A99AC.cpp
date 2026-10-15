typedef unsigned char u8;

namespace sead { struct IDisposer { virtual ~IDisposer(); }; }

struct MemB { u8 pad[0x54]; ~MemB(); };

struct Single99 {
    class SingletonDisposer_;
    static Single99* sInstance_;
    static SingletonDisposer_* sStaticDisposer_;
    u8 pad[0xbf50];
    MemB m;
};

class Single99::SingletonDisposer_ : public sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

Single99* Single99::sInstance_ = 0;
Single99::SingletonDisposer_* Single99::sStaticDisposer_ = 0;

Single99::SingletonDisposer_::~SingletonDisposer_() {
    if (this == sStaticDisposer_) {
        sStaticDisposer_ = 0;
        sInstance_->~Single99();
        sInstance_ = 0;
    }
}
