#include "include/ganon_types.h"

__forceinline void Ganon::updateImpl(f32 hp, u8 zero)
{

    s32 phase;
    if (hp > 0.8f) phase = zero;
    else if (hp > 0.5f) phase = 1;
    else phase = 2;
    OtherBase* p = func_0052FBA0(&data_00706E20->list, targetId);
    Other* other = p ? static_cast<Other*>(p) : (Other*)zero;

    switch (func_0058AB74(this)) {
    case 8:
    case 9:
        if (func_0058A8F0(this)) {
            if (func_0058AB74(this) == 9) t1.start2(func_00548E78(this, 0, 0));
            else t1.start(func_00548E78(this, 0x2d, 0x1e));
            func_004FABDC(this, 10, -1, 0);
        }
    case 10: {
        if (t0.step()) {
            Vec3* tgt = func_00520FC0(this);
            Scalar rate = (1.0f - t0.progress()) * 0.5f;
            f32 c = (1.0f - cosIdx(angle)) * 0.5f;
            s32 step = (s32)scaledStep(lerp(1.0f, 0.8f, c), 0x38E38E3);
            func_0014EB3C(this);
            Vec3 d;
            Vec3* dp = &d;
            func_00115C70(dp, tgt, &pos);
            d.y = 0.0f;
            func_0051D2F4(&angle, func_0068C690(&d), 0, step, rate);
        }
        if (t1.step()) return;
        {
            if (other) func_0039DC1C(other, 3, 0x1e);
            func_00150A84(this, sead::SafeString("SE_MediumGanon_ATTACK_HARAI"), 0);
            func_004FABDC(this, 0xb, 2, 0);
            func_003A42B0(m8ec, 0);
        }
        return;
    }
    case 11:
        if (func_0058A8F0(this)) {
            func_004FABDC(this, 0xc, 0, 0);
            if (other) func_0039DC1C(other, 0, 0);
            t1.start2(func_00548E78(this, 0xf, 0));
            return;
        }
        if (other && other->b509) scaleWrap(&other->m484, &pos, &pos, 0.05f);
        return;
    case 12:
        if (t1.step()) return;
        if (flag) {
            flag = zero;
            if (phase <= 0) goto def;
            if (randU32(&data_007124F0->rnd, 100) >= func_00548E78(this, 0x19, 0x4b)) goto def;
            if (randU32(&data_007124F0->rnd, 100) < func_00548E78(this, 0x32, 0x50)) goto st8;
            t1.start((s32)func_0058AC38(this) + 0x1e);
            func_004FABDC(this, 0xe, 8, 0);
            func_003A42B0(m8ec, 2);
            return;
        }
        func_004FABDC(this, 0xd, 0x18, 0);
        return;
    case 13:
        if (!func_0058A8F0(this)) return;
        if (flag) {
            flag = zero;
            if (phase < 1) goto def;
            if (randU32(&data_007124F0->rnd, 100) >= func_00548E78(this, 0x23, 0x3c)) goto def;
            goto st8;
        }
    st2:
        func_006640EC(stateReq, 2);
        return;
    case 14:
        if (func_0058A8F0(this)) {
            func_004FABDC(this, 0xf, 0, 0);
            t1.start(func_00548E78(this, 0xa, 0));
        }
    case 15: {
        if (t0.step()) {
            Vec3* tgt = func_00520FC0(this);
            f32 rate = (1.0f - t0.progress()) * 0.5f;
            turn(tgt, rate, 0x38E38E3);
        }
        if (t1.step()) return;
        {
            if (other) func_0039DC1C(other, 3, 0x1e);
            func_00150A84(this, sead::SafeString("SE_MediumGanon_ATTACK_HARAI_2_MID"), 0);
            func_004FABDC(this, 0x10, 2, 0);
            func_003A42B0(m8ec, 0);
        }
        return;
    }
    case 16:
        if (func_0058A8F0(this)) {
            func_004FABDC(this, 0x11, 0, 0);
            if (other) func_0039DC1C(other, 0, 0);
            t1.start(func_00548E78(this, 0x14, 0xa));
            return;
        }
        if (other && other->b509) scaleWrap(&other->m484, &pos, &pos, 0.05f);
        return;
    case 17:
        if (t1.step()) return;
        if (flag) {
            flag = zero;
            if (phase < 1) goto def;
            if (randU32(&data_007124F0->rnd, 100) >= func_00548E78(this, 0x19, 0x4b)) goto def;
            goto st8;
        }
        func_004FABDC(this, 0x12, 0x18, 0);
        return;
    case 18:
        if (!func_0058A8F0(this)) return;
        if (!flag) goto st2;
        flag = zero;
        if (phase < 1) goto def;
        if (randU32(&data_007124F0->rnd, 100) >= func_00548E78(this, 0x23, 0x3c)) goto def;
    st8:
        func_006640EC(stateReq, 8);
        return;
    def:
        func_006640EC(stateReq, func_002ECA34(this));
        return;
    default:
        return;
    }
}

void Ganon::update() {
    f32 hp = func_0058A404(this);
    updateImpl(hp, 0);
}
