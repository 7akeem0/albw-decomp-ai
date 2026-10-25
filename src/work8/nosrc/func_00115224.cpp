struct Mtx44a { float a[12]; float t[4]; };  // 3x4 matrix plus a 4th row

extern "C" void func_00115224(Mtx44a* dst, const Mtx44a* src) {
    float v0 = src->a[0];
    float v1 = src->a[1];
    float v2 = src->a[2];
    float v3 = src->a[3];
    float v4 = src->a[4];
    float v5 = src->a[5];
    float v6 = src->a[6];
    float v7 = src->a[7];
    float v8 = src->a[8];
    float v9 = src->a[9];
    float v10 = src->a[10];
    float v11 = src->a[11];
    float v12 = src->t[0];
    float v13 = src->t[1];
    float v14 = src->t[2];
    float v15 = src->t[3];
    dst->a[0] = v0;
    dst->a[1] = v1;
    dst->a[2] = v2;
    dst->a[3] = v3;
    dst->a[4] = v4;
    dst->a[5] = v5;
    dst->a[6] = v6;
    dst->a[7] = v7;
    dst->a[8] = v8;
    dst->a[9] = v9;
    dst->a[10] = v10;
    dst->a[11] = v11;
    dst->t[0] = v12;
    dst->t[1] = v13;
    dst->t[2] = v14;
    dst->t[3] = v15;
}
