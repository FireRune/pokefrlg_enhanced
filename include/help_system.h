#ifndef GUARD_HELP_SYSTEM_H
#define GUARD_HELP_SYSTEM_H

#include "global.h"
#include "list_menu.h"

struct HelpSystemStruct_203F190_sub
{
    struct ListMenuItem * field_00;
    u16 field_04;
    u16 field_06;
    u8 field_08;
    u8 field_09;
};

struct HelpSystemStruct_203F190
{
    struct HelpSystemStruct_203F190_sub sub;
    u8 field_0C;
    u8 field_0D;
    u8 field_0E;
    u8 filler_10[0xC];
};

extern struct HelpSystemStruct_203F190 gUnknown_203F190;
extern struct ListMenuItem gUnknown_203F1AC[];
extern bool8 gUnknown_3005ECC;
extern u8 gUnknown_203F175;

// help_system_812B1E0
void sub_812B1E0(u8);
void HelpSystem_SetSomeVariable2(u8);
bool8 sub_812B40C(void);
bool8 sub_812B45C(void);
void sub_812B478(void);
void sub_812B484(void);
void sub_812B4B8(void);
bool8 sub_812BB9C(struct HelpSystemStruct_203F190 * a0, struct ListMenuItem * a1);
bool8 sub_812BC54(struct HelpSystemStruct_203F190 * a0, struct ListMenuItem * a1);
bool8 sub_812BC80(struct HelpSystemStruct_203F190 * a0, struct ListMenuItem * a1);
bool8 sub_812BCA8(struct HelpSystemStruct_203F190 * a0, struct ListMenuItem * a1);
bool8 sub_812BCD0(struct HelpSystemStruct_203F190 * a0, struct ListMenuItem * a1);
bool8 sub_812BD2C(struct HelpSystemStruct_203F190 * a0, struct ListMenuItem * a1);
bool8 sub_812BD64(struct HelpSystemStruct_203F190 * a0, struct ListMenuItem * a1);
bool8 sub_812BD98(struct HelpSystemStruct_203F190 * a0, struct ListMenuItem * a1);
bool8 sub_812BE10(struct HelpSystemStruct_203F190 * a0, struct ListMenuItem * a1);
bool8 sub_812BEEC(struct HelpSystemStruct_203F190 * a0, struct ListMenuItem * a1);
bool8 sub_812BF18(struct HelpSystemStruct_203F190 * a0, struct ListMenuItem * a1);

// help_system
void sub_813C64C(struct HelpSystemStruct_203F190 *, u8, u8);
void sub_813C4CC(const u8 *, u8, u8);
void sub_813BDA4(u8);
void sub_813BD5C(u8);
void sub_813BDE8(u8);
void sub_813BFC0(u8);
void sub_813BE78(u8);
s32 sub_813C690(void);
void sub_813C75C(void);
void sub_813C684(u8);
void sub_813C004(u8, u8);
void sub_813C50C(const u8 *a0, const u8 *a1);
void sub_813BEE4(u8);
void sub_813C624(void);
void sub_813C5FC(void);
void sub_813C488(const u8 *str);
void sub_813C584(const u8 *str);
void sub_813BE30(u8);

#endif //GUARD_HELP_SYSTEM_H
