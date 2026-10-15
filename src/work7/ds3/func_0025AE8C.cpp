#include "ds3.h"
struct SafeString { virtual void vf(); const char* str; SafeString(const char* s) : str(s) {} };
extern "C" void* data_00711F50;
extern "C" void func_002DF0B0(void*, const SafeString&, int);
void func_0025AE8C() {
    func_002DF0B0(data_00711F50, SafeString("SE_ENV_FOREST_SWORD_EPILOGUE"), 0x12c);
}
