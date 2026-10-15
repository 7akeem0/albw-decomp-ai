typedef unsigned int u32;
typedef int s32;
typedef float f32;

struct S {
    char pad30[0x30];
    f32 m30;
    f32 m34;
    f32 m38;
    u32 m3c;
    u32 m40;
    char* m44;
};

extern "C" char data_00725968;
extern "C" S* func_0041E750(S*);

void target(S* p) {
    S* q = func_0041E750(p);
    q->m44 = &data_00725968;
    q->m30 = 3.402823466e38f;
    q->m3c = 4;
    q->m40 = 0;
    q->m34 = 0.0f;
    q->m38 = 0.0f;
}
