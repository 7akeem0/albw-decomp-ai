typedef unsigned short u16;

struct Info {
    char pad[0x16];
    u16 mFlags;
};

struct Sub {
     void func_0066DDF4(int x);
};

class Obj {
public:
    virtual void vf0();
    void update();

    char pad4[0x14 - 4];
    Info* mInfo;
    char pad18[0x50 - 0x18];
    Sub mSub;
};

void Obj::update() {
    if (mInfo->mFlags & 8)
        mSub.func_0066DDF4(1);
}
