#ifndef UE4SS_SDK_BP_DungeonEntrance_Yakushima_HPP
#define UE4SS_SDK_BP_DungeonEntrance_Yakushima_HPP

class ABP_DungeonEntrance_Yakushima_C : public ABP_DungeonEntrance_Base_C
{
    class UArrowComponent* DeadItemDropPoint;                                         // 0x02D0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x02D8 (size: 0x8)

    void GetInteractWidget(class UPalUserWidget*& createdWidget);
}; // Size: 0x2E0

#endif
