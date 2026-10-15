// 0x408EA8 -- derived ctor forwarding 1 to the base.
struct Base {
    Base(int);
    virtual void g();
};
struct Cls : Base {
    Cls();
};
Cls::Cls() : Base(1) {}
