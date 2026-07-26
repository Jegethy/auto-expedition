#ifndef UE4SS_SDK_BP_PalTextBlock_HPP
#define UE4SS_SDK_BP_PalTextBlock_HPP

class UBP_PalTextBlock_C : public UPalTextBlockBase
{
    TMap<class UDataTable*, class EPalLocalizeTextCategory> CategryMap_ForViewportGameDebug; // 0x03B0 (size: 0x50)

    bool BP_ReflectText();
}; // Size: 0x400

#endif
