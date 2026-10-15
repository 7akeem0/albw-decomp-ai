typedef unsigned int u32;
struct Ev; extern Ev* data_00709DF8;
struct G960 { char pad[0x1870]; u32 m1870; }; extern G960* data_0070B960;
struct G518; extern G518* data_0070A518;
struct G500; extern G500* data_0070A500;
void func_004EFCA0(Ev* e);
void func_002E4324(G518* g);
void func_004C90A4(G500* g);
struct Task { virtual void f(); };
void Task::f() {
    func_004EFCA0(data_00709DF8);
    data_0070B960->m1870 = 0;
    func_002E4324(data_0070A518);
    func_004C90A4(data_0070A500);
}
