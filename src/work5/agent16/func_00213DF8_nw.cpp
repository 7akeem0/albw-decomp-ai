struct StateMgr { void changeState(int s) ; };
struct En;
bool func_00588BF0(En* e, int a);
struct En {
    char p[0x8bc];
    StateMgr mState;
    void f();
};
void En::f() {
    if (func_00588BF0(this, 0)) mState.changeState(2);
}
