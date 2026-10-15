struct StateMgr { void changeState(int s) ; };
struct En;
bool func_0058A8F0(En* e);
struct En {
    char pad[0x8dc];
    StateMgr mState;
    void f();
};
void En::f() {
    if (func_0058A8F0(this)) mState.changeState(4);
}
