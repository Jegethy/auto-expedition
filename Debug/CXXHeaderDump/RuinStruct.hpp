#ifndef UE4SS_SDK_RuinStruct_HPP
#define UE4SS_SDK_RuinStruct_HPP

struct FRuinStruct
{
    FVector Location_7_77CCF9084001FA5D1B3AC1ABE4AB2BE7;                              // 0x0000 (size: 0x18)
    class UCollectableWidget_C* Widget_16_DFA503C24EC7DF64BC352795C4DDD93A;           // 0x0018 (size: 0x8)
    TEnumAsByte<E_RuinPuzzleType::Type> PuzzleType_15_2BC294F5442DBF6E66950E806BC87DED; // 0x0020 (size: 0x1)
    bool IsSolved_10_DE0B172D4F87594BF5A109B11DA55F0F;                                // 0x0021 (size: 0x1)
    bool ShouldBeHidden_11_2CF86DE94DBACD0FD48C72A6FB2AC5BA;                          // 0x0022 (size: 0x1)
    TArray<FGuid> GimmickIds_14_0CFE8BD649C3D7BC2A645DA517AAD9A4;                     // 0x0028 (size: 0x10)

}; // Size: 0x38

#endif
