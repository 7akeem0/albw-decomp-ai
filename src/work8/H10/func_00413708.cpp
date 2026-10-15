typedef unsigned int u32;

struct F5 { float v[5]; };
struct Tbl {
    F5 a;
    F5 b;
};

extern const Tbl ro_006BB330;

extern "C" float func_00413708(float f) {
    F5 A = ro_006BB330.a;
    u32 i = (u32)(f * 4.0f);
    F5 B = ro_006BB330.b;
    return B.v[i] + A.v[i] * f;
}
