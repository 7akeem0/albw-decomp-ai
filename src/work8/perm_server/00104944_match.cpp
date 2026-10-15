typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef unsigned short u16;

__svc(0x32) u32 kern32(u32 v);

__svc(0x23) u32 kern23(u32 v);

extern "C" u8 bss_007A042C[];
extern "C" u8 data_00715918[];
extern "C" u8 ro_006B479C[];
extern "C" void func_0010C0C0(void*);
extern "C" void func_0010C160(void*);
extern "C" void func_00108990(u32);

void func_00104944() {
    func_0010C0C0(bss_007A042C);
    if (0 == data_00715918[0]) {
        func_0010C160(bss_007A042C);
        return;
    }
    func_00108990(*(u32*)(0x1c + data_00715918));
    kern23(*(u32*)(data_00715918 + 0x10));
    *(u32*)(data_00715918 + 0x14) = *(u32*)(ro_006B479C + 4); __schedule_barrier();
    data_00715918[0] = 0;
    func_0010C160(bss_007A042C);
}
