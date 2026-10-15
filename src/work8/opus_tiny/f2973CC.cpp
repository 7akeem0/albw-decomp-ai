// 0x2973CC: bounded dispatch to virtual slot 0 of the i-th 16-byte polymorphic entry at +0xE8
// (named array base inside the arm keeps add r0,#0xe8 before the writeback ldr, KB #337/#458)
typedef unsigned int u32; typedef unsigned char u8;
struct Entry2973 { virtual void run(); u32 pad[3]; };
struct S2973 { u8 pad[0xe8]; Entry2973 entries[4]; void run(u32 i); };
void S2973::run(u32 i) { if (i < 4) { Entry2973* a = entries; Entry2973* p = &a[i]; p->run(); } }
