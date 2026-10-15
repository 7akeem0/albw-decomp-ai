typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

struct Model { u8 pad[0xac]; s32 mAC; };
struct ModelHolder {
    Model* m0;
    bool isValid() const;
};
struct Snd;
struct Obj70B { u8 pad[0x44]; s32 m44; };
extern Snd* data_00711F50;
extern Obj70B* data_0070B728;
bool func_00540504(Snd* s);
bool func_004EC178(Snd* s);
void func_0040D80C(Model* m);

struct Self {
    u8 pad0[0xc];
    ModelHolder mHolder;
    u8 pad10[0x40 - 0x10];
    s32 m40;
    s32 m44;
    u8 pad48[0x64 - 0x48];
    u8 m64;
    u8 m65;
    u8 m66;
    u8 m67;
    u8 m68;
    u8 m69;
    bool update();
    void start(s32 id);
};

bool Self::update()
{
    if (m64 == 0 && m65 == 0 && m66 == 0) {
        if (mHolder.isValid() || m40 != -1) {
            if (m64 == 0 && m44 > 0) {
                if (m68 == 0 || !func_00540504(data_00711F50)) {
                    if (m69 != 0) {
                        Obj70B* o = data_0070B728;
                        if (o != 0 && o->m44 != 0) return false;
                        if (func_004EC178(data_00711F50)) return false;
                    }
                    if (m44 > 0 && --m44 == 0) {
                        if (mHolder.isValid()) {
                            if (mHolder.m0 != 0) func_0040D80C(mHolder.m0);
                            start(mHolder.m0 != 0 ? mHolder.m0->mAC : -1);
                        }
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
