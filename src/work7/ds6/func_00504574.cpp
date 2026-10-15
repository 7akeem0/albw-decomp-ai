typedef unsigned char u8;

namespace sead { struct IDisposer { virtual ~IDisposer(); }; }

struct MemC { u8 pad[0x54]; ~MemC(); };

struct Single50 {
    class SingletonDisposer_;
    static Single50* sInstance_;
    static SingletonDisposer_* sStaticDisposer_;
    u8 pad[0x65c];
    MemC m;
};

class Single50::SingletonDisposer_ : public sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

Single50* Single50::sInstance_ = 0;
Single50::SingletonDisposer_* Single50::sStaticDisposer_ = 0;

Single50::SingletonDisposer_::~SingletonDisposer_() {
    if (this == sStaticDisposer_) {
        sStaticDisposer_ = 0;
        sInstance_->~Single50();
        sInstance_ = 0;
    }
}
