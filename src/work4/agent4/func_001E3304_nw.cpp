struct X;
bool func_00532C78(X* x);
struct Sub { char pad[4]; };
 void func_0065CD54(Sub* s, int v);
struct X { char pad[0xc]; Sub m0c; void f(); };
void X::f() {
    if (!func_00532C78(this))
        func_0065CD54(&m0c, 0);
}
