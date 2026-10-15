typedef unsigned char u8;
typedef unsigned int u32;
struct Inner { char pad[0x7c]; u8 m7c; };
struct Mid { char pad[0x70]; Inner* m70; };
struct X { char pad[0x14]; Mid* m14; };
struct G { char pad[0x44]; Inner* m44; };
extern G* data_0070B728;

bool q1(X* p) { Inner* t = p->m14->m70; if (data_0070B728->m44 && data_0070B728->m44 == t) return t->m7c == 3; return false; }

bool q2(X* p) { Inner* t = p->m14->m70; Inner* u = t; if (data_0070B728->m44 && data_0070B728->m44 == t) return u->m7c == 3; return false; }

bool q3(X* p) { bool r = false; Inner* t = p->m14->m70; if (data_0070B728->m44 && data_0070B728->m44 == t) r = (t->m7c == 3); return r; }

bool q4(X* p) {
    Inner* t = p->m14->m70;
    Inner* g = data_0070B728->m44;
    if (g && g == t) return t->m7c == 3;
    return false;
}

bool q5(X* p) { Inner* t = p->m14->m70; if (data_0070B728->m44 == 0) return false; if (data_0070B728->m44 != t) return false; return t->m7c == 3; }

bool q6(X* p) { Inner* t = p->m14->m70; if (!data_0070B728->m44) return false; if (data_0070B728->m44 == t) return t->m7c == 3; return false; }
