#ifndef UE4SS_SDK_DiscordPartnerSDK_HPP
#define UE4SS_SDK_DiscordPartnerSDK_HPP

#include "DiscordPartnerSDK_enums.hpp"

struct FDiscordUniqueID
{
}; // Size: 0x8

class UDiscordActivity : public UObject
{

    EDiscordActivityTypes Type();
    class UDiscordActivityTimestamps* Timestamps();
    EDiscordActivityGamePlatforms SupportedPlatforms();
    EDiscordStatusDisplayTypes StatusDisplayType();
    FString StateUrl();
    FString State();
    void SetType(EDiscordActivityTypes Type);
    void SetTimestamps(class UDiscordActivityTimestamps* Timestamps);
    void SetSupportedPlatforms(EDiscordActivityGamePlatforms SupportedPlatforms);
    void SetStatusDisplayType(EDiscordStatusDisplayTypes StatusDisplayType);
    void SetStateUrl(FString StateUrl);
    void SetState(FString State);
    void SetSecrets(class UDiscordActivitySecrets* Secrets);
    void SetParty(class UDiscordActivityParty* Party);
    void SetParentApplicationId(FDiscordUniqueID ParentApplicationId);
    void SetName(FString Name);
    void SetDetailsUrl(FString DetailsUrl);
    void SetDetails(FString Details);
    void SetAssets(class UDiscordActivityAssets* Assets);
    void SetApplicationId(FDiscordUniqueID ApplicationId);
    class UDiscordActivitySecrets* Secrets();
    class UDiscordActivityParty* Party();
    FDiscordUniqueID ParentApplicationId();
    FString Name();
    void Init();
    TArray<class UDiscordActivityButton*> GetButtons();
    bool Equals(class UDiscordActivity* Other);
    void Drop();
    FString DetailsUrl();
    FString Details();
    class UDiscordActivityAssets* Assets();
    FDiscordUniqueID ApplicationId();
    void AddButton(class UDiscordActivityButton* Button);
}; // Size: 0x38

class UDiscordActivityAssets : public UObject
{

    FString SmallUrl();
    FString SmallText();
    FString SmallImage();
    void SetSmallUrl(FString SmallUrl);
    void SetSmallText(FString SmallText);
    void SetSmallImage(FString SmallImage);
    void SetLargeUrl(FString LargeUrl);
    void SetLargeText(FString LargeText);
    void SetLargeImage(FString LargeImage);
    void SetInviteCoverImage(FString InviteCoverImage);
    FString LargeUrl();
    FString LargeText();
    FString LargeImage();
    FString InviteCoverImage();
    void Init();
    void Drop();
}; // Size: 0x38

class UDiscordActivityButton : public UObject
{

    FString URL();
    void SetUrl(FString URL);
    void SetLabel(FString Label);
    FString Label();
    void Init();
    void Drop();
}; // Size: 0x38

class UDiscordActivityInvite : public UObject
{

    EDiscordActivityActionTypes Type();
    void SetType(EDiscordActivityActionTypes Type);
    void SetSessionId(FString SessionId);
    void SetSenderId(FDiscordUniqueID SenderId);
    void SetPartyId(FString PartyId);
    void SetParentApplicationId(FDiscordUniqueID ParentApplicationId);
    void SetMessageId(FDiscordUniqueID MessageId);
    void SetIsValid(bool IsValid);
    void SetChannelId(FDiscordUniqueID ChannelId);
    void SetApplicationId(FDiscordUniqueID ApplicationId);
    FString SessionId();
    FDiscordUniqueID SenderId();
    FString PartyId();
    FDiscordUniqueID ParentApplicationId();
    FDiscordUniqueID MessageId();
    bool IsValid();
    void Init();
    void Drop();
    FDiscordUniqueID ChannelId();
    FDiscordUniqueID ApplicationId();
}; // Size: 0x38

class UDiscordActivityParty : public UObject
{

    void SetPrivacy(EDiscordActivityPartyPrivacy Privacy);
    void SetMaxSize(int32 MaxSize);
    void SetId(FString ID);
    void SetCurrentSize(int32 CurrentSize);
    EDiscordActivityPartyPrivacy Privacy();
    int32 MaxSize();
    void Init();
    FString ID();
    void Drop();
    int32 CurrentSize();
}; // Size: 0x38

class UDiscordActivitySecrets : public UObject
{

    void SetJoin(FString Join);
    FString Join();
    void Init();
    void Drop();
}; // Size: 0x38

class UDiscordActivityTimestamps : public UObject
{

    FDiscordUniqueID Start();
    void SetStart(FDiscordUniqueID Start);
    void SetEnd(FDiscordUniqueID End);
    void Init();
    FDiscordUniqueID End();
    void Drop();
}; // Size: 0x38

class UDiscordAdditionalContent : public UObject
{

    FString TypeToString(EDiscordAdditionalContentType Type);
    EDiscordAdditionalContentType Type();
    FString Title();
    void SetType(EDiscordAdditionalContentType Type);
    void SetTitle(FString Title);
    void SetCount(uint8 Count);
    void Init();
    bool Equals(class UDiscordAdditionalContent* rhs);
    void Drop();
    uint8 Count();
}; // Size: 0x38

class UDiscordAudioDevice : public UObject
{

    void SetName(FString Name);
    void SetIsDefault(bool IsDefault);
    void SetId(FString ID);
    FString Name();
    bool IsDefault();
    FString ID();
    bool Equals(class UDiscordAudioDevice* rhs);
    void Drop();
}; // Size: 0x38

class UDiscordAuthorizationArgs : public UObject
{

    FString State();
    void SetState(FString State);
    void SetScopes(FString Scopes);
    void SetNonce(FString Nonce);
    void SetIntegrationType(EDiscordIntegrationType IntegrationType);
    void SetCustomSchemeParam(FString CustomSchemeParam);
    void SetCodeChallenge(class UDiscordAuthorizationCodeChallenge* CodeChallenge);
    void SetClientId(FDiscordUniqueID ClientId);
    FString Scopes();
    FString Nonce();
    EDiscordIntegrationType IntegrationType();
    void Init();
    void Drop();
    FString CustomSchemeParam();
    class UDiscordAuthorizationCodeChallenge* CodeChallenge();
    FDiscordUniqueID ClientId();
}; // Size: 0x38

class UDiscordAuthorizationCodeChallenge : public UObject
{

    void SetMethod(EDiscordAuthenticationCodeChallengeMethod Method);
    void SetChallenge(FString Challenge);
    EDiscordAuthenticationCodeChallengeMethod Method();
    void Init();
    void Drop();
    FString Challenge();
}; // Size: 0x38

class UDiscordAuthorizationCodeVerifier : public UObject
{

    FString Verifier();
    void SetVerifier(FString Verifier);
    void SetChallenge(class UDiscordAuthorizationCodeChallenge* Challenge);
    void Drop();
    class UDiscordAuthorizationCodeChallenge* Challenge();
}; // Size: 0x38

class UDiscordCall : public UObject
{

    FString StatusToString(EDiscordCallStatus Type);
    void SetVadThreshold(bool Automatic, float Threshold);
    void SetStatusChangedCallback(const FSetStatusChangedCallbackCb& cb);
    void SetSpeakingStatusChangedCallback(const FSetSpeakingStatusChangedCallbackCb& cb);
    void SetSelfMute(bool Mute);
    void SetSelfDeaf(bool deaf);
    void SetPTTReleaseDelay(int32 releaseDelayMs);
    void SetPTTActive(bool Active);
    void SetParticipantVolume(FDiscordUniqueID UserId, float Volume);
    void SetParticipantChangedCallback(const FSetParticipantChangedCallbackCb& cb);
    void SetOnVoiceStateChangedCallback(const FSetOnVoiceStateChangedCallbackCb& cb);
    void SetLocalMute(FDiscordUniqueID UserId, bool Mute);
    void SetAudioMode(EDiscordAudioModeType audioMode);
    class UDiscordVoiceStateHandle* GetVoiceStateHandle(FDiscordUniqueID UserId);
    class UDiscordVADThresholdSettings* GetVADThreshold();
    EDiscordCallStatus GetStatus();
    bool GetSelfMute();
    bool GetSelfDeaf();
    int32 GetPTTReleaseDelay();
    bool GetPTTActive();
    float GetParticipantVolume(FDiscordUniqueID UserId);
    TArray<FDiscordUniqueID> GetParticipants();
    bool GetLocalMute(FDiscordUniqueID UserId);
    FDiscordUniqueID GetGuildId();
    FDiscordUniqueID GetChannelId();
    EDiscordAudioModeType GetAudioMode();
    FString ErrorToString(EDiscordCallError Type);
    void Drop();
}; // Size: 0x48

class UDiscordCallInfoHandle : public UObject
{

    FDiscordUniqueID GuildId();
    class UDiscordVoiceStateHandle* GetVoiceStateHandle(FDiscordUniqueID UserId);
    TArray<FDiscordUniqueID> GetParticipants();
    void Drop();
    FDiscordUniqueID ChannelId();
}; // Size: 0x38

class UDiscordChannelHandle : public UObject
{

    EDiscordChannelType Type();
    TArray<FDiscordUniqueID> Recipients();
    FString Name();
    FDiscordUniqueID ID();
    void Drop();
}; // Size: 0x38

class UDiscordClient : public UObject
{

    void UpdateToken(EDiscordAuthorizationTokenType tokenType, const FString& Token, const FUpdateTokenCallback& Callback);
    void UpdateRichPresence(class UDiscordActivity* activity, const FUpdateRichPresenceCb& cb);
    void UpdateProvisionalAccountDisplayName(const FString& Name, const FUpdateProvisionalAccountDisplayNameCallback& Callback);
    void UnmergeIntoProvisionalAccount(FDiscordUniqueID ApplicationId, EDiscordAuthenticationExternalAuthType externalAuthType, const FString& externalAuthToken, const FUnmergeIntoProvisionalAccountCallback& Callback);
    void UnlinkChannelFromLobby(FDiscordUniqueID LobbyId, const FUnlinkChannelFromLobbyCallback& Callback);
    void UnblockUser(FDiscordUniqueID UserId, const FUnblockUserCb& cb);
    FString ThreadToString(EDiscordClientThread Type);
    FString StatusToString(EDiscordClientStatus Type);
    class UDiscordCall* StartCallWithAudioCallbacks(FDiscordUniqueID LobbyId, const FStartCallWithAudioCallbacksReceivedCb& receivedCb, const FStartCallWithAudioCallbacksCapturedCb& capturedCb);
    class UDiscordCall* StartCall(FDiscordUniqueID ChannelId);
    bool ShowAudioRoutePicker();
    void SetVoiceParticipantChangedCallback(const FSetVoiceParticipantChangedCallbackCb& cb);
    void SetVoiceLogDir(const FString& Path, EDiscordLoggingSeverity minSeverity);
    void SetUserUpdatedCallback(const FSetUserUpdatedCallbackCb& cb);
    void SetTokenExpirationCallback(const FSetTokenExpirationCallbackCallback& Callback);
    void SetThreadPriority(EDiscordClientThread thread, int32 Priority);
    void SetStatusChangedCallback(const FSetStatusChangedCallbackCb& cb);
    bool SetSpeakerMode(bool speakerMode);
    void SetShowingChat(bool showingChat);
    void SetSelfMuteAll(bool Mute);
    void SetSelfDeafAll(bool deaf);
    void SetRelationshipGroupsUpdatedCallback(const FSetRelationshipGroupsUpdatedCallbackCb& cb);
    void SetRelationshipDeletedCallback(const FSetRelationshipDeletedCallbackCb& cb);
    void SetRelationshipCreatedCallback(const FSetRelationshipCreatedCallbackCb& cb);
    void SetOutputVolume(float outputVolume);
    void SetOutputDevice(const FString& DeviceID, const FSetOutputDeviceCb& cb);
    void SetOpusHardwareCoding(bool encode, bool decode);
    void SetOnlineStatus(EDiscordStatusType Status, const FSetOnlineStatusCallback& Callback);
    void SetNoiseSuppression(bool on);
    void SetNoiseCancellation(bool on);
    void SetNoAudioInputThreshold(float dBFSThreshold);
    void SetNoAudioInputCallback(const FSetNoAudioInputCallbackCallback& Callback);
    void SetMessageUpdatedCallback(const FSetMessageUpdatedCallbackCb& cb);
    void SetMessageDeletedCallback(const FSetMessageDeletedCallbackCb& cb);
    void SetMessageCreatedCallback(const FSetMessageCreatedCallbackCb& cb);
    bool SetLogDir(const FString& Path, EDiscordLoggingSeverity minSeverity);
    void SetLobbyUpdatedCallback(const FSetLobbyUpdatedCallbackCb& cb);
    void SetLobbyMemberUpdatedCallback(const FSetLobbyMemberUpdatedCallbackCb& cb);
    void SetLobbyMemberRemovedCallback(const FSetLobbyMemberRemovedCallbackCb& cb);
    void SetLobbyMemberAddedCallback(const FSetLobbyMemberAddedCallbackCb& cb);
    void SetLobbyDeletedCallback(const FSetLobbyDeletedCallbackCb& cb);
    void SetLobbyCreatedCallback(const FSetLobbyCreatedCallbackCb& cb);
    void SetInputVolume(float inputVolume);
    void SetInputDevice(const FString& DeviceID, const FSetInputDeviceCb& cb);
    void SetHttpRequestTimeout(int32 httpTimeoutInMilliseconds);
    void SetGameWindowPid(int32 pid);
    void SetEngineManagedAudioSession(bool isEngineManaged);
    void SetEchoCancellation(bool on);
    void SetDeviceChangeCallback(const FSetDeviceChangeCallbackCallback& Callback);
    void SetAutomaticGainControl(bool on);
    void SetAuthorizeDeviceScreenClosedCallback(const FSetAuthorizeDeviceScreenClosedCallbackCb& cb);
    void SetApplicationId(FDiscordUniqueID ApplicationId);
    void SetAecDump(bool on);
    void SetActivityJoinWithApplicationCallback(const FSetActivityJoinWithApplicationCallbackCb& cb);
    void SetActivityJoinCallback(const FSetActivityJoinCallbackCb& cb);
    void SetActivityInviteUpdatedCallback(const FSetActivityInviteUpdatedCallbackCb& cb);
    void SetActivityInviteCreatedCallback(const FSetActivityInviteCreatedCallbackCb& cb);
    void SendUserMessageWithMetadata(FDiscordUniqueID RecipientId, const FString& Content, const TMap<class FString, class FString>& Metadata, const FSendUserMessageWithMetadataCb& cb);
    void SendUserMessage(FDiscordUniqueID RecipientId, const FString& Content, const FSendUserMessageCb& cb);
    void SendLobbyMessageWithMetadata(FDiscordUniqueID LobbyId, const FString& Content, const TMap<class FString, class FString>& Metadata, const FSendLobbyMessageWithMetadataCb& cb);
    void SendLobbyMessage(FDiscordUniqueID LobbyId, const FString& Content, const FSendLobbyMessageCb& cb);
    void SendGameFriendRequestById(FDiscordUniqueID UserId, const FSendGameFriendRequestByIdCb& cb);
    void SendGameFriendRequest(const FString& Username, const FSendGameFriendRequestCb& cb);
    void SendDiscordFriendRequestById(FDiscordUniqueID UserId, const FSendDiscordFriendRequestByIdCb& cb);
    void SendDiscordFriendRequest(const FString& Username, const FSendDiscordFriendRequestCb& cb);
    void SendActivityJoinRequestReply(class UDiscordActivityInvite* Invite, const FSendActivityJoinRequestReplyCb& cb);
    void SendActivityJoinRequest(FDiscordUniqueID UserId, const FSendActivityJoinRequestCb& cb);
    void SendActivityInvite(FDiscordUniqueID UserId, const FString& Content, const FSendActivityInviteCb& cb);
    TArray<class UDiscordUserHandle*> SearchFriendsByUsername(const FString& searchStr);
    void RevokeToken(FDiscordUniqueID ApplicationId, const FString& Token, const FRevokeTokenCallback& Callback);
    void RemoveGameFriend(FDiscordUniqueID UserId, const FRemoveGameFriendCb& cb);
    void RemoveDiscordAndGameFriend(FDiscordUniqueID UserId, const FRemoveDiscordAndGameFriendCb& cb);
    void RemoveAuthorizeRequestCallback();
    void RejectGameFriendRequest(FDiscordUniqueID UserId, const FRejectGameFriendRequestCb& cb);
    void RejectDiscordFriendRequest(FDiscordUniqueID UserId, const FRejectDiscordFriendRequestCb& cb);
    bool RegisterLaunchSteamApplication(FDiscordUniqueID ApplicationId, int32 steamAppId);
    bool RegisterLaunchCommand(FDiscordUniqueID ApplicationId, const FString& Command);
    void RegisterAuthorizeRequestCallback(const FRegisterAuthorizeRequestCallbackCallback& Callback);
    void RefreshToken(FDiscordUniqueID ApplicationId, const FString& RefreshToken, const FRefreshTokenCallback& Callback);
    void ProvisionalUserMergeCompleted(bool Success);
    void OpenMessageInDiscord(FDiscordUniqueID MessageId, const FOpenMessageInDiscordProvisionalUserMergeRequiredCallback& provisionalUserMergeRequiredCallback, const FOpenMessageInDiscordCallback& Callback);
    void OpenConnectedGamesSettingsInDiscord(const FOpenConnectedGamesSettingsInDiscordCallback& Callback);
    void OpenAuthorizeDeviceScreen(FDiscordUniqueID ClientId, const FString& userCode);
    void LinkChannelToLobby(FDiscordUniqueID LobbyId, FDiscordUniqueID ChannelId, const FLinkChannelToLobbyCallback& Callback);
    void LeaveLobby(FDiscordUniqueID LobbyId, const FLeaveLobbyCallback& Callback);
    void JoinLinkedLobbyGuild(FDiscordUniqueID LobbyId, const FJoinLinkedLobbyGuildProvisionalUserMergeRequiredCallback& provisionalUserMergeRequiredCallback, const FJoinLinkedLobbyGuildCallback& Callback);
    void IsDiscordAppInstalled(const FIsDiscordAppInstalledCallback& Callback);
    bool IsAuthenticated();
    void InitWithOptions(class UDiscordClientCreateOptions* Options);
    void InitWithBases(const FString& ApiBase, const FString& WebBase);
    void Init();
    int32 GetVersionPatch();
    int32 GetVersionMinor();
    int32 GetVersionMajor();
    FString GetVersionHash();
    void GetUserMessagesWithLimit(FDiscordUniqueID RecipientId, int32 Limit, const FGetUserMessagesWithLimitCb& cb);
    void GetUserMessageSummaries(const FGetUserMessageSummariesCb& cb);
    void GetUserGuilds(const FGetUserGuildsCb& cb);
    class UDiscordUserHandle* GetUser(FDiscordUniqueID UserId);
    void GetTokenFromProvisionalMerge(FDiscordUniqueID ApplicationId, const FString& code, const FString& codeVerifier, const FString& redirectUri, EDiscordAuthenticationExternalAuthType externalAuthType, const FString& externalAuthToken, const FGetTokenFromProvisionalMergeCallback& Callback);
    void GetTokenFromDeviceProvisionalMerge(class UDiscordDeviceAuthorizationArgs* Args, EDiscordAuthenticationExternalAuthType externalAuthType, const FString& externalAuthToken, const FGetTokenFromDeviceProvisionalMergeCallback& Callback);
    void GetTokenFromDevice(class UDiscordDeviceAuthorizationArgs* Args, const FGetTokenFromDeviceCallback& Callback);
    void GetToken(FDiscordUniqueID ApplicationId, const FString& code, const FString& codeVerifier, const FString& redirectUri, const FGetTokenCallback& Callback);
    EDiscordClientStatus GetStatus();
    bool GetSelfMuteAll();
    bool GetSelfDeafAll();
    TArray<class UDiscordRelationshipHandle*> GetRelationshipsByGroup(EDiscordRelationshipGroupType GroupType);
    TArray<class UDiscordRelationshipHandle*> GetRelationships();
    class UDiscordRelationshipHandle* GetRelationshipHandle(FDiscordUniqueID UserId);
    void GetProvisionalToken(FDiscordUniqueID ApplicationId, EDiscordAuthenticationExternalAuthType externalAuthType, const FString& externalAuthToken, const FGetProvisionalTokenCallback& Callback);
    float GetOutputVolume();
    void GetOutputDevices(const FGetOutputDevicesCb& cb);
    class UDiscordMessageHandle* GetMessageHandle(FDiscordUniqueID MessageId);
    void GetLobbyMessagesWithLimit(FDiscordUniqueID LobbyId, int32 Limit, const FGetLobbyMessagesWithLimitCb& cb);
    TArray<FDiscordUniqueID> GetLobbyIds();
    class UDiscordLobbyHandle* GetLobbyHandle(FDiscordUniqueID LobbyId);
    float GetInputVolume();
    void GetInputDevices(const FGetInputDevicesCb& cb);
    void GetGuildChannels(FDiscordUniqueID GuildId, const FGetGuildChannelsCb& cb);
    void GetDiscordClientConnectedUser(FDiscordUniqueID ApplicationId, const FGetDiscordClientConnectedUserCallback& Callback);
    FString GetDefaultPresenceScopes();
    FString GetDefaultCommunicationScopes();
    FString GetDefaultAudioDeviceId();
    class UDiscordUserHandle* GetCurrentUserV2();
    class UDiscordUserHandle* GetCurrentUser();
    void GetCurrentOutputDevice(const FGetCurrentOutputDeviceCb& cb);
    void GetCurrentInputDevice(const FGetCurrentInputDeviceCb& cb);
    class UDiscordChannelHandle* GetChannelHandle(FDiscordUniqueID ChannelId);
    TArray<class UDiscordCall*> GetCalls();
    class UDiscordCall* GetCall(FDiscordUniqueID ChannelId);
    FDiscordUniqueID GetApplicationId();
    void FetchCurrentUser(EDiscordAuthorizationTokenType tokenType, const FString& Token, const FFetchCurrentUserCallback& Callback);
    void ExchangeChildToken(const FString& parentApplicationToken, FDiscordUniqueID childApplicationId, const FExchangeChildTokenCallback& Callback);
    FString ErrorToString(EDiscordClientError Type);
    void EndCalls(const FEndCallsCallback& Callback);
    void EndCall(FDiscordUniqueID ChannelId, const FEndCallCallback& Callback);
    void EditUserMessage(FDiscordUniqueID RecipientId, FDiscordUniqueID MessageId, const FString& Content, const FEditUserMessageCb& cb);
    void Drop();
    void Disconnect();
    void DeleteUserMessage(FDiscordUniqueID RecipientId, FDiscordUniqueID MessageId, const FDeleteUserMessageCb& cb);
    void CreateOrJoinLobbyWithMetadata(const FString& secret, const TMap<class FString, class FString>& lobbyMetadata, const TMap<class FString, class FString>& memberMetadata, const FCreateOrJoinLobbyWithMetadataCallback& Callback);
    void CreateOrJoinLobby(const FString& secret, const FCreateOrJoinLobbyCallback& Callback);
    class UDiscordAuthorizationCodeVerifier* CreateAuthorizationCodeVerifier();
    void Connect();
    void CloseAuthorizeDeviceScreen();
    void ClearRichPresence();
    bool CanOpenMessageInDiscord(FDiscordUniqueID MessageId);
    void CancelGameFriendRequest(FDiscordUniqueID UserId, const FCancelGameFriendRequestCb& cb);
    void CancelDiscordFriendRequest(FDiscordUniqueID UserId, const FCancelDiscordFriendRequestCb& cb);
    void BlockUser(FDiscordUniqueID UserId, const FBlockUserCb& cb);
    void Authorize(class UDiscordAuthorizationArgs* Args, const FAuthorizeCallback& Callback);
    void AddVoiceLogCallback(const FAddVoiceLogCallbackCallback& Callback, EDiscordLoggingSeverity minSeverity);
    void AddLogCallback(const FAddLogCallbackCallback& Callback, EDiscordLoggingSeverity minSeverity);
    void AcceptGameFriendRequest(FDiscordUniqueID UserId, const FAcceptGameFriendRequestCb& cb);
    void AcceptDiscordFriendRequest(FDiscordUniqueID UserId, const FAcceptDiscordFriendRequestCb& cb);
    void AcceptActivityInvite(class UDiscordActivityInvite* Invite, const FAcceptActivityInviteCb& cb);
    void AbortGetTokenFromDevice();
    void AbortAuthorize();
}; // Size: 0x38

class UDiscordClientCreateOptions : public UObject
{

    FString WebBase();
    void SetWebBase(FString WebBase);
    void SetExperimentalAudioSystem(EDiscordAudioSystem ExperimentalAudioSystem);
    void SetExperimentalAndroidPreventCommsForBluetooth(bool ExperimentalAndroidPreventCommsForBluetooth);
    void SetCpuAffinityMask(FDiscordUniqueID CpuAffinityMask);
    void SetApiBase(FString ApiBase);
    void Init();
    EDiscordAudioSystem ExperimentalAudioSystem();
    bool ExperimentalAndroidPreventCommsForBluetooth();
    void Drop();
    FDiscordUniqueID CpuAffinityMask();
    FString ApiBase();
}; // Size: 0x38

class UDiscordClientResult : public UObject
{

    EDiscordErrorType Type();
    FString ToString();
    bool Successful();
    int32 Status();
    void SetType(EDiscordErrorType Type);
    void SetSuccessful(bool Successful);
    void SetStatus(int32 Status);
    void SetRetryAfter(float RetryAfter);
    void SetRetryable(bool Retryable);
    void SetResponseBody(FString ResponseBody);
    void SetErrorCode(int32 ErrorCode);
    void SetError(FString Error);
    float RetryAfter();
    bool Retryable();
    FString ResponseBody();
    int32 ErrorCode();
    FString Error();
    void Drop();
}; // Size: 0x38

class UDiscordDeviceAuthorizationArgs : public UObject
{

    void SetScopes(FString Scopes);
    void SetClientId(FDiscordUniqueID ClientId);
    FString Scopes();
    void Init();
    void Drop();
    FDiscordUniqueID ClientId();
}; // Size: 0x38

class UDiscordGuildChannel : public UObject
{

    EDiscordChannelType Type();
    void SetType(EDiscordChannelType Type);
    void SetPosition(int32 Position);
    void SetParentId(FDiscordUniqueID ParentId);
    void SetName(FString Name);
    void SetLinkedLobby(class UDiscordLinkedLobby* LinkedLobby);
    void SetIsViewableAndWriteableByAllMembers(bool IsViewableAndWriteableByAllMembers);
    void SetIsLinkable(bool IsLinkable);
    void SetId(FDiscordUniqueID ID);
    int32 Position();
    FDiscordUniqueID ParentId();
    FString Name();
    class UDiscordLinkedLobby* LinkedLobby();
    bool IsViewableAndWriteableByAllMembers();
    bool IsLinkable();
    FDiscordUniqueID ID();
    void Drop();
}; // Size: 0x38

class UDiscordGuildMinimal : public UObject
{

    void SetName(FString Name);
    void SetId(FDiscordUniqueID ID);
    FString Name();
    FDiscordUniqueID ID();
    void Drop();
}; // Size: 0x38

class UDiscordLinkedChannel : public UObject
{

    void SetName(FString Name);
    void SetId(FDiscordUniqueID ID);
    void SetGuildId(FDiscordUniqueID GuildId);
    FString Name();
    FDiscordUniqueID ID();
    FDiscordUniqueID GuildId();
    void Drop();
}; // Size: 0x38

class UDiscordLinkedLobby : public UObject
{

    void SetLobbyId(FDiscordUniqueID LobbyId);
    void SetApplicationId(FDiscordUniqueID ApplicationId);
    FDiscordUniqueID LobbyId();
    void Init();
    void Drop();
    FDiscordUniqueID ApplicationId();
}; // Size: 0x38

class UDiscordLobbyHandle : public UObject
{

    TMap<class FString, class FString> Metadata();
    TArray<class UDiscordLobbyMemberHandle*> LobbyMembers();
    TArray<FDiscordUniqueID> LobbyMemberIds();
    class UDiscordLinkedChannel* LinkedChannel();
    FDiscordUniqueID ID();
    class UDiscordLobbyMemberHandle* GetLobbyMemberHandle(FDiscordUniqueID memberId);
    class UDiscordCallInfoHandle* GetCallInfoHandle();
    void Drop();
}; // Size: 0x38

class UDiscordLobbyMemberHandle : public UObject
{

    class UDiscordUserHandle* User();
    TMap<class FString, class FString> Metadata();
    FDiscordUniqueID ID();
    void Drop();
    bool Connected();
    bool CanLinkLobby();
}; // Size: 0x38

class UDiscordLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
    class UDiscordClient* Client;                                                     // 0x0030 (size: 0x8)
    FDiscordLocalPlayerSubsystemOnStatusChanged OnStatusChanged;                      // 0x0038 (size: 0x10)
    void DiscordClientOnStatusChangedMulticast(EDiscordClientStatus Status, EDiscordClientError Error, int32 errorDetail);
    FDiscordLocalPlayerSubsystemOnActivityInvite OnActivityInvite;                    // 0x0048 (size: 0x10)
    void DiscordClientActivityInviteCallbackMulticast(class UDiscordActivityInvite* Invite);
    FDiscordLocalPlayerSubsystemOnActivityJoin OnActivityJoin;                        // 0x0058 (size: 0x10)
    void DiscordClientActivityJoinCallbackMulticast(FString joinSecret);
    FDiscordLocalPlayerSubsystemOnLobbyCreated OnLobbyCreated;                        // 0x0068 (size: 0x10)
    void DiscordClientLobbyCreatedCallbackMulticast(FDiscordUniqueID LobbyId);
    FDiscordLocalPlayerSubsystemOnLobbyUpdated OnLobbyUpdated;                        // 0x0078 (size: 0x10)
    void DiscordClientLobbyUpdatedCallbackMulticast(FDiscordUniqueID LobbyId);
    FDiscordLocalPlayerSubsystemOnLobbyDeleted OnLobbyDeleted;                        // 0x0088 (size: 0x10)
    void DiscordClientLobbyDeletedCallbackMulticast(FDiscordUniqueID LobbyId);
    FDiscordLocalPlayerSubsystemOnLobbyMemberAdded OnLobbyMemberAdded;                // 0x0098 (size: 0x10)
    void DiscordClientLobbyMemberAddedCallbackMulticast(FDiscordUniqueID LobbyId, FDiscordUniqueID memberId);
    FDiscordLocalPlayerSubsystemOnLobbyMemberUpdated OnLobbyMemberUpdated;            // 0x00A8 (size: 0x10)
    void DiscordClientLobbyMemberUpdatedCallbackMulticast(FDiscordUniqueID LobbyId, FDiscordUniqueID memberId);
    FDiscordLocalPlayerSubsystemOnLobbyMemberRemoved OnLobbyMemberRemoved;            // 0x00B8 (size: 0x10)
    void DiscordClientLobbyMemberRemovedCallbackMulticast(FDiscordUniqueID LobbyId, FDiscordUniqueID memberId);
    FDiscordLocalPlayerSubsystemOnMessageCreated OnMessageCreated;                    // 0x00C8 (size: 0x10)
    void DiscordClientMessageCreatedCallbackMulticast(FDiscordUniqueID MessageId);
    FDiscordLocalPlayerSubsystemOnMessageUpdated OnMessageUpdated;                    // 0x00D8 (size: 0x10)
    void DiscordClientMessageUpdatedCallbackMulticast(FDiscordUniqueID MessageId);
    FDiscordLocalPlayerSubsystemOnMessageDeleted OnMessageDeleted;                    // 0x00E8 (size: 0x10)
    void DiscordClientMessageDeletedCallbackMulticast(FDiscordUniqueID MessageId, FDiscordUniqueID ChannelId);
    FDiscordLocalPlayerSubsystemOnNoAudioInput OnNoAudioInput;                        // 0x00F8 (size: 0x10)
    void DiscordClientNoAudioInputCallbackMulticast(bool inputDetected);
    FDiscordLocalPlayerSubsystemOnRelationshipCreated OnRelationshipCreated;          // 0x0108 (size: 0x10)
    void DiscordClientRelationshipCreatedCallbackMulticast(FDiscordUniqueID UserId, bool isDiscordRelationshipUpdate);
    FDiscordLocalPlayerSubsystemOnRelationshipDeleted OnRelationshipDeleted;          // 0x0118 (size: 0x10)
    void DiscordClientRelationshipCreatedCallbackMulticast(FDiscordUniqueID UserId, bool isDiscordRelationshipUpdate);
    FDiscordLocalPlayerSubsystemOnUserUpdated OnUserUpdated;                          // 0x0128 (size: 0x10)
    void DiscordClientUserUpdatedCallbackMulticast(FDiscordUniqueID UserId);

    void Disconnect();
    void Connect(const FString& Token);
}; // Size: 0x148

class UDiscordMessageHandle : public UObject
{

    FDiscordUniqueID SentTimestamp();
    bool SentFromGame();
    FDiscordUniqueID RecipientId();
    class UDiscordUserHandle* Recipient();
    FString RawContent();
    TMap<class FString, class FString> ModerationMetadata();
    TMap<class FString, class FString> Metadata();
    class UDiscordLobbyHandle* Lobby();
    FDiscordUniqueID ID();
    FDiscordUniqueID EditedTimestamp();
    void Drop();
    EDiscordDisclosureTypes DisclosureType();
    FString Content();
    FDiscordUniqueID ChannelId();
    class UDiscordChannelHandle* Channel();
    FDiscordUniqueID AuthorId();
    class UDiscordUserHandle* Author();
    FDiscordUniqueID ApplicationId();
    class UDiscordAdditionalContent* AdditionalContent();
}; // Size: 0x38

class UDiscordPartnerSDKSettings : public UDeveloperSettings
{
    FString ApplicationIdString;                                                      // 0x0038 (size: 0x10)

    FString GetApplicationIdString();
    int64 GetApplicationIdInt64();
    FDiscordUniqueID GetApplicationId();
}; // Size: 0x48

class UDiscordRelationshipHandle : public UObject
{

    class UDiscordUserHandle* User();
    bool IsSpamRequest();
    FDiscordUniqueID ID();
    EDiscordRelationshipType GameRelationshipType();
    void Drop();
    EDiscordRelationshipType DiscordRelationshipType();
}; // Size: 0x38

class UDiscordUniqueIDFunctionLibrary : public UBlueprintFunctionLibrary
{

    void Parse_StringToDiscordUniqueID(FString DiscordUniqueIDString, FDiscordUniqueID& OutUniqueID, bool& Success);
    bool NotEqual_DiscordUniqueIDDiscordUniqueID(const FDiscordUniqueID& Left, const FDiscordUniqueID& Right);
    bool EqualEqual_DiscordUniqueIDDiscordUniqueID(const FDiscordUniqueID& Left, const FDiscordUniqueID& Right);
    FString Conv_DiscordUniqueIDToString(const FDiscordUniqueID& InUniqueId);
}; // Size: 0x28

class UDiscordUserApplicationProfileHandle : public UObject
{

    FString Username();
    EDiscordExternalIdentityProviderType ProviderType();
    FString ProviderIssuedUserId();
    FString ProviderId();
    FString Metadata();
    void Drop();
    FString AvatarHash();
}; // Size: 0x38

class UDiscordUserHandle : public UObject
{

    FString Username();
    TArray<class UDiscordUserApplicationProfileHandle*> UserApplicationProfiles();
    EDiscordStatusType Status();
    class UDiscordRelationshipHandle* Relationship();
    bool IsProvisional();
    FDiscordUniqueID ID();
    FString GlobalName();
    class UDiscordActivity* GameActivity();
    void Drop();
    FString DisplayName();
    FString AvatarUrl(EDiscordUserHandleAvatarType animatedType, EDiscordUserHandleAvatarType staticType);
    FString AvatarTypeToString(EDiscordUserHandleAvatarType Type);
    FString Avatar();
}; // Size: 0x38

class UDiscordUserMessageSummary : public UObject
{

    FDiscordUniqueID UserId();
    FDiscordUniqueID LastMessageId();
    void Drop();
}; // Size: 0x38

class UDiscordVADThresholdSettings : public UObject
{

    float VadThreshold();
    void SetVadThreshold(float VadThreshold);
    void SetAutomatic(bool Automatic);
    void Drop();
    bool Automatic();
}; // Size: 0x38

class UDiscordVoiceStateHandle : public UObject
{

    bool SelfMute();
    bool SelfDeaf();
    void Drop();
}; // Size: 0x38

#endif
