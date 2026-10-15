#include "a5.h"

// 0x1DDCC4: PlayerMgr (*data_0070FB60) forwarder from ANOTHER TU (it does not inline the setter):
//   ldr r0,[r0,#0x10]; b 0x1DDCCC  -> armlink branch-nop. fn.py's range also swallows the
// unreferenced setter Player::setFlag6BD at 0x1DDCCC (see func_001DDCCC.cpp, exact).
class Player {
public:
    void setFlag6BD(bool b);   // 0x1DDCCC
};
class PlayerMgr {
public:
    void setFlag6BD(bool b);
    char pad0[0x10];
    Player* mPlayer;
};
void PlayerMgr::setFlag6BD(bool b) { mPlayer->setFlag6BD(b); }
