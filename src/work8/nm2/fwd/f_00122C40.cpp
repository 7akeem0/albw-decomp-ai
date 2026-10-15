typedef float f32;
struct FloatCallback12{char pad[0xc];f32 value;};
extern "C" void g_122C50(void*,f32);
extern "C" void func_00122C40(const FloatCallback12* p,void* owner){ g_122C50((char*)owner+0x216c,p->value); }
