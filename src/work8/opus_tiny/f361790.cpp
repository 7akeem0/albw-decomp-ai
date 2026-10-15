// 0x361790: forward to 0x29218C(child m14, a, Arg{0}, true, c). The 3rd argument is a one-word POD struct passed
// by value (built in ip, then copied to r2/r3 - KB #17 family); the 5th is a float-or-bits union (not an
// HFA, so it travels in core registers/stack and the callee vldr's it from the stack).
typedef unsigned int u32; typedef int s32; typedef float f32;
struct Arg29 { u32 v; };
union FloatBits29 { f32 f; u32 u; };
extern bool func_0029218C(void* obj, s32 a, Arg29 x, bool y, FloatBits29 c);
struct Obj361790 { char pad[0x14]; void* m14; bool start(s32 a, FloatBits29 c); };
bool Obj361790::start(s32 a, FloatBits29 c) { Arg29 z = {0}; return func_0029218C(m14, a, z, true, c); }
