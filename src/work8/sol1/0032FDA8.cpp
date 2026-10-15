typedef unsigned int u32;
typedef unsigned char u8;

extern char data_0070B670;
extern "C" void func_0032FC14(char*, u32);

static inline void store32(char*p,u32 word_input,u32 byte_input){u32 word=word_input;*(u32*)(p+0x304)=word;*(u8*)(p+0x301)=byte_input;}
extern "C" int func_0032FDA8(char* self, u32 a1, u32 a2) {
    if (((int (*)(void*, void*, u32))(*(void**)(*(char**)self + 0x4c)))(self, &data_0070B670, 0) == 0)
        return 0;
    u8 old=*(u8*)(self+0x2f4);store32(self,a1,a2);
    if (old == 0) func_0032FC14(self, 1);
    return 1;
}
