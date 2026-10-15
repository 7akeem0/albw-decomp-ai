

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern u32 data_00715210;
extern "C" u32 func_0010983C(u32, u32);
extern "C" void func_002319B8(u32);

struct Scalar4_003BBBD4_4{u32 v;Scalar4_003BBBD4_4(){}Scalar4_003BBBD4_4(u32 x):v(x){}operator u32()const{return v;}~Scalar4_003BBBD4_4(){}Scalar4_003BBBD4_4&operator=(u32 x){v=x;return *this;}Scalar4_003BBBD4_4&operator=(const Scalar4_003BBBD4_4&x){v=x.v;return *this;}Scalar4_003BBBD4_4&operator++(){++v;return *this;}u32 operator++(int){return v++;}Scalar4_003BBBD4_4&operator--(){--v;return *this;}u32 operator--(int){return v--;}Scalar4_003BBBD4_4&operator+=(u32 x){v+=x;return *this;}Scalar4_003BBBD4_4&operator-=(u32 x){v-=x;return *this;}Scalar4_003BBBD4_4&operator*=(u32 x){v*=x;return *this;}Scalar4_003BBBD4_4&operator/=(u32 x){v/=x;return *this;}Scalar4_003BBBD4_4&operator|=(u32 x){v|=x;return *this;}Scalar4_003BBBD4_4&operator&=(u32 x){v&=x;return *this;}};
struct NativeHandle4{u32 value;NativeHandle4(u32 id){value=id?func_0010983C(data_00715210,id):1;}operator u32()const{return value;}};
extern "C" void func_003BBBD4(char* self, u32* a1) {
    if (*a1 == 2) {
        char* p = *(char**)(self + 0x1ec);
        s32 x = *(s8*)(self + 0x1f0);
        u8 y = *(u8*)(self + 0x1f1);
        s32 z = *(s8*)(self + 0x1f2);
        u32 r = ((u32 (*)(void*, s32, u8, s32))(*(void**)(*(char**)p)))(p, x, y, z);
        NativeHandle4 v(r);
        ((void (*)(void*, u32))(*(void**)(*(char**)self + 0x74)))(self, r);
        func_002319B8(*(u32*)(self + 0x1ec));
        if (v != 1) func_0010983C(data_00715210, v);
    }
    ((void (*)(void*, u32*))(*(void**)(*(char**)self + 0x80)))(self, a1);
}
