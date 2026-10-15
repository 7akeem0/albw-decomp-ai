#pragma pack(4)
struct Id64 { long long v; Id64() : v(-1) {} };
struct Pair { long long v; Pair() : v(0) {} };
long long data_hi = Id64().v;
Pair data_lo;
