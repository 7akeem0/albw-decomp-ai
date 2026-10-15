#include "range.h"
struct Header {u32 magic,pad4,version;};
bool f_56C830(void*,const Header*h){if(h->magic!=0x4d545343u)return false;u32 v=h->version;bool r=false;if(v-0x02000000u<=0x20000)r=true;return r;}
