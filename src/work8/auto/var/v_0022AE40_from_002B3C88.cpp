#include "../../../work5/agent8/en200.h"
struct SinCosSample { f32 sin_val, sin_delta, cos_val, cos_delta; };
extern const SinCosSample ro_006C3AB8[];
inline void copyVec(Vec3* d, const Vec3& s) { *d = s; }
struct Parts { u32 low; u32 high; f32 r; const SinCosSample* table;
  Parts(const u32& idx) : low(idx & 0xffffff), high(idx >> 24), r((f32)low * (1.0f / 0x1000000)), table(ro_006C3AB8) {}
  f32 get() const { const SinCosSample& s = table[high]; return s.sin_val + s.sin_delta * r; } };
inline f32 sinIdx(const u32& idx) { Parts p(idx); return p.get(); }
struct En2B3 { char p[0x4e4]; Vec3 m4e4; char p2[0xd00-0x4f0]; s32 m938; void squash(); };
void En2B3::squash() {
    if (m938 <= 0) return;
    m938--;
    f32 s = 1.0f;
    s32 n = m938;
    if (n >= 24 || n <= 0) {} else s = 1.0f + sinIdx((n % 8) * 0x1FFFFFE0) * 0.05f;
    f32 inv = 1.0f / s;
    copyVec(&m4e4, Vec3(s, inv, s));
}
