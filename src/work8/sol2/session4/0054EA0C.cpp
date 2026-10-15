
struct Vec3 { float x; float y; float z; };
Vec3* func_00520FC0();
struct IFace { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual Vec3* v30(); };
struct Self : IFace { char p0[0x4c4 - 4]; float m4c4; };
bool func_0054EA0C(Self* self) {
    float ref = func_00520FC0()->y;
    Vec3* p = self->v30(); __schedule_barrier();
    const float a = p->y;
    float off = self->m4c4;
return a+off<ref || a-off>ref;}