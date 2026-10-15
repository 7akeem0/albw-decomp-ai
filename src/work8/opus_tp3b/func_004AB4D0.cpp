typedef unsigned char u8;
typedef unsigned int u32;
inline void* operator new(unsigned int, void* p) throw() { return p; }
struct NoThrowT {};
void* operator new(unsigned int, NoThrowT) throw();
extern "C" void* func_0010CEE0(u32, void*, u32);
struct IDisposer { IDisposer(void* heap, int opt); virtual ~IDisposer(); u32 m4, m8, mc; };
struct Disposer : IDisposer { Disposer(void* heap) : IDisposer(heap, 3) {} virtual ~Disposer(); };
struct Obj1F4 { Obj1F4(); char pad[0x1f4]; };
struct T4AB { u8 pad[0x10]; Obj1F4* m10; T4AB() { NoThrowT nt; m10 = new (nt) Obj1F4; } };
struct G { T4AB* m0; Disposer* m4; };
extern "C" G data_0070BD68;
T4AB* func_004AB4D0(void* heap) {
    if (data_0070BD68.m0 == 0) {
        u8* buf = (u8*)func_0010CEE0(0x14, heap, 4);
        data_0070BD68.m4 = new (buf) Disposer(heap);
        data_0070BD68.m0 = new (buf) T4AB;
    }
    return data_0070BD68.m0;
}
