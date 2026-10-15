typedef unsigned char u8;

namespace sead { struct IDisposer { virtual ~IDisposer(); }; }

struct MemE { u8 pad[0x54]; ~MemE(); };
struct MemD { u8 pad[0x2c]; ~MemD(); };
struct MemB { u8 pad[0x54]; ~MemB(); };

struct Single3C {
    class SingletonDisposer_;
    static Single3C* sInstance_;
    static SingletonDisposer_* sStaticDisposer_;
    u8 padA[0x54];
    MemE m54;
    u8 padB[0x48];
    MemD mf0;
    u8 padC[4];
    MemB m120;
};

class Single3C::SingletonDisposer_ : public sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

Single3C* Single3C::sInstance_ = 0;
Single3C::SingletonDisposer_* Single3C::sStaticDisposer_ = 0;

Single3C::SingletonDisposer_::~SingletonDisposer_() {
    if (this == sStaticDisposer_) {
        sStaticDisposer_ = 0;
        sInstance_->~Single3C();
        sInstance_ = 0;
    }
}
