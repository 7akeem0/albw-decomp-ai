
extern char ro_006F04CC[];
extern char ro_006F047C[];
void* func_00416EAC(void*);
void* func_0041B208(void*);

void* func_0040F184(void* self) {
    *(void**)self = (void*)ro_006F04CC;
    void* a = func_00416EAC((char*)self + 0x1dac);
    void* b = func_0041B208((char*)a - 0x1c98);
    char* c = (char*)b - 0x114;
    *(void**)c = (void*)ro_006F047C;
    c[0x9b] = 3; return c;
}
