struct Disposer12F {virtual~Disposer12F();char pad4[0x20-4];};
struct Member420 {char storage[0x34];~Member420();};
struct MemberEmpty12F {char storage[0xc8];~MemberEmpty12F();};
struct TailBase12F {char storage[4];~TailBase12F();};
struct Tail12F:TailBase12F {void finalize();~Tail12F(){finalize();}};
struct Owner12F:Disposer12F {
    Member420 first;
    char pad54[0x6b4-0x54];MemberEmpty12F second;
    Member420 third;
    char pad7b0[0x155c-0x7b0];Tail12F tail;
    virtual~Owner12F();
};
Owner12F::~Owner12F(){}
