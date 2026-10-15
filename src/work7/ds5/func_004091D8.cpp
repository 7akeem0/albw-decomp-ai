// 0x4091D8 -- derived ctor forwarding 0 to the base.
struct Base {
    Base(int);
    virtual void g();
};
struct Cls : Base {
    Cls();
};
Cls::Cls() : Base(0) {}
