#ifndef VPinMAMEConfig_H
#define VPinMAMEConfig_H
#if !defined(__GNUC__) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4) || (__GNUC__ >= 4)	// GCC supports "pragma once" correctly since 3.4
#pragma once
#endif

extern void vpm_frontend_init(void);
extern void vpm_frontend_exit(void);
#define cli_frontend_init vpm_frontend_init
#define cli_frontend_exit vpm_frontend_exit

void vpm_game_init(int game_index);
void vpm_game_exit(int game_index);

int set_option(const char *name, const char *arg, int priority);
void *get_option(const char *name);

BOOL  WriteRegistry(char* pszKey, char* pszName, DWORD dwValue);
DWORD ReadRegistry(char* pszKey, char* pszName, DWORD dwDefault);

void LoadGlobalSettings();
void DeleteGlobalSettings();

void LoadGameSettings(char* pszGameName);
void DeleteGameSettings(char *pszGameName);

char* GetInstallDir(char *pszInstallDir, int iSize);

BOOL PutSetting(char* pszGameName, char* pszName, VARIANT vValue);
BOOL GetSetting(char* pszGameName, char* pszName, VARIANT *pVal);

BOOL SettingAffectsRunningGame(const char* pszName);

#endif // VPinMAMEConfig_H
