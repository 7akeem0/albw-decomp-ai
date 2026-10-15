#include "../agent9/dtor_a9.h"
struct Model94C {
    ~Model94C();   // 0x4EDD04
    char pad[0x48];
};
class En206 : public Base6EDB00 {
public:
    char pad[0x94c - 0x410];
    Model94C m94c;
    virtual ~En206();
};
En206::~En206() {}
