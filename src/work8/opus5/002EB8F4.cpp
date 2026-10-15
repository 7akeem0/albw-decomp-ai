typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

struct Obj {
    u8 pad[0x10000];
};

extern "C" void func_0068C794(float*, float, float, float, float);
extern "C" void func_002EC1B8(void*, s32);
extern "C" u32 func_0058AB74(void*);
extern "C" u32 func_0058ACC8(void*, float);
extern "C" void func_0036C09C(void*, s32);
extern "C" u32 func_0058A8F0(void*);
extern "C" float func_0058AA40(void*);
extern "C" void func_006640EC(void*, s32);
extern "C" void* func_002F5CD4(void*, s32);
extern "C" void func_00360AD0(void*);

extern "C" void func_002EB8F4(Obj* self) {
    func_0068C794((float*)((u8*)self + 0xd4c), 4.0f, 0.1f, 0.0f, 0.1f);
    func_002EC1B8(self, 1);
    bool f110 = false;
    bool f80 = false;
    if (func_0058AB74(self) == 0x1e) {
        if (func_0058ACC8(self, 30.0f)) {
            func_0036C09C((u8*)self + 0x964, 2);
        }
        if (func_0058ACC8(self, 80.0f)) {
            f80 = true;
        } else if (func_0058ACC8(self, 110.0f)) {
            f110 = true;
        }
        bool doChange;
        if (func_0058A8F0(self) == 0) {
            float v = func_0058AA40(self);
            doChange = v > 125.0f;
        } else {
            doChange = true;
        }
        if (doChange) func_006640EC((u8*)self + 0x8c8, 0x12);
        if (f110) {
            void* p = func_002F5CD4(self, 0);
            if (p) func_00360AD0(p);
        }
        if (f80) {
            void* p = func_002F5CD4(self, 1);
            if (p) func_00360AD0(p);
        }
    }
}

