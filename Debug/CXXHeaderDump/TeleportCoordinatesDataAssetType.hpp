#ifndef UE4SS_SDK_TeleportCoordinatesDataAssetType_HPP
#define UE4SS_SDK_TeleportCoordinatesDataAssetType_HPP

class UTeleportCoordinatesDataAssetType_C : public UPrimaryDataAsset
{
    TArray<FVector2D> Coordinates;                                                    // 0x0030 (size: 0x10)

}; // Size: 0x40

#endif
