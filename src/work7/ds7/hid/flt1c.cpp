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
struct Big { char pad[0x30]; long long v; };
Big A = { {0}, Id64().v };
Pair B;
struct C_t { f32 x, y; C_t() : x(3.40282347e38f), y(3.40282347e38f) {} };
C_t C;
