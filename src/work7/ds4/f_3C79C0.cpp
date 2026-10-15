#include "ds4.h"

extern "C" s32 func_003C79C0(u32 key) {
    const u16* tab = (const u16*)0x69e248;
    if (tab[0] == key) return 0;
    for (int i = 1; i <= 0x238; i += 2) {
        if (tab[i] == key) return (s16)i;
        if (tab[i + 1] == key) return (s16)(i + 1);
    }
    return -1;
}
