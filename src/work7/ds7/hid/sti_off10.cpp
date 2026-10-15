#pragma pack(4)
struct Id64 { long long v; Id64() : v(-1) {} };
struct Pair { long long v; Pair() : v(0) {} };
struct Big { char pad[16]; long long v; };
Big data_hi = { {0}, Id64().v };
Pair data_lo;
