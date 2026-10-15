typedef unsigned int u32;
struct VObj {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04();
    virtual void v05(); virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09();
    virtual void v10();
};
struct Big1950 {
    char pad[0x1950];
    VObj* m1950;
    VObj* func_001E1EA8();
};
VObj* Big1950::func_001E1EA8() {
    m1950->v10();
    return m1950;
}
