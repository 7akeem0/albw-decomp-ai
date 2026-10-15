#define OBJ9E4_EXTRA void play14(u16 id, s32 frame);
#include "anim9e4.h"
void Obj9E4::play14(u16 id, s32 frame) {
    m32 = 1;
    func_0016898C(m14, Req5C(id, 0, false));
    if (frame >= 0) {
        f32 f = frame;
        (*m14)[0].setFrame(f);
        (*m14)[0].m10 = 0.0f;
    } else {
        (*m14)[0].m10 = 1.0f;
    }
}
