#define CLS_EXTRA void resetM3dc();
#include "../../work4/shared_include/cls_1DE.h"
struct Mgr70FB60 {
    void resetPlayer();
    char pad[0x10];
    Cls* m10;
};
void Mgr70FB60::resetPlayer() { m10->resetM3dc(); }
