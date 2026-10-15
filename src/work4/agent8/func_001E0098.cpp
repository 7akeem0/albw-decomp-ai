#include "sndobj.h"

bool SndObj::func_001E0098(s32 a, s32 id, ModelHolder* holder) {
    if (mE0 != id)
        m111 = 1;
    else
        m111 = 0;
    mE0 = id;
    if (mE4 == -1)
        mE4 = id;
    if (holder == 0)
        holder = &mOwnHolder;
    m30 = func_00409100(a, holder, id, 0);
    mHolder = holder;
    if (m108 == 0) {
        SeHandle* h = func_00379AEC(data_00711F50, id);
        if (h) {
            func_00322274(h, this);
        } else {
            u32 flags = func_00588174(data_00711F50, id);
            if (flags & 0x40) {
                SeHandle* x = func_00379B4C(data_00711F50, id, this);
                if (x)
                    func_003223B8(x, 0x10);
            } else if (flags & 0x20) {
                SeHandle* x = func_00379B4C(data_00711F50, id, this);
                if (x)
                    func_003223B8(x, 4);
            }
        }
        mFC = 0;
        m108 = 1;
        m10D = 1;
    }
    return m30 == 0;
}
