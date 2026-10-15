#include "range.h"
extern bool func_004C0C80();
bool func_00373B80(void*, u32, u32, bool bypass) {
    if (!bypass) {
        if (func_004C0C80()) return false;
    }
    return true;
}
