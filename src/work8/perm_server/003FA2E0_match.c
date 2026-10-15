typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;
typedef struct U16Array { u16* data; u32 size; } U16Array;
typedef struct Entry { const char* name; u16 h4; } Entry;
typedef struct Src { char pad[0xc]; Entry** entries; u32 count; } Src;
typedef struct Ctx { char pad[0x88]; char m88[4]; } Ctx;
typedef unsigned int size_t;
size_t strlen(const char* s);
s32 func_00564ABC(void* dict, const char* name, u32 len);
static void setAt(U16Array* a, u32 i, u16 v) { a->data[i] = v; }

u32 func_003FA2E0(U16Array* out, Src* src, Ctx* ctx)
{
    int found = 0;
    int any = 0;
    u32 i;
    if (src->count > out->size) return 0x80000001;
    for (i = 0; i < src->count; i++) {
        Entry* e = src->entries[i];
        if (e->h4 == 0x30) {
            { u16* d = out->data; d[i] = 0; } any = 1;
        } else {
            const char* n = e->name;
            const char * n_c41 = n;
            s32 idx = func_00564ABC(ctx->m88, n_c41, strlen(n));
            if (idx == 0xffff) {
                found = 1;
                out->data[i] = 0xffff;
            } else {
                any = 1;
                out->data[i] = idx;
            }
        }
    }
    i = src->count; while (i < out->size) { u32 j = i++; out->data[j] = 0xffff; }
    if (!any) return 0x80008000;
    return found ? 0x4000 : 0;
}
