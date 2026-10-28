typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
#pragma pack(4)
struct Id64 { long long v; Id64() : v(-1) {} };
struct Pair { long long v; Pair() : v(0) {} };
struct One { long long v; };
One A = { Id64().v };
Pair B;
void func_0010BF5C(void*);
extern char C;
struct S { S() { func_0010BF5C(&C); } };
S s;
