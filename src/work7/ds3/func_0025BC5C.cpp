#include "ds3.h"
struct SafeString {
    virtual void vf();
    const char* str;
    SafeString(const char* s) : str(s) {}
};
struct SoundMgr;
extern "C" SoundMgr* data_00711F50;
extern "C" void func_00407880(SoundMgr*, void*);
extern "C" u32 func_00587FCC(SoundMgr*, const SafeString&);
struct S25BC5C { char pad[0x7c]; u32 m7C; };
static const char kS_TIMER[] = "SE_S_TIMER";
void func_0025BC5C(S25BC5C* self) {
    func_00407880(data_00711F50, self);
    self->m7C = func_00587FCC(data_00711F50, SafeString(kS_TIMER));
}
