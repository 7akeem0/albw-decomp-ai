typedef unsigned int u32;
typedef int s32;

struct Vec2 { float x; float y; };
struct Tmp { char p[0x34]; };
struct Inner { char p0[0x2cc]; u32 m2cc; };
struct Owner {
    char p0[0x28];
    Inner* m28;
};

void func_00377220(Tmp* t, u32 a, float f, u32 b, u32 c);
void func_005465D0(Owner* self, Tmp* t, s32 n, Vec2 v);

extern "C" void func_005468EC(Owner* self, s32 n, Vec2 v) {
    Tmp t;
    func_00377220(&t, self->m28->m2cc, 0.2f, 1, 1);
    func_005465D0(self, &t, n, v);
}
