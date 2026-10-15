typedef unsigned int u32; typedef int s32; typedef unsigned char u8;
namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}
// SwordBeam actor (vt ro_6D19A8, ctor 0x1DB26C, dtor 0x1DB4B8); 0x1DB220 is a PMF target (table ro_6A2C64+8)
struct Msg;
struct SwordBeam {
    virtual void vf0();
    bool onDisappear(Msg* msg);
    void playSE(const sead::SafeString& name, s32 x);   // ActorBase 0x150A84
    char pad[0x2d7 - 4];
    u8 m2d7;
};
static const char cSE_Disappear[] = "SE_SwordBeam_DISAPPEAR";   // .constdata (after the PMF table), not a pc-relative literal
bool SwordBeam::onDisappear(Msg* msg) {
    if (!m2d7) {
        m2d7 = 1;
        playSE(cSE_Disappear, 0);
    }
    return true;
}
