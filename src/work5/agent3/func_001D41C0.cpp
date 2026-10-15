// 0x1D41C0 MATCH: if (m450) func_003248F8(m450);
struct Obj3248;
void func_003248F8(Obj3248* o);
struct A3 {
    char pad0[0x450];
    Obj3248* m450;
    void func_001D41C0();
};
void A3::func_001D41C0() { if (m450) func_003248F8(m450); }
