struct Mtx44 { float e[16]; };
struct Mtx34 { float e[12]; };
struct Vec4 { float e[4]; };

extern "C" void func_00115234(Mtx44* dst, const Mtx34* a, const Vec4* b) {
    float v0 = a->e[0];
    float v1 = a->e[1];
    float v2 = a->e[2];
    float v3 = a->e[3];
    float v4 = a->e[4];
    float v5 = a->e[5];
    float v6 = a->e[6];
    float v7 = a->e[7];
    float v8 = a->e[8];
    float v9 = a->e[9];
    float v10 = a->e[10];
    float v11 = a->e[11];
    float v12 = b->e[0];
    float v13 = b->e[1];
    float v14 = b->e[2];
    float v15 = b->e[3];
    dst->e[0] = v0;
    dst->e[1] = v1;
    dst->e[2] = v2;
    dst->e[3] = v3;
    dst->e[4] = v4;
    dst->e[5] = v5;
    dst->e[6] = v6;
    dst->e[7] = v7;
    dst->e[8] = v8;
    dst->e[9] = v9;
    dst->e[10] = v10;
    dst->e[11] = v11;
    dst->e[12] = v12;
    dst->e[13] = v13;
    dst->e[14] = v14;
    dst->e[15] = v15;
}
