
extern "C" void func_0040789C(void*);
struct Cls {
    char pad[0x5c];
    void* m5c;
    void* m60;
    char pad2[0x81 - 0x64];
    unsigned char m81;
    unsigned char m82;
    void f(unsigned int a1, unsigned int a2);
};
void Cls::f(unsigned int a1, unsigned int a2) {
unsigned char flag=m81;void* second=(void*)a2;void* first=(void*)a1;if(flag!=0)return;
    func_0040789C(this);
    m81 = 1;
    m5c = (void*)second;
    m82 = 0;
    m60 = (void*)first;
}
