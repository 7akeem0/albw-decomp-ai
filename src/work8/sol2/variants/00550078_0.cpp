typedef unsigned int u32;
typedef float f32;

struct Buf { char p[0x28]; };
void func_0032EF74(Buf* b, void* self,u32 mode);
f32 func_005500C0(void* self, Buf* b);

extern "C" bool func_00550078(void* self, u32 b) {
    Buf tmp;
    func_0032EF74(&tmp, self,b);
    f32 v = func_005500C0(self, &tmp);
    return v > 0.0f;
}
