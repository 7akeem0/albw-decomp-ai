struct StateMgr788 {
     void changeState(int s);   
};
struct Cls7B20;
bool func_00588BF0(Cls7B20* c, int a);
struct Cls7B20 {
    virtual void vf0();
    char pad4[0x788 - 4];
    StateMgr788 m788;
    void func_001E7B20();
};
void Cls7B20::func_001E7B20() {
    if (func_00588BF0(this, 0))
        m788.changeState(1);
}
