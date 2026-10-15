#include "range.h"
__declspec(noinline) State3A* func_003A3304(Owner3A* p,u32 kind) {
    char* base=reinterpret_cast<char*>(p);
    switch(kind) {
    case 1: return reinterpret_cast<State3A*>(base+0x8B0);
    case 2: return reinterpret_cast<State3A*>(base+0x30C);
    case 3: return reinterpret_cast<State3A*>(base+0x2CC);
    case 4: return reinterpret_cast<State3A*>(base+0x454);
    case 5: return reinterpret_cast<State3A*>(base+0x414);
    case 6: return reinterpret_cast<State3A*>(base+0x358);
    case 7: return reinterpret_cast<State3A*>(base+0x394);
    case 8: return reinterpret_cast<State3A*>(base+0x3D4);
    case 9: return reinterpret_cast<State3A*>(base+0x554);
    case 10: return reinterpret_cast<State3A*>(base+0x6F8);
    case 11: return reinterpret_cast<State3A*>(base+0x5E8);
    case 12: return reinterpret_cast<State3A*>(base+0x834);
    case 21: case 22: return reinterpret_cast<State3A*>(base+0x870);
    case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20:
    case 23: case 24: case 25: case 26: case 27: case 28:
        return reinterpret_cast<State3A*>(base+0x598);
    default: return 0;
    }
}
void func_003A2F8C(Owner3A* p,u8 value) {
    State3A* state=func_003A3304(p,p->kind);
    if(state) state->value=value;
    p->value=value;
}
