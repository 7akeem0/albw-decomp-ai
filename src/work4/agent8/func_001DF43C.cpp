// Player::~Player (D1). Player vtable ro_006D1A88: 21 primary slots, secondary (ActorBaseB @0x320) at +0x5c.
typedef unsigned int u32;
typedef signed int s32;

struct SoundMgr;
extern SoundMgr* data_00711F50;
void func_0014A0E8(SoundMgr* mgr, s32 v);

struct ActorBaseA {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual ~ActorBaseA();
    virtual void v5();  virtual void v6();  virtual void v7();  virtual void v8();
    virtual void v9();  virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    char padA[0x320 - 4];
};
struct ActorBaseB {
    virtual void b0();
};
class ActorBase : public ActorBaseA, public ActorBaseB {
public:
    virtual ~ActorBase();
};

class Player : public ActorBase {
public:
    virtual ~Player();
};

Player::~Player() {
    func_0014A0E8(data_00711F50, 0);
}
