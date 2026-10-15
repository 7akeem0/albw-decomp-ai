#define EN_EXTRA void f(); void setVelByDir(); void setAngByDir(); void reverseDir();
#include "en206.h"
inline s8 oppDir(s8 d) { if ((u32)d < 4) return (d + 2) & 3; return -1; }
void En::setVelByDir() {
    m3dc.z = 0.0f;
    m3dc.x = 0.0f;
    switch (m904) {
    case 0: m3dc.z = 0.125f; break;
    case 1: m3dc.x = 0.125f; break;
    case 2: m3dc.z = -0.125f; break;
    case 3: m3dc.x = -0.125f; break;
    }
}
void En::setAngByDir() {
    switch (m904) {
    case 0: m3e8 = 0; break;
    case 1: m3e8 = 0x40000000; break;
    case 2: m3e8 = 0x80000000; break;
    case 3: m3e8 = 0xc0000000; break;
    }
}
void En::reverseDir() {
        m904 = oppDir(m904);
        switch (m904) {
        case 0: case 2: m3dc.z = -m3dc.z; break;
        case 1: case 3: m3dc.x = -m3dc.x; break;
        }
        m3e8 += 0x80000000;
}
void En::f() {
    m900++;
    if (m900 >= m8fc) {
        m905 = 0;
        mState.changeState(3);
        return;
    }
    if (!func_00521018(this)) return;
    m905 = 1;
    u8 n = m911 + 1;
    m911 = n;
    if (n >= 2) {
        m911 = 0;
        m904 = (m904 + 1) & 3;
        setVelByDir();
        setAngByDir();
        return;
    }
    reverseDir();
}
