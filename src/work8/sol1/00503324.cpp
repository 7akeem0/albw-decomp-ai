typedef unsigned int u32;extern char data_00725974[],ro_006EE3BC[];struct Base6{void*vt;char pad[0x180];Base6(void*,u32,int,u32) __asm("func_00230DD0");};struct Child6{char pad[0x15c];Child6() __asm("func_0030E0A0");};
struct Mid6:Base6{Mid6():Base6(data_00725974,0,-1,1){vt=ro_006EE3BC;}};struct Complete6:Mid6{Child6 child;u32 word;Complete6();};
Complete6::Complete6():Mid6(),child(){word=0;}