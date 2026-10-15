typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef unsigned long long u64;
namespace sead { struct Random { u32 getU32(); u32 getU32(u32 max) { return (u64)getU32() * max >> 32; } }; }
struct Actor { char pad[0x3e8]; s32 m3e8; char pad3ec[0xa20 - 0x3ec]; s32 ma20; bool isReady() const { return m3e8 == ma20; } };
static inline bool same(s32 a, s32 b) { return a == b; }
bool same2(const s32& a, s32 b) { return a == b; }
void func_002B705C(Actor* a);
bool func_00542D84(Actor* a);
sead::Random* func_0058A7D4(Actor* a);
struct Counter { u32 v; };
class AI {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual void v51(); virtual void v52();
    virtual s32* getTimer();  // 0xd4
    virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
    virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75(); virtual void v76();
    virtual bool v134();  // 0x134
    virtual void changeState(s32 s, s32 b);  // 0x138
    char pad[0x48 - 4];
    Actor* m48;
    s32 m4c;
    void update();
};

void AI::update()
{
    func_002B705C(m48);
    if (!m48->isReady()) return;
    if ((u32)*getTimer() >= 10 && func_00542D84(m48)) goto five;
    if (!v134()) {
        if (*getTimer() < m4c) return;
        s32 r = func_0058A7D4(m48)->getU32(101);
        if (r <= 30) { changeState(1, 1); return; }
        if (r > 90) goto two;
    } else {
        if ((u32)*getTimer() < 10) return;
        s32 r = func_0058A7D4(m48)->getU32(101);
        if (r <= 50) {
        two:
            changeState(2, 1);
            return;
        }
    }
five:
    changeState(5, 1);
}
