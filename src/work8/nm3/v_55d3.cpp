typedef unsigned int u32;typedef unsigned char u8;
struct O{char p[0x384];u32 m384;};
extern "C" bool func_0058124C();
extern "C" bool func_00532C78(void*);
bool f(O*o){if(!o->m384){if(!func_0058124C())goto F;}if(func_00532C78((u8*)o+0x3c)==0)return true;F:return false;}