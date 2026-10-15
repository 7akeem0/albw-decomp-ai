typedef unsigned int u32;
struct Ev; extern Ev* data_00709DF8;
struct G588; extern G588* data_00712588;
struct G538; extern G538* data_00712538;
struct GF70; extern GF70* data_00712F70;
struct G518; extern G518* data_0070A518;
struct G500; extern G500* data_0070A500;
void func_002DF3E4(G588* g);
void func_001E1750(G538* g);
void func_0014B188(GF70* g);
void func_002E32DC(G518* g);
void func_004C8C3C(G500* g);
void func_004EEFA0(int v);
struct Task;
void func_004EE6C8(Ev* e, u32 a, Task* t);
struct Task {
    virtual void f();
    char pad[0x5c - 4];
    u32 m5c;
};
void Task::f() {
    func_002DF3E4(data_00712588);
    func_001E1750(data_00712538);
    func_0014B188(data_00712F70);
    func_002E32DC(data_0070A518);
    func_004C8C3C(data_0070A500);
    func_004EEFA0(0);
    func_004EE6C8(data_00709DF8, m5c, this);
}
