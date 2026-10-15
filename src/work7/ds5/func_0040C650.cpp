// 0x40C650
float f(float a, float b, float c, float d, float e) {
    if (b == c) return (d + e) * 0.5f;
    float x = (d - e) * a;
    float y = b * e - c * d;
    return x / (b - c) + y / (b - c);
}
