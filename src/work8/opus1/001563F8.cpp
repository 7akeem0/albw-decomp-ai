typedef unsigned int u32;
typedef int s32;
typedef short s16;
typedef float f32;
typedef unsigned char u8;
typedef unsigned long long u64;

namespace sead {
class SafeString {
public:
    SafeString(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
}

struct Actor;
s32 func_00588BE4(Actor* a);                              
void func_00150A84(Actor* a, const sead::SafeString& name, s32 v);  
extern const s32 data_00693878;

struct Vec3 { f32 x, y, z; void set(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
struct Sub500 { char p0[8]; s16 m8; };
struct Actor {
    char p0[0x3dc];
    Vec3 m3dc;
    char p1[0x500 - 0x3e8];
    Sub500 m500;
};

extern "C" void func_001563F8(Actor* self) {
    for (int i = 0; i < 3; i++) (&self->m3dc.x)[i] = 0.0f;
    if (self->m500.m8 <= 0) {
        if (func_00588BE4(self) == data_00693878) {
            func_00150A84(self, sead::SafeString("SE_Kyune_V_DIE"), 0);
        } else {
            func_00150A84(self, sead::SafeString("SE_Crowly_V_DIE"), 0);
        }
    } else {
        if (func_00588BE4(self) == data_00693878) {
            func_00150A84(self, sead::SafeString("SE_Kyune_V_DAMAGE"), 0);
        } else {
            func_00150A84(self, sead::SafeString("SE_Crowly_V_DAMAGE"), 0);
        }
    }
}
