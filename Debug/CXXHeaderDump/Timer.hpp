#ifndef UE4SS_SDK_Timer_HPP
#define UE4SS_SDK_Timer_HPP

class UTimer_C : public UObject
{
    double _LimitSeconds;                                                             // 0x0028 (size: 0x8)
    double _TrackedSeconds;                                                           // 0x0030 (size: 0x8)

    void LimitedTick(double DeltaSeconds, bool& ShouldTick);
    void Setup(double LimitSeconds);
}; // Size: 0x38

#endif
