// 0x3FF5B8 / 0x3FF6E0 / 0x3FF700 (identical twins)
struct Cls {
    bool f(void* o);
};
bool Cls::f(void* o) {
    if (!(((unsigned char*)o)[0x44] & 2)) return true;
    return ((unsigned char*)o)[0x45] != 0;
}
