#pragma pack(4)
struct Id64 { long long v; Id64(): v(-1) {} };
struct A_t { char pad[8]; long long v; };
A_t A = { {0}, Id64().v };
struct Pair { long long v; Pair(): v(0) {} };
Pair B;
struct C_t {
  unsigned a, b, c, d; unsigned char e; char pad[3]; unsigned f; unsigned char g;
  C_t(); ~C_t();
};
C_t::C_t(): a(0), b(0), c(0), d(0), e(0), f(0), g(0) {}
C_t C;
