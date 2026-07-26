#ifndef UE4SS_SDK_Flow_HPP
#define UE4SS_SDK_Flow_HPP

#include "Flow_enums.hpp"

struct FConnectedPin
{
    FGuid NodeGuid;                                                                   // 0x0000 (size: 0x10)
    FName PinName;                                                                    // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FFlowAssetSaveData
{
    FString WorldName;                                                                // 0x0000 (size: 0x10)
    FString InstanceName;                                                             // 0x0010 (size: 0x10)
    TArray<uint8> AssetData;                                                          // 0x0020 (size: 0x10)
    TArray<FFlowNodeSaveData> NodeRecords;                                            // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FFlowComponentSaveData
{
    FString WorldName;                                                                // 0x0000 (size: 0x10)
    FString ActorInstanceName;                                                        // 0x0010 (size: 0x10)
    TArray<uint8> ComponentData;                                                      // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FFlowInputPinHandle : public FFlowPinHandle
{
}; // Size: 0x8

struct FFlowNodeSaveData
{
    FGuid NodeGuid;                                                                   // 0x0000 (size: 0x10)
    TArray<uint8> NodeData;                                                           // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FFlowOutputPinHandle : public FFlowPinHandle
{
}; // Size: 0x8

struct FFlowOwnerFunctionRef
{
    FName FunctionName;                                                               // 0x0000 (size: 0x8)
    class UFunction* Function;                                                        // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FFlowPin
{
    FName PinName;                                                                    // 0x0000 (size: 0x8)
    FText PinFriendlyName;                                                            // 0x0008 (size: 0x18)
    FString PinToolTip;                                                               // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FFlowPinHandle
{
    FName PinName;                                                                    // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FFlowPinTrait
{
    uint8 bTraitAllowed;                                                              // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FMovieSceneFlowRepeaterTemplate : public FMovieSceneFlowTemplateBase
{
    FString EventName;                                                                // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FMovieSceneFlowTemplateBase : public FMovieSceneEvalTemplate
{
    uint8 bFireEventsWhenForwards;                                                    // 0x0020 (size: 0x1)
    uint8 bFireEventsWhenBackwards;                                                   // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FMovieSceneFlowTriggerTemplate : public FMovieSceneFlowTemplateBase
{
    TArray<FFrameNumber> EventTimes;                                                  // 0x0028 (size: 0x10)
    TArray<FString> EventNames;                                                       // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FNotifyTagReplication
{
    FGameplayTag ActorTag;                                                            // 0x0000 (size: 0x8)
    FGameplayTag NotifyTag;                                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

class AFlowLevelSequenceActor : public ALevelSequenceActor
{
    class ULevelSequence* ReplicatedLevelSequenceAsset;                               // 0x0308 (size: 0x8)

    void OnRep_ReplicatedLevelSequenceAsset();
}; // Size: 0x310

class AFlowWorldSettings : public AWorldSettings
{
    class UFlowComponent* FlowComponent;                                              // 0x04B8 (size: 0x8)

}; // Size: 0x4C0

class IFlowOwnerInterface : public IInterface
{
}; // Size: 0x28

class UFlowAsset : public UObject
{
    FGuid AssetGuid;                                                                  // 0x0028 (size: 0x10)
    bool bWorldBound;                                                                 // 0x0038 (size: 0x1)
    TMap<class FGuid, class UFlowNode*> Nodes;                                        // 0x0088 (size: 0x50)
    TArray<class UFlowAsset*> ActiveInstances;                                        // 0x00D8 (size: 0x10)
    class UFlowAsset* TemplateAsset;                                                  // 0x00E8 (size: 0x8)
    TSet<UFlowNode_CustomInput*> CustomInputNodes;                                    // 0x0150 (size: 0x50)
    TSet<UFlowNode*> PreloadedNodes;                                                  // 0x01A0 (size: 0x50)
    TArray<class UFlowNode*> ActiveNodes;                                             // 0x01F0 (size: 0x10)
    TArray<class UFlowNode*> RecordedNodes;                                           // 0x0200 (size: 0x10)
    UClass* ExpectedOwnerClass;                                                       // 0x0218 (size: 0x8)

    class AActor* TryFindActorOwner();
    FFlowAssetSaveData SaveInstance(TArray<FFlowAssetSaveData>& SavedFlowInstances);
    void OnSave();
    void OnLoad();
    void LoadInstance(const FFlowAssetSaveData& AssetRecord);
    bool IsBoundToWorld();
    bool IsActive();
    TArray<class UFlowNode*> GetRecordedNodes();
    class UObject* GetOwner();
    TArray<class UFlowNode*> GetNodesInExecutionOrder(class UFlowNode* FirstIteratedNode, const TSubclassOf<class UFlowNode> FlowNodeClass);
    class UFlowNode* GetDefaultEntryNode();
    TArray<class UFlowNode*> GetActiveNodes();
}; // Size: 0x220

class UFlowComponent : public UActorComponent
{
    FGameplayTagContainer IdentityTags;                                               // 0x00A8 (size: 0x20)
    FGameplayTagContainer AddedIdentityTags;                                          // 0x00C8 (size: 0x20)
    FGameplayTagContainer RemovedIdentityTags;                                        // 0x00E8 (size: 0x20)
    FFlowComponentOnIdentityTagsAdded OnIdentityTagsAdded;                            // 0x0108 (size: 0x10)
    void FlowComponentTagsReplicated(class UFlowComponent* FlowComponent, const FGameplayTagContainer& CurrentTags);
    FFlowComponentOnIdentityTagsRemoved OnIdentityTagsRemoved;                        // 0x0118 (size: 0x10)
    void FlowComponentTagsReplicated(class UFlowComponent* FlowComponent, const FGameplayTagContainer& CurrentTags);
    FGameplayTagContainer RecentlySentNotifyTags;                                     // 0x0128 (size: 0x20)
    FGameplayTagContainer NotifyTagsFromGraph;                                        // 0x0160 (size: 0x20)
    FFlowComponentReceiveNotify ReceiveNotify;                                        // 0x0180 (size: 0x10)
    void FlowComponentDynamicNotify(class UFlowComponent* FlowComponent, const FGameplayTag& NotifyTag);
    TArray<FNotifyTagReplication> NotifyTagsFromAnotherComponent;                     // 0x0190 (size: 0x10)
    class UFlowAsset* RootFlow;                                                       // 0x01A0 (size: 0x8)
    bool bAutoStartRootFlow;                                                          // 0x01A8 (size: 0x1)
    EFlowNetMode RootFlowMode;                                                        // 0x01A9 (size: 0x1)
    bool bAllowMultipleInstances;                                                     // 0x01AA (size: 0x1)
    FString SavedAssetInstanceName;                                                   // 0x01B0 (size: 0x10)

    void StartRootFlow();
    void SaveRootFlow(TArray<FFlowAssetSaveData>& SavedFlowInstances);
    FFlowComponentSaveData SaveInstance();
    void RemoveIdentityTags(FGameplayTagContainer Tags, const EFlowNetMode NetMode);
    void RemoveIdentityTag(const FGameplayTag Tag, const EFlowNetMode NetMode);
    void OnSave();
    void OnRep_SentNotifyTags();
    void OnRep_RemovedIdentityTags();
    void OnRep_NotifyTagsFromGraph();
    void OnRep_NotifyTagsFromAnotherComponent();
    void OnRep_AddedIdentityTags();
    void OnLoad();
    void NotifyGraph(const FGameplayTag NotifyTag, const EFlowNetMode NetMode);
    void NotifyActor(const FGameplayTag ActorTag, const FGameplayTag NotifyTag, const EFlowNetMode NetMode);
    void LogError(FString Message, const EFlowOnScreenMessageType OnScreenMessageType);
    void LoadRootFlow();
    bool LoadInstance();
    TSet<UFlowAsset*> GetRootInstances(const class UObject* Owner);
    class UFlowAsset* GetRootFlowInstance();
    void FinishRootFlow(class UFlowAsset* TemplateAsset, const EFlowFinishPolicy FinishPolicy);
    void BulkNotifyGraph(const FGameplayTagContainer NotifyTags, const EFlowNetMode NetMode);
    void BP_OnTriggerRootFlowOutputEvent(class UFlowAsset* RootFlowInstance, const FName& EventName);
    void AddIdentityTags(FGameplayTagContainer Tags, const EFlowNetMode NetMode);
    void AddIdentityTag(const FGameplayTag Tag, const EFlowNetMode NetMode);
}; // Size: 0x1C0

class UFlowLevelSequencePlayer : public ULevelSequencePlayer
{
    class UFlowNode* FlowEventReceiver;                                               // 0x05B8 (size: 0x8)

}; // Size: 0x5C0

class UFlowNode : public UObject
{
    class UEdGraphNode* GraphNode;                                                    // 0x0030 (size: 0x8)
    FGuid NodeGuid;                                                                   // 0x0038 (size: 0x10)
    TArray<EFlowSignalMode> AllowedSignalModes;                                       // 0x0048 (size: 0x10)
    EFlowSignalMode SignalMode;                                                       // 0x0058 (size: 0x1)
    TArray<FFlowPin> InputPins;                                                       // 0x0060 (size: 0x10)
    TArray<FFlowPin> OutputPins;                                                      // 0x0070 (size: 0x10)
    TMap<class FName, class FConnectedPin> Connections;                               // 0x0080 (size: 0x50)
    EFlowNodeState ActivationState;                                                   // 0x00D1 (size: 0x1)

    void TriggerOutputPin(const FFlowOutputPinHandle Pin, const bool bFinish, const EFlowPinActivationType ActivationType);
    void TriggerOutput(const FName& PinName, const bool bFinish, const EFlowPinActivationType ActivationType);
    void TriggerFirstOutput(const bool bFinish);
    void SetGuid(const FGuid& NewGuid);
    void SaveInstance(FFlowNodeSaveData& NodeRecord);
    void OnSave();
    void OnPassThrough();
    void OnLoad();
    void LogWarning(FString Message);
    void LogNote(FString Message);
    void LogError(FString Message, const EFlowOnScreenMessageType OnScreenMessageType);
    void LoadInstance(const FFlowNodeSaveData& NodeRecord);
    void K2_PreloadContent();
    void K2_OnActivate();
    void K2_InitializeInstance();
    FString K2_GetStatusString();
    bool K2_GetStatusBackgroundColor(FLinearColor& OutColor);
    FString K2_GetNodeDescription();
    class UObject* K2_GetAssetToEdit();
    FString K2_GetAssetPath();
    class AActor* K2_GetActorToFocus();
    void K2_ForceFinishNode();
    void K2_FlushContent();
    void K2_ExecuteInput(const FName& PinName);
    void K2_DeinitializeInstance();
    void K2_Cleanup();
    bool K2_CanUserAddOutput();
    bool K2_CanUserAddInput();
    bool IsOutputConnected(const FName& PinName);
    bool IsInputConnected(const FName& PinName);
    FString GetProgressAsString(float Value);
    TArray<FName> GetOutputNames();
    FString GetNotifyTagsDescription(const FGameplayTagContainer& Tags);
    TArray<FName> GetInputNames();
    FString GetIdentityTagsDescription(const FGameplayTagContainer& Tags);
    FString GetIdentityTagDescription(const FGameplayTag& Tag);
    FGuid GetGuid();
    class UFlowSubsystem* GetFlowSubsystem();
    class UFlowAsset* GetFlowAsset();
    TSet<UFlowNode*> GetConnectedNodes();
    FString GetClassDescription(const UClass* Class);
    void Finish();
}; // Size: 0xD8

class UFlowNodeBlueprint : public UBlueprint
{
}; // Size: 0xA8

class UFlowNode_CallOwnerFunction : public UFlowNode
{
    FFlowOwnerFunctionRef FunctionRef;                                                // 0x00D8 (size: 0x10)
    class UFlowOwnerFunctionParams* Params;                                           // 0x00E8 (size: 0x8)

}; // Size: 0xF0

class UFlowNode_Checkpoint : public UFlowNode
{
}; // Size: 0xD8

class UFlowNode_ComponentObserver : public UFlowNode
{
    FGameplayTagContainer IdentityTags;                                               // 0x00D8 (size: 0x20)
    EFlowTagContainerMatchType IdentityMatchType;                                     // 0x00F8 (size: 0x1)
    int32 SuccessLimit;                                                               // 0x00FC (size: 0x4)
    int32 SuccessCount;                                                               // 0x0100 (size: 0x4)

    void OnEventReceived();
    void OnComponentUnregistered(class UFlowComponent* Component);
    void OnComponentTagRemoved(class UFlowComponent* Component, const FGameplayTagContainer& RemovedTags);
    void OnComponentTagAdded(class UFlowComponent* Component, const FGameplayTagContainer& AddedTags);
    void OnComponentRegistered(class UFlowComponent* Component);
}; // Size: 0x158

class UFlowNode_Counter : public UFlowNode
{
    int32 Goal;                                                                       // 0x00D8 (size: 0x4)
    int32 CurrentSum;                                                                 // 0x00DC (size: 0x4)

}; // Size: 0xE0

class UFlowNode_CustomEventBase : public UFlowNode
{
    FName EventName;                                                                  // 0x00D8 (size: 0x8)

}; // Size: 0xE0

class UFlowNode_CustomInput : public UFlowNode_CustomEventBase
{
}; // Size: 0xE0

class UFlowNode_CustomOutput : public UFlowNode_CustomEventBase
{
}; // Size: 0xE0

class UFlowNode_ExecutionMultiGate : public UFlowNode
{
    bool bRandom;                                                                     // 0x00D8 (size: 0x1)
    bool bLoop;                                                                       // 0x00D9 (size: 0x1)
    int32 StartIndex;                                                                 // 0x00DC (size: 0x4)
    int32 NextOutput;                                                                 // 0x00E0 (size: 0x4)
    TArray<bool> Completed;                                                           // 0x00E8 (size: 0x10)

}; // Size: 0xF8

class UFlowNode_ExecutionSequence : public UFlowNode
{
    bool bSavePinExecutionState;                                                      // 0x00D8 (size: 0x1)
    TSet<FGuid> ExecutedConnections;                                                  // 0x00E0 (size: 0x50)

}; // Size: 0x130

class UFlowNode_Finish : public UFlowNode
{
}; // Size: 0xD8

class UFlowNode_Log : public UFlowNode
{
    FString Message;                                                                  // 0x00D8 (size: 0x10)
    EFlowLogVerbosity Verbosity;                                                      // 0x00E8 (size: 0x1)
    bool bPrintToScreen;                                                              // 0x00E9 (size: 0x1)
    float Duration;                                                                   // 0x00EC (size: 0x4)
    FColor TextColor;                                                                 // 0x00F0 (size: 0x4)

}; // Size: 0xF8

class UFlowNode_LogicalAND : public UFlowNode
{
    TSet<FName> ExecutedInputNames;                                                   // 0x00D8 (size: 0x50)

}; // Size: 0x128

class UFlowNode_LogicalOR : public UFlowNode
{
    bool bEnabled;                                                                    // 0x00D8 (size: 0x1)
    int32 ExecutionLimit;                                                             // 0x00DC (size: 0x4)
    int32 ExecutionCount;                                                             // 0x00E0 (size: 0x4)

}; // Size: 0xE8

class UFlowNode_NotifyActor : public UFlowNode
{
    FGameplayTagContainer IdentityTags;                                               // 0x00D8 (size: 0x20)
    EGameplayContainerMatchType MatchType;                                            // 0x00F8 (size: 0x1)
    bool bExactMatch;                                                                 // 0x00F9 (size: 0x1)
    FGameplayTagContainer NotifyTags;                                                 // 0x0100 (size: 0x20)
    EFlowNetMode NetMode;                                                             // 0x0120 (size: 0x1)

}; // Size: 0x128

class UFlowNode_OnActorRegistered : public UFlowNode_ComponentObserver
{
}; // Size: 0x158

class UFlowNode_OnActorUnregistered : public UFlowNode_ComponentObserver
{
}; // Size: 0x158

class UFlowNode_OnNotifyFromActor : public UFlowNode_ComponentObserver
{
    FGameplayTagContainer NotifyTags;                                                 // 0x0158 (size: 0x20)
    bool bRetroactive;                                                                // 0x0178 (size: 0x1)

}; // Size: 0x180

class UFlowNode_PlayLevelSequence : public UFlowNode
{
    TSoftObjectPtr<ULevelSequence> Sequence;                                          // 0x00D8 (size: 0x30)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;                             // 0x0108 (size: 0x20)
    bool bPlayReverse;                                                                // 0x0128 (size: 0x1)
    FLevelSequenceCameraSettings CameraSettings;                                      // 0x0129 (size: 0x2)
    bool bUseGraphOwnerAsTransformOrigin;                                             // 0x012B (size: 0x1)
    bool bReplicates;                                                                 // 0x012C (size: 0x1)
    bool bAlwaysRelevant;                                                             // 0x012D (size: 0x1)
    bool bApplyOwnerTimeDilation;                                                     // 0x012E (size: 0x1)
    class ULevelSequence* LoadedSequence;                                             // 0x0130 (size: 0x8)
    class UFlowLevelSequencePlayer* SequencePlayer;                                   // 0x0138 (size: 0x8)
    float StartTime;                                                                  // 0x0144 (size: 0x4)
    float ElapsedTime;                                                                // 0x0148 (size: 0x4)
    float TimeDilation;                                                               // 0x014C (size: 0x4)

    void OnPlaybackFinished();
}; // Size: 0x238

class UFlowNode_Reroute : public UFlowNode
{
}; // Size: 0xD8

class UFlowNode_Start : public UFlowNode
{
}; // Size: 0xD8

class UFlowNode_SubGraph : public UFlowNode
{
    TSoftObjectPtr<UFlowAsset> Asset;                                                 // 0x00D8 (size: 0x30)
    bool bCanInstanceIdenticalAsset;                                                  // 0x0108 (size: 0x1)
    FString SavedAssetInstanceName;                                                   // 0x0110 (size: 0x10)

}; // Size: 0x120

class UFlowNode_Timer : public UFlowNode
{
    float CompletionTime;                                                             // 0x00D8 (size: 0x4)
    float StepTime;                                                                   // 0x00DC (size: 0x4)
    float SumOfSteps;                                                                 // 0x00F0 (size: 0x4)
    float RemainingCompletionTime;                                                    // 0x00F4 (size: 0x4)
    float RemainingStepTime;                                                          // 0x00F8 (size: 0x4)

    void OnStep();
    void OnCompletion();
}; // Size: 0x100

class UFlowOwnerFunctionParams : public UObject
{
    class UFlowNode_CallOwnerFunction* SourceNode;                                    // 0x0028 (size: 0x8)
    FName ExecutedInputPinName;                                                       // 0x0030 (size: 0x8)

    bool ShouldFinishForOutputName(const FName& OutputName);
    void BP_PreExecute();
    void BP_PostExecute();
    TArray<FName> BP_GetOutputNames();
    TArray<FName> BP_GetInputNames();
}; // Size: 0x38

class UFlowSaveGame : public USaveGame
{
    FString SaveSlotName;                                                             // 0x0028 (size: 0x10)
    TArray<FFlowComponentSaveData> FlowComponents;                                    // 0x0038 (size: 0x10)
    TArray<FFlowAssetSaveData> FlowInstances;                                         // 0x0048 (size: 0x10)

}; // Size: 0x58

class UFlowSettings : public UDeveloperSettings
{
    bool bCreateFlowSubsystemOnClients;                                               // 0x0038 (size: 0x1)
    bool bWarnAboutMissingIdentityTags;                                               // 0x0039 (size: 0x1)
    bool bLogOnSignalDisabled;                                                        // 0x003A (size: 0x1)
    bool bLogOnSignalPassthrough;                                                     // 0x003B (size: 0x1)
    bool bUseAdaptiveNodeTitles;                                                      // 0x003C (size: 0x1)
    FSoftClassPath DefaultExpectedOwnerClass;                                         // 0x0040 (size: 0x20)

}; // Size: 0x60

class UFlowSubsystem : public UGameInstanceSubsystem
{
    TArray<class UFlowAsset*> InstancedTemplates;                                     // 0x0030 (size: 0x10)
    TMap<class UFlowAsset*, class TWeakObjectPtr<UObject>> RootInstances;             // 0x0040 (size: 0x50)
    TMap<class UFlowNode_SubGraph*, class UFlowAsset*> InstancedSubFlows;             // 0x0090 (size: 0x50)
    class UFlowSaveGame* LoadedSaveGame;                                              // 0x00E0 (size: 0x8)
    FFlowSubsystemOnSaveGame OnSaveGame;                                              // 0x00E8 (size: 0x10)
    void SimpleFlowEvent();
    FFlowSubsystemOnComponentRegistered OnComponentRegistered;                        // 0x0148 (size: 0x10)
    void SimpleFlowComponentEvent(class UFlowComponent* Component);
    FFlowSubsystemOnComponentTagAdded OnComponentTagAdded;                            // 0x0158 (size: 0x10)
    void TaggedFlowComponentEvent(class UFlowComponent* Component, const FGameplayTagContainer& Tags);
    FFlowSubsystemOnComponentUnregistered OnComponentUnregistered;                    // 0x0168 (size: 0x10)
    void SimpleFlowComponentEvent(class UFlowComponent* Component);
    FFlowSubsystemOnComponentTagRemoved OnComponentTagRemoved;                        // 0x0178 (size: 0x10)
    void TaggedFlowComponentEvent(class UFlowComponent* Component, const FGameplayTagContainer& Tags);

    void StartRootFlow(class UObject* Owner, class UFlowAsset* FlowAsset, const bool bAllowMultipleInstances);
    void OnGameSaved(class UFlowSaveGame* SaveGame);
    void OnGameLoaded(class UFlowSaveGame* SaveGame);
    void LoadSubFlow(class UFlowNode_SubGraph* SubGraphNode, FString SavedAssetInstanceName);
    void LoadRootFlow(class UObject* Owner, class UFlowAsset* FlowAsset, FString SavedAssetInstanceName);
    TSet<UFlowAsset*> GetRootInstancesByOwner(const class UObject* Owner);
    TMap<class UObject*, class UFlowAsset*> GetRootInstances();
    class UFlowAsset* GetRootFlow(const class UObject* Owner);
    class UFlowSaveGame* GetLoadedSaveGame();
    TMap<class UFlowNode_SubGraph*, class UFlowAsset*> GetInstancedSubFlows();
    TSet<UFlowComponent*> GetFlowComponentsByTags(const FGameplayTagContainer Tags, const EGameplayContainerMatchType MatchType, const TSubclassOf<class UFlowComponent> ComponentClass, const bool bExactMatch);
    TSet<UFlowComponent*> GetFlowComponentsByTag(const FGameplayTag Tag, const TSubclassOf<class UFlowComponent> ComponentClass, const bool bExactMatch);
    TSet<AActor*> GetFlowActorsByTags(const FGameplayTagContainer Tags, const EGameplayContainerMatchType MatchType, const TSubclassOf<class AActor> actorClass, const bool bExactMatch);
    TSet<AActor*> GetFlowActorsByTag(const FGameplayTag Tag, const TSubclassOf<class AActor> actorClass, const bool bExactMatch);
    TMap<class AActor*, class UFlowComponent*> GetFlowActorsAndComponentsByTags(const FGameplayTagContainer Tags, const EGameplayContainerMatchType MatchType, const TSubclassOf<class AActor> actorClass, const bool bExactMatch);
    TMap<class AActor*, class UFlowComponent*> GetFlowActorsAndComponentsByTag(const FGameplayTag Tag, const TSubclassOf<class AActor> actorClass, const bool bExactMatch);
    void FinishRootFlow(class UObject* Owner, class UFlowAsset* TemplateAsset, const EFlowFinishPolicy FinishPolicy);
    void FinishAllRootFlows(class UObject* Owner, const EFlowFinishPolicy FinishPolicy);
    void AbortActiveFlows();
}; // Size: 0x188

class UMovieSceneFlowRepeaterSection : public UMovieSceneFlowSectionBase
{
    FString EventName;                                                                // 0x00F0 (size: 0x10)

}; // Size: 0x100

class UMovieSceneFlowSectionBase : public UMovieSceneSection
{
}; // Size: 0xF0

class UMovieSceneFlowTrack : public UMovieSceneNameableTrack
{
    uint8 bFireEventsWhenForwards;                                                    // 0x00A0 (size: 0x1)
    uint8 bFireEventsWhenBackwards;                                                   // 0x00A0 (size: 0x1)
    EFireEventsAtPosition EventPosition;                                              // 0x00A4 (size: 0x1)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00A8 (size: 0x10)

}; // Size: 0xB8

class UMovieSceneFlowTriggerSection : public UMovieSceneFlowSectionBase
{
    FMovieSceneStringChannel StringChannel;                                           // 0x00F0 (size: 0x110)

}; // Size: 0x200

#endif
