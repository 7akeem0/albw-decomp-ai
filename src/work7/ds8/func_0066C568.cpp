typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef signed char s8;
typedef float f32;

struct Owner;
typedef void (Owner::*Func)();

extern "C" void func_00352210(void*, s32, f32);

struct StateMgr {
    u32 count;        // 0x00
    s8 current;       // 0x04
    s8 next;          // 0x05
    u8 stateCount;    // 0x06
    u8 pad7;          // 0x07
    u32 reserved8;    // 0x08
    u32 reservedc;    // 0x0c
    void* timeline;   // 0x10
    Owner* owner;     // 0x14
    Func* enter;      // 0x18
    Func* exec;       // 0x1c
    Func* exit;       // 0x20
    void execute();
};

void StateMgr::execute() {
    (owner->*exec[current])();
    u32 n = ++count;
    if (timeline) func_00352210(timeline, 1, (f32)n);
}
