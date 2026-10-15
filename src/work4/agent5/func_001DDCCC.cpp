#include "a5.h"

// 0x1DDCCC (not in fn.py's table: only reached by the NOPped forwarder 0x1DDCC4)
// strb r1,[r0,#0x6bd]; bx lr
class Player {
public:
    void setFlag6BD(bool b);
    char pad0[0x6bd];
    bool m6bd;
};
void Player::setFlag6BD(bool b) { m6bd = b; }
