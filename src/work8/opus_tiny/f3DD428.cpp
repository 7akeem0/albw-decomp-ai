// 0x3DD428: set byte m8 unless the byte flag m30 is set
typedef unsigned char u8;
struct S3DD { u8 pad[8]; u8 m8; u8 pad2[0x27]; u8 m30; void set(u8 v); };
void S3DD::set(u8 v) { if (m30 == 0) m8 = v; }
