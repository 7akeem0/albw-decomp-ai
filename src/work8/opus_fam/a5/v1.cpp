
typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef signed char s8;
struct Npc;
typedef void (Npc::*Func)();
typedef void (Npc::*ExitFunc)(s32);
struct StateMgrX {
    u32 count; s8 current; s8 next; u8 stateCount; u8 pad7;
    u32 reserved8; u32 reservedc; void* timeline; Npc* owner;
    Func* enter; Func* execute; ExitFunc* exit;
    void callExit(s32 s);
    void callEnter();
};
void StateMgrX::callExit(s32 s) {
    if (current != -1) { if (exit[current] != 0) (owner->*exit[current])(s); }
}
void StateMgrX::callEnter() {
    if (enter[current] != 0) (owner->*enter[current])();
}
extern "C" void func_003931EC(StateMgrX*, s8);
struct Sub900 { u8 pad[0x60]; StateMgrX mState; };
struct Npc {
    u8 pad0[0x900];
    Sub900 m900;
    u8 pad984[0x988 - 0x984];
    u8 flag988;
    void changeState(s32 st, s32 flag);
};
void Call930(StateMgrX* m);
void Npc::changeState(s32 st, s32 flag) {
    if (m900.mState.current == st) return;
    u8* q = (u8*)this;
    q[0x988] = (u8)flag;
    m900.mState.callExit(st);
    func_003931EC(&m900.mState, (s8)st);
    m900.mState.callEnter();
}
