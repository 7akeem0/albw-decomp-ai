



typedef unsigned int u32;

typedef u32 (*VFn)(void* self, u32 a);

void* func_0055F43C(void*);
void* func_0055F3CC(void* self) {
    if (((VFn)(*(void***)self)[65])(self, 3) != 0) {
        return 0;
    }
    if (((VFn)(*(void***)self)[65])(self, 4) != 0) {
        return 0;
    }
    if (((VFn)(*(void***)self)[65])(self, 9) == 0) {
        return func_0055F43C(self);
    }
    return 0;
}
