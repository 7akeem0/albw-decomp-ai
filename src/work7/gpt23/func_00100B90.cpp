typedef void (*InitFn)();
extern InitFn const init_array_begin[];
extern InitFn const init_array_end[];
extern "C" void func_00100B90() {
    InitFn const* current = init_array_begin;
    InitFn const* end = init_array_end;
    while (current < end) {
        (*current)();
        ++current;
    }
}
