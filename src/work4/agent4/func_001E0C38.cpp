class X {
public:
    void func_001E0F00(int n);
    void func_001E0C5C(int n);
    void both(const int& n) { int m = n; func_001E0F00(m); func_001E0C5C(m); }
    void func_001E0C38();
};
void X::func_001E0C38() {
    both(2);
}
