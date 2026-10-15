

typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern "C" void func_00115154(f32*, f32*, u32);
struct Mat33 {
    f32 m[9];
    void setRotY(u32 angle);
};
void Mat33::setRotY(u32 angle) {
    float s;
    f32 c;
    func_00115154(&s, &c, angle);
    m[4] = 1.0f;
    m[1] = 0.0f; 
    m[7] = 0.0f;
    m[0] = c;
    m[3] = 0.0f; 
    m[2] = s;
    m[8] = c; m[5] = 0.0f;
    m[6] = -s;
}
