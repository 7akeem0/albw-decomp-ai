extern "C" float func_00532B54(void*);
extern "C" int func_00532C78(void*);
extern "C" void func_00389F74(char*);
extern "C" void func_0038A2D4(char*);

extern "C" void func_0038A61C(char* self) {
    if (func_00532B54(self + 0x17c) != 0.0f) {
        if (func_00532C78(self + 0x17c) != 0) return;
    }
    if (*(unsigned char*)(self + 0x194) & 2) return func_00389F74(self);
    return func_0038A2D4(self);
}
