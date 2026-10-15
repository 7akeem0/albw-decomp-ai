typedef unsigned int u32;typedef unsigned char u8;
struct S{char p[0x7c];u8 b7C;};
extern "C" void* data_0070B728;
extern "C" bool func_004CDDEC(void*,S*,int);
bool f(S*p){void*g=data_0070B728;if(g){if(func_004CDDEC(g,p,0)){p->b7C=5;return true;}}return false;}