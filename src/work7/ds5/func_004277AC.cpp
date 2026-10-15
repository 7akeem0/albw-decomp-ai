// 0x4277AC
void func_004B964C(void*);
void func_004B9998(void*);
void func_004277DC(void*);
void func_0042779C(void*);

struct P {
    char pad0[0x74];
    void* m74;
    char pad1[0xac - 0x78];
    void* mac;
};

void func_004277AC(P* self) {
    func_004B964C(self);
    func_004B9998(self);
    func_0042779C(self->mac ? (void*)((char*)self->mac + 0x114) : 0);
    func_004277DC(self->m74);
}
