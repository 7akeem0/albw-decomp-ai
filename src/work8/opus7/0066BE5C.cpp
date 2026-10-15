typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8;
struct Owner;
typedef void (Owner::*Func)();
typedef void (Owner::*ExitFunc)(s32);
extern "C" void func_003931EC(void*, s8);
struct StateMgr {
    u32 count; s8 current; s8 next; u8 stateCount; u8 pad7;
    u32 elemNum; void* elems; void* timeline;
    Owner* owner; Func* enter; Func* execute; ExitFunc* exit;
    void callExit(s32 s);
    void callEnter();
    void changeState(s32 s);
};
void StateMgr::callExit(s32 s) {
    if (current != -1) {
        if (exit[current] != 0) (owner->*exit[current])(s);
    }
}
void StateMgr::callEnter() {
    if (enter[current] != 0) (owner->*enter[current])();
}
void StateMgr::changeState(s32 s) {
    callExit(s);
    func_003931EC(this, s);
    callEnter();
}
