// 0x1DD1D8 Cls camera follow. MATCH (work7/opus).
// Clamp: ordinary non-inline same-TU addClamp helper defined AFTER the caller (KB #354 shape).
// Length: ordinary non-inline same-TU squared-length helper defined AFTER the caller; this
// late-inlined body restores the dir-copy registers x=s1,y=s3,z=s0 that the late clamp helper disturbed.
#include "c1_t.inc"
float addClamp(float a, float b, float v);
float squaredLength(const Vec3& d);
void Cls::func_001DD1D8() {
    float rate = 0.5f;
    if (m6bf) {
        Vec3 pos = m70c;
        Vec3 t;
        func_0053ECB4(m600)->getTranslationN(&t);
        float y = addClamp(t.y, 0.25f, m70c.y);
        m70c.y = y;
        Vec3 dir = pos - t;
        float sq = squaredLength(dir);
        float len = Sqrt(sq);
        Vec3 v;
        func_004D80A4(&v, m3e8, len);
        v.y = 0.0f;
        Vec3 r;
        func_004D891C(&r, &v, &dir, 1.0f, 0, 0.87266463f);
        pos = r + t;
        func_0028C920(m600, true, &pos, m718, rate);
    } else {
        func_0028C920(m600, false, &m3d0, 0.15f, rate);
    }
}
float squaredLength(const Vec3& d) { return d.x * d.x + d.y * d.y + d.z * d.z; }
float addClamp(float a, float b, float v) { float s = a + b; return v > s ? v : s; }
