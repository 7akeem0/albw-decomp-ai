// u32 mode map: key 0x20000 -> (f() ? 0x1F180000 : 0x1F000000); key 0x30000 -> (f() ? 0x1F380000 : 0x1F300000); else 0.
unsigned func_0010AEF8();
unsigned func_00600660(unsigned key) {
    if (key == 0x20000) {
        if (func_0010AEF8()) return 0x1F180000u;
        return 0x1F000000u;
    } else {
        if (key != 0x30000) return 0;
        if (func_0010AEF8()) return 0x1F380000u;
        return 0x1F300000u;
    }
}
