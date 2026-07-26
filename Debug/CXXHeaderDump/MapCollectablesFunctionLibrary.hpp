#ifndef UE4SS_SDK_MapCollectablesFunctionLibrary_HPP
#define UE4SS_SDK_MapCollectablesFunctionLibrary_HPP

class UMapCollectablesFunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void GetRelicTooltipText(EPalRelicType RelicType, class UObject* WorldContextObject, class UObject* __WorldContext, FText& TitleText, FText& SubtitleText);
    void GetVectorDistance(FVector VectorA, FVector VectorB, bool IgnoreZ, class UObject* __WorldContext, double& Distance);
    void SortActorsByPlayerDistance(class UObject* WorldContext, TArray<class AActor*>& Actors, bool IgnoreZ, int32 SelectTop, class UObject* __WorldContext, TArray<class AActor*>& SortedActors);
    void GetMinimumResourceWorldZ(class UObject* __WorldContext, double& MinimumWorldZ);
    void MapCoordToWorldLocation(FVector2D Map Coord, double ZValue, class UObject* __WorldContext, FVector& WorldLocation);
    void GetPreloadedData(class UPreloadedLocationsDataAssetType_C* AssetToLoad, class UObject* __WorldContext, class UPreloadedLocationsDataAssetType_C*& LoadedAsset);
    void UnwrapNamedVectorArray(TArray<FNamedVector>& NamedVectors, class UObject* __WorldContext, TArray<FVector>& Vectors);
    void MergeVectorArrays(TArray<FVector>& VectorsA, TArray<FVector>& VectorsB, class UObject* __WorldContext, TArray<FVector>& MergedVectors);
    void CleanJSONString(FString UncleanJSONString, class UObject* __WorldContext, FString& CleanJSONString);
    void VectorArrayToJSON(TArray<FVector>& VectorArray, FString RootName, class UObject* __WorldContext, FString& JsonString);
    void SortVectorArray(TArray<FVector>& UnsortedArray, class UObject* __WorldContext, TArray<FVector>& SortedArray);
    void CompareVectors(FVector VectorA, FVector VectorB, class UObject* __WorldContext, int32& Comparison);
    void GetIconImage(FString ImageFilename, class UTexture2D* DefaultTexture, class UObject* __WorldContext, class UTexture2D*& Texture);
    void Get All Widget Children Of Class(class UPanelWidget* Container, TSubclassOf<class UWidget> WidgetClass, class UObject* __WorldContext, TArray<class UWidget*>& ChildrenOfClass);
    void FilterActorsNearPlayer(class UObject* WorldContext, TArray<class AActor*>& Actors, double Distance, class UObject* __WorldContext, TArray<class AActor*>& FilteredActors);
    void FilterActorNearPlayer(class UObject* WorldContext, class AActor* Actor, double Distance, class UObject* __WorldContext, bool& IsNear);
    void GetActorsLocationsAsArray(TArray<class AActor*>& Actors, class UObject* __WorldContext, TArray<FVector>& Locations);
    void GetActorsLocationsAsString(TArray<class AActor*>& Actors, class UObject* __WorldContext, FString& ClassPaths);
    void MakeActorsPink(TArray<class AActor*>& Actors, class UObject* __WorldContext);
    void MakeActorPink(class AActor* Actor, class UObject* __WorldContext);
    void GetAllActorsWithName(FString Name, class UObject* __WorldContext, TArray<class AActor*>& OutActors);
    void GetCollectablesNeedInitializing(FCollectablesStateStruct State, FCollectablesActionStruct action, class UObject* __WorldContext, FCollectablesActionStruct& NeedInitializing);
    void GetSettingFloatValue(FString FieldName, class UObject* __WorldContext, double& LiveValue, bool& Successful);
    void SetSettingStringValue(FString FieldName, FString Value, class UObject* __WorldContext, bool& Success);
    void GetSettingStringValue(FString FieldName, class UObject* __WorldContext, FString& LiveValue, bool& Successful);
    void SetSettingBoolValue(FString FieldName, bool Value, class UObject* __WorldContext, bool& Success);
    void GetSettingBoolValue(FString FieldName, class UObject* __WorldContext, bool& LiveValue, bool& Successful);
    void GetObjectsClassPaths(TArray<class UObject*>& Objects, class UObject* __WorldContext, FString& ClassPaths);
    void GetObjectClassPath(class UObject* Object, class UObject* __WorldContext, FString& ClassPath);
    void GetOceanRelicLocation(class UObject* __WorldContext, FVector& OceanRelicLocation);
    void GetHiddenRelic2TeleportLocation(class UObject* __WorldContext, FVector& HiddenRelic2TeleportLocation);
    void GetHiddenRelic2Location(class UObject* __WorldContext, FVector& HiddenRelic2Location);
    void GetHiddenRelic1TeleportLocation(class UObject* __WorldContext, FVector& HiddenRelic1TeleportLocation);
    void GetHiddenRelic1Location(class UObject* __WorldContext, FVector& HiddenRelic1Location);
}; // Size: 0x28

#endif
