// 0x1164D4: init a 0xC00-byte work buffer {start, end, used} and clear it; the final tail call
// to __aeabi_memclr (next function, 0x1164F4) was NOPped by armlink. Size taken as end - start.
typedef unsigned int u32;
extern "C" void* memset(void*, int, unsigned);
struct WorkBuf { char* start; char* end; u32 used; void init(char* buf); };
void WorkBuf::init(char* buf) { start = buf; end = buf + 0xc00; used = 0; memset(start, 0, end - start); }
