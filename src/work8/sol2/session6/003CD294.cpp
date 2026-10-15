typedef unsigned int u32;
typedef unsigned char u8;

extern "C" void func_00110490(void*, u32);

static void*init6(char*self,u32 zero,u8 three){
    *(u32*)(self + 0) =zero;
    *(u32*)(self + 4) = 0xffffffffu;
    *(u8*)(self + 8) =zero;
    *(u32*)(self + 0x90) =zero;
    *(u32*)(self + 0x294) =zero;
    *(u8*)(self + 0x298) =three;
    *(u32*)(self + 0x29c) =zero;
    *(u32*)(self + 0x2a0) =zero;
    *(u32*)(self + 0x364) =zero;
    func_00110490(self + 0x12868, 0x80);
    return self;
}
extern "C" void*func_003CD294(char*self){return init6(self,0,3);}
