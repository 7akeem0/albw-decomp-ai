typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

extern "C" void func_002BF950(void*, s32);
extern "C" void func_002317C0(void*, f32);
extern "C" void* func_00520B48(void*);
extern "C" void func_00231340(void*);
extern "C" void func_0066CC58(void*, s32);
extern "C" void func_00455FE8(void*);
extern "C" void* data_00709DF8;
extern "C" void* data_00712450;
struct Count { u32 v; operator u32() const { return v; } };
inline u8* entryAt(const Count& count, u8** const& entries, s32 i) {
    if (count.v > (u32)i)
        return entries[i];
    return 0;
}


extern "C" void func_0044B62C(void* self) {
    u8* owner = (u8*)self;
    s32 zero = 0;
    s8 stateId = *(s8*)(owner + 0x15c);
    if (stateId == 2 || stateId == 1) {
        u8* child = *(u8**)(owner + 0x20c);
        if (!child || !child[0x5d] || !owner[0x291])
            return;
        u8* state = (u8*)data_00709DF8;
        int kind = (signed char)state[0x48];
        u32 substate = *(u32*)(state + 0x4c);
        if ((u32)(kind - 2) <= 3 || (u32)(kind - 0x16) <= 1 ||
            (u32)(kind - 0x18) <= 2 || (kind == 0 && substate == 0xf))
            return;
        func_002BF950(child, 1);
        func_002317C0(child + 0x90, 1.0f);
        if (func_00520B48(data_00712450)) {
        func_00231340(*(u8**)(owner + 0x20c) + 0x90);
            func_0066CC58(owner + 0x158, 0);
            for (s32 i = 0; i < 0x14; ++i) {
                Count count;
                count.v = *(u32*)(owner + 0x1ac);
                u8* item = entryAt(count, *(u8***)(owner + 0x1b4), i);
                if (item[0x6c]) {
                    u8* array = owner + 0x1ac;
                    item = entryAt(count, *(u8***)(array + 8), i);
                    func_00455FE8(item);
                }
            }
        } else {
            func_0066CC58(owner + 0x158, 3);
        }
        goto clear_flag;
    }
    goto clear_flag;
clear_flag:
    owner[0x291] = (u8)zero;
}
