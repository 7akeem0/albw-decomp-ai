// Callee func_0066E7A0 takes an s8 state; the original is NOT tail-called (push/bl/pop),
// which none of the tried signatures reproduced.
struct StateMgr {
    void ChangeState(signed char state);
};

struct Actor {
    virtual void Update();
    char pad[0xf0 - 4];
    StateMgr mState;
    char pad2[0x298 - 0xf0 - sizeof(StateMgr)];
    int mTimer;
};

void Actor::Update() {
    if (mTimer > 0) {
        mTimer--;
        return;
    }
    mState.ChangeState(10);
}
