typedef unsigned int u32;
typedef unsigned char u8;

extern "C" {
extern u32 func_0010CF28(u32, u32, u32);
extern u32 func_002FF488(u32, u32);
extern u8 func_0010E3C4(u32, u32, u32);
}

struct Child_002FF488 {
    char pad[0x6C];
    u32 owner;
    void func_0010E3C4(u32 owner, u32 offset);
};

static void initializeChild(Child_002FF488* child, u32 owner)
{
    child->owner = owner;
    child->func_0010E3C4(owner, 0x6C);
}

struct Container_00270B6C {
    int count;
    int max;
    Child_002FF488** entries;
    char pad[0x50 - 0xC];
    u8 flags;

    void add(Child_002FF488* child)
    {
        if (count < max) {
            entries[count] = child;
            ++count;
        }
    }

    Child_002FF488* create(u32 param, Child_002FF488* initial, u32 owner);
};

Child_002FF488* Container_00270B6C::create(
    u32 param, Child_002FF488* initial, u32 owner)
{
    Child_002FF488* selected = initial;
    u32 storage = func_0010CF28(0x70, param, 4);
    if (storage == 0) {
        selected = 0;
    }
    Child_002FF488* child = selected;
    if (storage != 0) {
        child = (Child_002FF488*)func_002FF488(
            storage, (u32)selected);
    }
    add(child);
    initializeChild(child, owner);
    u8 kind = *(u8*)(owner + 0x28);
    if (kind == 10 || kind == 11) {
        flags |= 4;
    }
    return child;
}
