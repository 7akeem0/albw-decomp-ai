#include "range.h"
struct IDisposer{virtual ~IDisposer();char pad[12];};struct Member{~Member();char pad[0x64];};struct O:IDisposer{char pad[0x264-0x10];Member first,second;virtual ~O();};O::~O(){}

