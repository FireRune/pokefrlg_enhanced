#ifndef GUARD_DEBUG_H
#define GUARD_DEBUG_H
#if DEBUGGING

void Debug_ShowMainMenu(void);
void Debug_ReShowBattleDebugMenu(void);

extern EWRAM_DATA bool8 gIsDebugBattle;
extern EWRAM_DATA u32 gDebugAIFlags;

#endif
#endif // GUARD_DEBUG_H