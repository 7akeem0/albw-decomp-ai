typedef unsigned int u32;
struct VObj {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04();
    virtual void v05(); virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09();
    virtual void v10();
};
struct Big1C78 {
    char pad[0x1c78];
    VObj* m1c78;
    VObj* func_001E1E84();
};
VObj* Big1C78::func_001E1E84() {
    m1c78->v10();
    return m1c78;
}
