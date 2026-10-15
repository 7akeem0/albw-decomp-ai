#include "cls_t.h"

struct Mtx34 {
    float m[3][4];
    void getTranslation(Vec3* o) const { o->x = m[0][3]; o->y = m[1][3]; o->z = m[2][3]; }
    void getTranslationR(Vec3& o) const { o.x = m[0][3]; o.y = m[1][3]; o.z = m[2][3]; }
    float tx() const { return m[0][3]; }
    float ty() const { return m[1][3]; }
    float tz() const { return m[2][3]; }
    void getTranslationN(Vec3* o) const { o->x = tx(); o->y = ty(); o->z = tz(); }
    void getTranslationNR(Vec3& o) const { o.x = tx(); o.y = ty(); o.z = tz(); }
    float at(int i, int j) const { return m[i][j]; }
    float ax() const { return at(0, 3); }
    float ay() const { return at(1, 3); }
    float az() const { return at(2, 3); }
    void getTranslationA(Vec3* o) const { o->x = ax(); o->y = ay(); o->z = az(); }
    void getBase(Vec3& o, int axis) const { o.x = m[0][axis]; o.y = m[1][axis]; o.z = m[2][axis]; }
    void getBaseP(Vec3* o, int axis) const { o->x = m[0][axis]; o->y = m[1][axis]; o->z = m[2][axis]; }
    void getTranslationL(Vec3* o) const { for (int i = 0; i < 3; i++) (*o)[i] = m[i][3]; }
    void getTranslationLR(Vec3& o) const { for (int i = 0; i < 3; i++) o[i] = m[i][3]; }
    void getTranslationS(Vec3* o) const { o->set(m[0][3], m[1][3], m[2][3]); }
    void getColumn(int j, Vec3& o) const { o.x = m[0][j]; o.y = m[1][j]; o.z = m[2][j]; }
};
Mtx34* func_0053ECB4(Model600* m);
void func_00115C70(Vec3* out, const Vec3& a, const Vec3& b);   // setSub
void func_00115C54(Vec3* out, const Vec3& a, const Vec3& b);   // setAdd
inline Vec3 operator-(const Vec3& a, const Vec3& b) { Vec3 r; func_00115C70(&r, a, b); return r; }
inline Vec3 operator+(const Vec3& a, const Vec3& b) { Vec3 r; func_00115C54(&r, a, b); return r; }
void func_004D80A4(Vec3* out, Word angle, float len);
void func_0028C920(Model600* m, bool b, const Vec3* pos, float x, float y);
inline float dot(const Vec3& a, const Vec3& b) { return a.x * b.x + a.y * b.y + a.z * b.z; }
inline float Sqrt(float x) { return __sqrtf(x); }
inline float Max(float a, float b) { return a > b ? a : b; }
inline float MaxR(float a, float b) { return a < b ? b : a; }
inline float MaxL(float a, float b) { return b < a ? a : b; }
inline float MaxGE(float a, float b) { return a >= b ? a : b; }
inline float ClampLo(float v, float lo) { if (v < lo) return lo; return v; }
inline float ClampLo2(float v, float lo) { if (v < lo) v = lo; return v; }
inline void SetMax(float& v, float lo) { if (v < lo) v = lo; }
inline void SetMax2(float& v, float lo) { v = Max(v, lo); }
void func_004D891C(Vec3* out, const Vec3* a, const Vec3* b, float s, int c, float t);
inline float H1(float v, float lo) { if (!(v > lo)) v = lo; return v; }
inline float H2(float v, float lo) { v = v > lo ? v : lo; return v; }
inline float H3(float v, float lo) { if (v > lo) return v; return lo; }
inline float H4(float v, float lo) { if (lo >= v) v = lo; return v; }
inline float H5(float v, float lo) { if (v <= lo) v = lo; return v; }
inline float H6(float v, float lo) { float r = v; if (!(r > lo)) r = lo; return r; }
inline float H7(float v, float lo) { if (v > lo) {} else v = lo; return v; }
inline float H8(float v, float lo) { if (lo > v) v = lo; return v; }
inline float H9(float v, float lo) { return v < lo ? lo : v; }
inline float H10(float v, float lo) { return lo > v ? lo : v; }
inline float H11(float v, float lo) { return v <= lo ? lo : v; }
inline float H12(float v, float lo) { return lo < v ? v : lo; }
inline float H13(float v, float lo) { float r = lo; if (v > lo) r = v; return r; }
inline float H14(float v, float lo) { float r = v; if (v < lo) r = lo; return r; }
inline float H15(float lo, float v) { if (!(v > lo)) v = lo; return v; }
inline float H16(float lo, float v) { if (v < lo) v = lo; return v; }
inline float H17(float lo, float v) { return v > lo ? v : lo; }
inline float H18(float v, float lo) { if (!(lo < v)) v = lo; return v; }
inline float AddF(float a, float b) { a += b; return a; }
inline float AddF2(float a, float b) { return a + b; }
inline float dotP(const Vec3* a, const Vec3* b) { return a->x * b->x + a->y * b->y + a->z * b->z; }
inline float lenSq(const Vec3& a) { return dot(a, a); }
inline float lenSq2(const Vec3& a) { return a.x * a.x + a.y * a.y + a.z * a.z; }
inline float length(const Vec3& a) { return Sqrt(dot(a, a)); }
inline float length2(const Vec3& a) { float sq = dot(a, a); return Sqrt(sq); }
inline void zeroY(Vec3& v) { float z = 0.0f; v.y = z; }
inline float Zero() { return 0.0f; }
inline const float& MaxCR(const float& a, const float& b) { return a > b ? a : b; }
inline const float& MaxStd(const float& a, const float& b) { return (a < b) ? b : a; }
inline float MaxRV(const float& a, const float& b) { return a > b ? a : b; }
inline float MaxStdV(const float& a, const float& b) { return (a < b) ? b : a; }
inline void SetMaxR(float& v, const float& lo) { if (v < lo) v = lo; }
inline void SetMaxR2(float& v, const float& lo) { if (!(v > lo)) v = lo; }
inline float ClampLoR(const float& v, const float& lo) { if (v < lo) return lo; return v; }
inline const float& ClampLoCR(const float& v, const float& lo) { if (v < lo) return lo; return v; }
inline float ClampLo2R(float v, const float& lo) { if (v < lo) v = lo; return v; }
inline float MaxVR(float a, const float& b) { return a > b ? a : b; }
inline float MaxRV2(const float& a, float b) { return a > b ? a : b; }
template <typename T> inline const T& tmax(const T& a, const T& b) { return a > b ? a : b; }
template <typename T> inline T tmaxv(T a, T b) { return a > b ? a : b; }
inline void SetMaxN(float& v, float lo) { if (!(v > lo)) v = lo; }
inline void SetMaxG(float& v, float lo) { if (lo > v) v = lo; }
inline void SetMaxRR(float& v, const float& lo) { if (v < lo) v = lo; }
inline void SetMaxT(float& v, float lo) { v = v > lo ? v : lo; }
inline void SetMaxLE(float& v, float lo) { if (v <= lo) v = lo; }
