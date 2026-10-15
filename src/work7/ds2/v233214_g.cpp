typedef unsigned char u8; typedef signed char s8; typedef unsigned int u32; typedef signed int s32;
namespace sead { struct IDisposer { virtual ~IDisposer(); }; }
struct Elem { char pad[0x5c1c]; ~Elem(); };
struct ElemArr { Elem a[2]; ~ElemArr(); };
struct Mem1C { char pad[0x1c]; };
void func_0049116C(void* p);
struct Single {
    char pad0[0x10];
    ElemArr m10;
    char pad1[0xb8cc - 0x10 - 2 * 0x5c1c];
    Mem1C mb8cc;
    Mem1C mb8e8;
    ~Single();
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
ElemArr::~ElemArr() {}
Single::~Single() {
    func_0049116C(&mb8e8);
    func_0049116C(&mb8cc);
}
Single::SingletonDisposer_::~SingletonDisposer_() {
    if (this == sStaticDisposer_) {
        sStaticDisposer_ = 0;
        sInstance_->~Single();
        sInstance_ = 0;
    }
}
