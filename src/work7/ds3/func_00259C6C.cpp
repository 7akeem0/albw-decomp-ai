#include "ds3.h"
struct SafeString {
    virtual void vf();
    const char* str;
    SafeString(const char* s) : str(s) {}
};
struct SoundMgr;
extern "C" SoundMgr* data_00711F50;
extern "C" void func_004EC988(SoundMgr*, const SafeString&, int);
void func_00259C6C() {
    func_004EC988(data_00711F50, SafeString("SE_ENV_ZORA_SPRING"), 0);
}
