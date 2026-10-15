#include "range.h"
extern void* data_00709F30;
extern void* data_00709EC0;
extern void* data_0070A1A8;
void* f_004F042C() {
    if(data_00709F30) return data_00709F30;
    if(data_00709EC0) return data_00709EC0;
    return data_0070A1A8;
}
