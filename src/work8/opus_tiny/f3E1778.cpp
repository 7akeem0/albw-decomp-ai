// 0x3E1778: store float m68 and set flag bit 0 of the u16 at m6C
typedef float f32; typedef unsigned short u16;
struct S3E17 { char pad[0x68]; f32 m68; u16 m6c; void set(f32 v); };
void S3E17::set(f32 v) { m68 = v; m6c |= 1; }
