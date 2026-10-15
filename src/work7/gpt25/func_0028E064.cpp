#include "range_types.h"
struct Entry28E0 { u32 words[6]; };
extern Entry28E0 data_0070FC30[176];
extern Entry28E0 data_0070FC28;
extern "C" Entry28E0* f_0028E064(u32 index) {
    return index<176 ? &data_0070FC30[index] : &data_0070FC28;
}
