extern "C" const char ro_006C57E0[];
class SafeString_006F5980 {
public:
    SafeString_006F5980() : mStringTop(ro_006C57E0) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
struct Obj_001BAABC {
    unsigned m0;
    SafeString_006F5980 m4;
    SafeString_006F5980 mC;
    SafeString_006F5980 m14;
    unsigned m1C;
    Obj_001BAABC();
};
Obj_001BAABC::Obj_001BAABC() : m0(0), m1C(0) {}
