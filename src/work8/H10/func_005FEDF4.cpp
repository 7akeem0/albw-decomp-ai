typedef unsigned int u32;

extern char* data_007157CC;
void func_005FEA68();
void func_00590564(void* p);
void func_005FEBCC(void* p);
int func_00592354(void* p);

extern "C" int func_005FEDF4(char* p) {
    data_007157CC = p;
    func_005FEA68();
    func_00590564(data_007157CC + 4);
    func_005FEBCC(data_007157CC + 8);
    func_00592354(data_007157CC + 0xc);
    return 0;
}
