// 0x4AF390: ctor of a 0x10-byte object {u32 m0; Str m4{const char* p=""; u32 n; u32 c;}}.
// ro_006F4F10 is a shared empty string in another TU (extern), assigned in the member ctor BODY (stored last).
typedef unsigned int u32;
extern const char ro_006F4F10[];
struct Str { const char* p; u32 n; u32 c; Str() : n(0), c(0) { p = ro_006F4F10; } };
struct Obj4AF { u32 m0; Str m4; Obj4AF(); };
Obj4AF::Obj4AF() : m0(0) {}
