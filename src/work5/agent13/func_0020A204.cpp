#define EN_EXTRA void f();
#include "en20a.h"
void En::f() {
    m574 = -2.5f;
    m3d0.y = 0.0f;
    mb84.x = m3d0.x + bss_0073A6FC.x;
    mb84.y = md30.y + bss_0073A6FC.y;
    mb84.z = m3d0.z + bss_0073A6FC.z;
    md24.x = mb84.x; md24.y = mb84.y; md24.z = mb84.z;
    ma7c.func_0036BE48();
    if (func_0058A8F0(this)) mState.changeState(3);
}
