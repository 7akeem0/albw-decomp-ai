#define OBJ9E4_EXTRA void play10(u16 id);
#include "anim9e4.h"
void Obj9E4::play10(u16 id) {
    m31 = 1;
    func_0016898C(m10, Req5C(id, 0, false));
    (*m10)[0].m10 = 1.0f;
}
