
struct E { char x[0x18]; E(); };
struct C { char base[0x34]; E arr[32]; C(); };
C::C(){}
