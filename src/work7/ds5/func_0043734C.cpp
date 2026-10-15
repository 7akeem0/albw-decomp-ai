// 0x43734C / 0x43736C / 0x43738C (identical twins)
struct Cls {
    bool f(void* o);
};
bool Cls::f(void* o) {
    if (!(((unsigned char*)o)[0x44] & 2)) return true;
    return ((unsigned char*)o)[0x45] != 0;
}
