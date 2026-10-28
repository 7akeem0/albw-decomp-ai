struct PtrCnt { int num, max; };
struct PtrListBase : PtrCnt {
    void** ptr;
    PtrListBase(int n, void* b) { num = 0; max = n; ptr = 0; if (b) ptr = (void**)b; }
};
template<int N> struct PtrList : PtrListBase { void* buffer[N]; PtrList() : PtrListBase(N, buffer) {} };
struct Obj {
    unsigned m0;
    PtrList<0x40> mList;
    Obj();
};
Obj::Obj() : m0(0) {}
