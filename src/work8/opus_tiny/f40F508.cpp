// 0x40F508: D1 dtor of a function-local static (registered via the NOPped __aeabi_atexit in 0x40F2E4).
// Member at +0x38: inline dtor body reset() (0x6766E8) then the out-of-line base dtor (0x676724, returns this).
struct N { char pad[0x1c]; int m1c; ~N(); };
struct M : N { void reset(); ~M() { M* s = this; s->reset(); } };
struct X { char pad[0x38]; M m38; ~X(); };
X::~X() { }
