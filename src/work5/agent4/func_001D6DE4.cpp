#define OBJ1D6_EXTRA void func_001D6DE4(); void startAnim(const char* n) { if (m344) m344->start(n); }
#include "obj1d6.h"
void Obj1D6::func_001D6DE4() {
    startAnim("WaterCrown");
    m4d4.changeState(7);
}
