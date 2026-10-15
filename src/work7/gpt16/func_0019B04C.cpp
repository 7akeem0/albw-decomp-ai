#include "range.h"
extern u32 bss_00727C28[640];
u32 func_0019B04C(u32 i) { u32* p=bss_00727C28;if(i<640)p=&p[i];return *p; }
