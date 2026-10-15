float func_003E1A24(float a, float b, float c, float d, float e, float f) {
    float t = e / f;
    float x = a - c;
    float y = 2.0f * t - 3.0f;
    float z = t - 1.0f;
    float p = t * d;
    float q = t * t;
    float r = x * y;
    float m = z * b;
    float n = e * z;
    return a + r * q + n * (m + p);
}

