struct E1 { unsigned char v; E1(); ~E1(); };
struct E2 { unsigned char v; E2(); ~E2(); };
struct S {
  unsigned char pad0;
  E1 a[3];
  E2 b[3];
  char pad2[3];
  E1 c[3];
  E2 d[3];
  S();
};
S::S(){}
S g;
