#include "a5.h"

struct Obj600 { void setVisible(bool b); };   // 0x4CF828
struct Obj630 { void setVisible(bool b); };   // 0x2D41D4

class Cls {
public:
    void setVisible(bool b);
    char pad0[0x600];
    Obj600* m600;
    char pad604[0x630 - 0x604];
    Obj630* m630[25];
};

void Cls::setVisible(bool b) {
    m600->setVisible(b);
    for (int i = 0; i < 25; i++)
        m630[i]->setVisible(b);
}
