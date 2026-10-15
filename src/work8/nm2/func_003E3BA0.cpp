typedef unsigned char u8; typedef signed char s8; typedef unsigned int u32;
struct Child {char pad[0x75];s8 flag;};
struct Global {char pad[0x1c];Child* child;};
extern Global data_00715918;
extern "C" s8 g_3E3BA0(){return data_00715918.child->flag;}
