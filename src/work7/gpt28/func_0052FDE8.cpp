#include "range.h"
extern u32 func_0053F294(PlayerPositionMgr*);
bool equalIdentifier(u32 left, u32 right) { return left==right; }
bool f_0052FDE8(const Arg2CC* actor) {
    u32 id=actor->id;
    return equalIdentifier(id,func_0053F294(data_0070FB60));
}
