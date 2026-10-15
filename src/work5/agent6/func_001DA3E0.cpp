typedef unsigned int u32; typedef int s32; typedef unsigned char u8;
struct Actor { s32 getActorId(); };           // 0x588BE4 (non-inline)
struct HandleMgr {};
Actor* func_0052FBA0(HandleMgr* mgr, u32 handle);
struct Game { char pad[0x3dbbc]; HandleMgr handles; };
extern Game* data_00706E20;
extern const s32 ro_00693130;
struct Msg { char pad[0x28]; u32 m28; };
struct Obj1DA {
    virtual bool isFromTarget(Msg* msg);
    char pad[0x2d7 - 4];
    u8 m2d7;
};
bool Obj1DA::isFromTarget(Msg* msg) {if (m2d7) return false; Actor* a = func_0052FBA0(&data_00706E20->handles, msg->m28); return a && a->getActorId() == ro_00693130;}
