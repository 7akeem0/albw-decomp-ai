// 0x34122C: set float member +0x530 to 0.8f
typedef float f32;
struct S3412 { char pad[0x530]; f32 m530; void reset(); };
void S3412::reset() { m530 = 0.8f; }
