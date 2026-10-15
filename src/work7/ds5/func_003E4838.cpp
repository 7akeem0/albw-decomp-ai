// 0x3E4838
extern "C" void func_003E3BB4(void*);
struct S { int m0, m4, m8, mC, m10, m14, m18, m1C; };
void f(S* out) {
    if (out == 0) return;
    S tmp;
    func_003E3BB4(&tmp);
    out->m0 = tmp.m0;
    out->m4 = tmp.m4;
    out->m10 = tmp.m10;
    out->m14 = tmp.m14;
    out->m8 = tmp.m8;
    out->m18 = tmp.m18;
    out->mC = tmp.mC;
    out->m1C = tmp.m1C;
}
