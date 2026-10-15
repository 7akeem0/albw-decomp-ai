// shared array-at helper experiments
extern "C" void func_004A58B0(void*, int);
extern "C" void func_00232384(void*);
struct Arr {
    unsigned int num;
    unsigned int cap;
    void** data;
};
inline void* arr_at(void** data, unsigned int n, unsigned int i) { return i < n ? data[i] : 0; }
struct ClsA {
    char pad[0x108];
    Arr mArr;
    void a();
};
void ClsA::a() {
    for (int i = 0; i < 3; i++) {
        void* p = arr_at(mArr.data, mArr.num, (unsigned int)i);
        func_004A58B0(p, 1);
    }
}
struct T { virtual void v0(); virtual void v1(); virtual void v2(); };
struct ClsB {
    char pad[0x148];
    unsigned int m148;
    unsigned int m14c;
    void** m150;
    void b();
};
void ClsB::b() {
    func_00232384(this);
    for (int i = 0; i < 0x21; i++) {
        T* p = (T*)arr_at(m150, m148, (unsigned int)i);
        p->v2();
    }
}
