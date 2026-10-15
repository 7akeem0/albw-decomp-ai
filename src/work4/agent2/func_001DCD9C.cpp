// 0x1DCD9C  Mgr711010::func_001DCD9C()  -- { m14->func_001DCDA4(); }
// Original is 'ldr r0,[r0,#0x14]; b func_001DCDA4' but armlink --tailreorder placed 0x1DCDA4
// right after it and --branchnop turned the branch-to-next into 'mov r0,r0' (E1A00000).
class Cls {
public:
    void func_001DCDA4();
};

struct Mgr711010 {
    void func_001DCD9C();
    char pad[0x14];
    Cls* m14;
};

void Mgr711010::func_001DCD9C() {
    m14->func_001DCDA4();
}
