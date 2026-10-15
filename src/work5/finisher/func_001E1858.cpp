// 0x1E1858 = sead SingletonDisposer_ D1 dtor (singleton at data_00712538, disposer at data_0071253C); same recipe as work4/agent1/func_001E2618.cpp
typedef unsigned char u8; typedef signed char s8; typedef unsigned int u32; typedef signed int s32;
namespace sead { struct IDisposer { virtual ~IDisposer(); }; }   // 0x4A1520
struct Mem1FB4 { ~Mem1FB4(); };                                  // 0x49116C
struct Single {
    char pad[0x1fb4];
    Mem1FB4 m1fb4;
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
