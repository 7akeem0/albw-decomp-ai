#define TIMER_CREF
#define M951_S8
#define EN_EXTRA void f(); void setVel(); void stop();

#include "en213.h"
inline void chase2(f32& v, f32 target, s32 frames) { f32 t = target; f32 r = 1.0f / frames; v += (t - v) * r; }
inline void En::stop() { m9c1 = 1; m974 = 0.0f; }
void En::setVel() { f32 s, c; func_00115154(&s, &c, m978); m3dc.x = m974 * s; m3dc.z = m974 * c; }
void En::f() {
    if (m95c.step2b()) {
        chase2(m974, 0.0f, Max(m95c.max - m95c.cur, 1));
        setVel();
        if (!m951) stop();
        if (m952) {
            if (!m968.step()) stop();
        } else {
            m968.start(30);
        }
    } else {
        mState.changeState(1);
    }
}
