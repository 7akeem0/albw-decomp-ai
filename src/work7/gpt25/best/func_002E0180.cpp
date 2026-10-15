#include "../range_types.h"
struct TextEntry2E01 {u32 id;const char*text;};
extern TextEntry2E01 bss_00729028[640];
struct String2E01 {virtual ~String2E01(){};const char*text;String2E01(u32);};
String2E01::String2E01(u32 id):text(id<640?bss_00729028[id].text:0){}
