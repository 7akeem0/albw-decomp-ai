#include "ds6.h"

struct Obj537B48 { char _pad[0x28]; s32 m28; };

s32 func_00537B48(Obj537B48* self) {
    switch (self->m28) {
    case 2: return 0;
    case 3: return 1;
    case 4: return 2;
    case 5: return 3;
    }
    return 4;
}
