#include "range.h"
extern u32 data_0071498C;
struct DiagnosticGetterGlobal { u32 reserved; u32 value; };
extern DiagnosticGetterGlobal data_00714988;
extern "C" u32 func_0010D11C() {
    if (!data_0071498C) diagnoseResult(0xe0a046dbu,__current_pc());
    return data_00714988.value;
}
