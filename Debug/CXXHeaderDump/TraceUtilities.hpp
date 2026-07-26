#ifndef UE4SS_SDK_TraceUtilities_HPP
#define UE4SS_SDK_TraceUtilities_HPP

class UTraceUtilLibrary : public UBlueprintFunctionLibrary
{

    void TraceMarkRegionStart(FString Name);
    void TraceMarkRegionEnd(FString Name);
    void TraceBookmark(FString Name);
    bool ToggleChannel(FString ChannelName, bool Enabled);
    bool StopTracing();
    bool StartTraceToFile(FString Filename, const TArray<FString>& channels);
    bool StartTraceSendTo(FString Target, const TArray<FString>& channels);
    bool ResumeTracing();
    bool PauseTracing();
    bool IsTracing();
    bool IsChannelEnabled(FString ChannelName);
    TArray<FString> GetEnabledChannels();
    TArray<FString> GetAllChannels();
}; // Size: 0x28

#endif
