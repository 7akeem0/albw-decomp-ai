struct Mtx44 { float e[16]; };

extern "C" void func_001150B8(Mtx44* dst, const Mtx44* src) {
    if (dst == src)
        return;
    float v0 = src->e[0];
    float v1 = src->e[1];
    float v2 = src->e[2];
    float v3 = src->e[3];
    float v4 = src->e[4];
    float v5 = src->e[5];
    float v6 = src->e[6];
    float v7 = src->e[7];
    float v8 = src->e[8];
    float v9 = src->e[9];
    float v10 = src->e[10];
    float v11 = src->e[11];
    float v12 = src->e[12];
    float v13 = src->e[13];
    float v14 = src->e[14];
    float v15 = src->e[15];
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
