// 0x5C2570: TU static initializer (__sti) for two adjacent globals at 0x714C5C: an object with a ctor
// zeroing its word, and a second object holding a pointer to the first. ARMCC keeps the section base in
// r0, steps it to &gB (+4) and re-derives &gA as r0-4 (add/sub pair).
typedef unsigned int u32;
struct Counter5C2 { u32 v; Counter5C2() : v(0) {} };
struct Ref5C2 { Counter5C2* p; Ref5C2(Counter5C2* x) : p(x) {} };
Counter5C2 gCounter5C2;
Ref5C2 gRef5C2(&gCounter5C2);
