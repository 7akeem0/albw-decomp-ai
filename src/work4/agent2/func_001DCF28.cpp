// 0x1DCF28  Cls::setPartsFlag(u8)  -- sets byte +0x18 on all 25 parts at Cls+0x630
typedef unsigned char u8;

struct Part {
    char pad[0x18];
    u8 m18;
    void setFlag18(u8 v) { m18 = v; }
};

class Cls {
public:
    void setPartsFlag(u8 v);
    char pad[0x630];
    Part* m630[25];
};

void Cls::setPartsFlag(u8 v) {
    for (int i = 0; i < 25; i++)
        m630[i]->setFlag18(v);
}
