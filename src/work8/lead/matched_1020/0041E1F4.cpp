struct M4_0010DEB0 {
    int a, b, c;
    M4_0010DEB0() : a(0), b(0), c(-1) {}
    void f();
};
struct M10_0041DCF4 {
    M10_0041DCF4();
    char d[4];
};
struct Outer_006F0960 {
    virtual void v0();
    M4_0010DEB0 m4;
    M10_0041DCF4 m10;
    Outer_006F0960();
};
Outer_006F0960::Outer_006F0960()
{
    m4.f();
}
