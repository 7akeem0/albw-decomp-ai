#define CLS_EXTRA bool func_001DD3A0();
#include "../shared_include/cls_1DE.h"

extern const u32 ro_0069313C;
struct ActorList {
    u32 m0;
    void** mBegin;       // +4
    u32 m8;
    void** mEnd;         // +0xc
};
struct Game2 {
    char pad[0x3dbbc];
    union { HandleMgr handles; ActorList list; };
};
void** func_005841A8(Game2* g, u32 key, void** from);
HandleObj* func_0052FBA0(ActorList* mgr, u32 handle);
bool Cls::func_001DD3A0() {
    ActorList* list = &((Game2*)data_00706E20)->list;
    if (m440 == 3) {
        int n = 0;
        for (void** it = func_005841A8((Game2*)data_00706E20, ro_0069313C, list->mBegin);
             it != ((Game2*)data_00706E20)->list.mEnd;
             it = func_005841A8((Game2*)data_00706E20, ro_0069313C, it + 1))
            n++;
        return n >= 3;
    } else {
        return func_0052FBA0(list, m62c) != 0;
    }
}
