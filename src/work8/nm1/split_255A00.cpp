typedef unsigned int u32;
struct H { char pad[0x10]; void* m10; };
extern void setter_00255A10(void*);
void f_255A00(H* h) { setter_00255A10((char*)h->m10 + 0x40c); }
