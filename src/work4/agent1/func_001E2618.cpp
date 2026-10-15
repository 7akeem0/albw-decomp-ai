typedef unsigned char u8; typedef signed char s8; typedef unsigned int u32; typedef signed int s32;
namespace sead { struct IDisposer { virtual ~IDisposer(); }; }   // 0x4A1520
struct Mem30 { ~Mem30(); };                                      // 0x49116C
struct Single {
    char pad[0x30];
    Mem30 m30;
    class SingletonDisposer_;
    static Single* sInstance_;
    static SingletonDisposer_* sStaticDisposer_;
};
class Single::SingletonDisposer_ : public sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};
Single* Single::sInstance_ = 0;
Single::SingletonDisposer_* Single::sStaticDisposer_ = 0;
Single::SingletonDisposer_::~SingletonDisposer_() {
    if (this == sStaticDisposer_) {
        sStaticDisposer_ = 0;
        sInstance_->~Single();
        sInstance_ = 0;
    }
}
