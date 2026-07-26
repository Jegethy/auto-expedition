#ifndef UE4SS_SDK_PalModLoader_HPP
#define UE4SS_SDK_PalModLoader_HPP

#include "PalModLoader_enums.hpp"

struct FPalModInfoStruct
{
    FString ModName;                                                                  // 0x0000 (size: 0x10)
    FString PackageName;                                                              // 0x0010 (size: 0x10)
    FString Author;                                                                   // 0x0020 (size: 0x10)
    FString Description;                                                              // 0x0030 (size: 0x10)
    FString Thumbnail;                                                                // 0x0040 (size: 0x10)
    FString BasePath;                                                                 // 0x0050 (size: 0x10)
    FString Version;                                                                  // 0x0060 (size: 0x10)
    bool bDebugMode;                                                                  // 0x0070 (size: 0x1)
    int32 MinRevision;                                                                // 0x0074 (size: 0x4)
    TArray<FString> Dependencies;                                                     // 0x0078 (size: 0x10)
    TArray<FPalModInstallRuleStruct> InstallRule;                                     // 0x0088 (size: 0x10)
    bool bIsActive;                                                                   // 0x0098 (size: 0x1)
    bool bInstalled;                                                                  // 0x0099 (size: 0x1)
    bool bIsValid;                                                                    // 0x009A (size: 0x1)

}; // Size: 0xA0

struct FPalModInstallManifest
{
    int64 WorkshopId;                                                                 // 0x0000 (size: 0x8)
    FDateTime LastWorkshopUpdateTimeUtc;                                              // 0x0008 (size: 0x8)
    FDateTime LastInstallTimeUtc;                                                     // 0x0010 (size: 0x8)
    TArray<FString> Files;                                                            // 0x0018 (size: 0x10)
    TArray<FString> Dirs;                                                             // 0x0028 (size: 0x10)

}; // Size: 0x48

struct FPalModInstallRuleStruct
{
    EPalModInstallType Type;                                                          // 0x0000 (size: 0x1)
    bool IsServer;                                                                    // 0x0001 (size: 0x1)
    TArray<FString> Targets;                                                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPalSteamSubscribedItemInfo
{
    int64 WorkshopId;                                                                 // 0x0000 (size: 0x8)
    FString InstallFolder;                                                            // 0x0008 (size: 0x10)
    FDateTime LastUpdateTimeUtc;                                                      // 0x0018 (size: 0x8)
    bool bIsValid;                                                                    // 0x0020 (size: 0x1)

}; // Size: 0x28

class UPalModLoaderLibrary : public UBlueprintFunctionLibrary
{

    void SetNeedRestart();
    void SetGlobalEnableMod(bool bEnable);
    void SetActiveModList(const TArray<FString>& InModList);
    void RestartGame(bool bSafeMode);
    void OpenWorkshopPage();
    bool IsNeedShowErrorOnNextStart();
    bool IsNeedRestart();
    bool IsGlobalEnableMod();
    TArray<FPalModInfoStruct> GetWorkshopModList();
    FPalModInfoStruct GetWorkshopMod(FString InPackageName);
    TArray<FString> GetActiveModList();
    void DeleteMod(FPalModInfoStruct InModInfo);
    void DeactivateMod(FPalModInfoStruct InModInfo);
    void ActivateMod(FPalModInfoStruct InModInfo);
}; // Size: 0x28

#endif
