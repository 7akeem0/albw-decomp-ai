// func_00513CFC: if (self->m48c > 30) { func_0066B94C(self+0x48c, 9);
//   ActorBase::playSE(self, sead::SafeString("SE_KinSta_GET_IN_WATER"), 0); }

typedef unsigned int u32;
typedef int s32;

namespace sead {
struct SafeString {
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}

struct Self {
    char p0[0x48c];
    s32 m48c;
};

void func_0066B94C(void* p, u32 v);
void func_00150A84(Self* self, const sead::SafeString& s, s32 n);

void func_00513CFC(Self* self) {
    if (self->m48c > 30) {
        func_0066B94C((char*)self + 0x48c, 9);
        func_00150A84(self, sead::SafeString("SE_KinSta_GET_IN_WATER"), 0);
    }
}
