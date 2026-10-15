namespace sead {struct IDisposer{virtual ~IDisposer();};}
struct Single260DFC {
    class SingletonDisposer_;
    static Single260DFC*sInstance_;
    static SingletonDisposer_*sStaticDisposer_;
};
class Single260DFC::SingletonDisposer_ : public sead::IDisposer {public:virtual ~SingletonDisposer_();};
Single260DFC*Single260DFC::sInstance_=0;
Single260DFC::SingletonDisposer_*Single260DFC::sStaticDisposer_=0;
Single260DFC::SingletonDisposer_::~SingletonDisposer_(){if(this==sStaticDisposer_){sStaticDisposer_=0;sInstance_->~Single260DFC();sInstance_=0;}}
