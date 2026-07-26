enum class EFlowFinishPolicy {
    Keep = 0,
    Abort = 1,
    EFlowFinishPolicy_MAX = 2,
};

enum class EFlowLogVerbosity {
    Error = 0,
    Warning = 1,
    Display = 2,
    Log = 3,
    Verbose = 4,
    VeryVerbose = 5,
    EFlowLogVerbosity_MAX = 6,
};

enum class EFlowNetMode {
    Any = 0,
    Authority = 1,
    ClientOnly = 2,
    ServerOnly = 3,
    SinglePlayerOnly = 4,
    EFlowNetMode_MAX = 5,
};

enum class EFlowNodeState {
    NeverActivated = 0,
    Active = 1,
    Completed = 2,
    Aborted = 3,
    EFlowNodeState_MAX = 4,
};

enum class EFlowOnScreenMessageType {
    Temporary = 0,
    Permanent = 1,
    EFlowOnScreenMessageType_MAX = 2,
};

enum class EFlowPinActivationType {
    Default = 0,
    Forced = 1,
    PassThrough = 2,
    EFlowPinActivationType_MAX = 3,
};

enum class EFlowSignalMode {
    Enabled = 0,
    Disabled = 1,
    PassThrough = 2,
    EFlowSignalMode_MAX = 3,
};

enum class EFlowTagContainerMatchType {
    HasAny = 0,
    HasAnyExact = 1,
    HasAll = 2,
    HasAllExact = 3,
    EFlowTagContainerMatchType_MAX = 4,
};

