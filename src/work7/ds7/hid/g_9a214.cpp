
struct G { unsigned m0; G(); ~G(); };
extern "C" void base_ctor(void*);
G::G(){ m0 = 0; base_ctor(this); }
G g;
