typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct PlayerMgr;
extern PlayerMgr* data_0070FB60;
bool func_00556E7C(PlayerMgr* p, s32 id);
struct Player { char pad[0xa00]; f32 fa00; char pada04[0xb42 - 0xa04]; u8 bb42; bool func_00542E58(); };

bool Player::func_00542E58()
{
    if (bb42) return true;
    if (func_00556E7C(data_0070FB60, 0x16)) return true;
    if ((func_00556E7C(data_0070FB60, 0x38) || func_00556E7C(data_0070FB60, 0x37)) && fa00 < 3.0f) return true;
    if ((func_00556E7C(data_0070FB60, 0x3c) || func_00556E7C(data_0070FB60, 0x3d) || func_00556E7C(data_0070FB60, 0x3e)) && fa00 < 8.0f) return true;
    if (func_00556E7C(data_0070FB60, 0x21)) return true;
    return false;
}
