typedef int s32;
typedef float f32;
f32 func_001D6794(s32 i, bool b) {
    f32 r = 0.0f;
    if (b) {
        switch (i) {
        case 0: r = 3.0f; break;
        case 1: r = 4.0f; break;
        case 2: r = 5.0f; break;
        case 3: r = 7.0f; break;
        }
    } else {
        switch (i) {
        case 0: r = 0.0f; break;
        case 1: r = 1.0f; break;
        case 2: r = 2.0f; break;
        case 3: r = 6.0f; break;
        }
    }
    return r;
}
