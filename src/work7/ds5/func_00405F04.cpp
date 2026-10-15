// 0x405F04 -- derived ctor forwarding the 1st and 3rd args to the base.
struct Base {
    Base(int, int);
    virtual void g();
};
struct Cls : Base {
    Cls(int, int, int);
};
Cls::Cls(int a, int b, int c) : Base(a, c) {}
