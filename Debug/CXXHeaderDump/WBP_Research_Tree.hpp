#ifndef UE4SS_SDK_WBP_Research_Tree_HPP
#define UE4SS_SDK_WBP_Research_Tree_HPP

class UWBP_Research_Tree_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UCanvasPanel* CanvasPanel_NodeLines;                                        // 0x0280 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Nodes;                                            // 0x0288 (size: 0x8)
    class UScrollBox* ScrollBox;                                                      // 0x0290 (size: 0x8)
    class UWBP_Research_TreeLv_C* WBP_Research_TreeLv_1;                              // 0x0298 (size: 0x8)
    class UWBP_Research_TreeLv_C* WBP_Research_TreeLv_2;                              // 0x02A0 (size: 0x8)
    class UWBP_Research_TreeLv_C* WBP_Research_TreeLv_3;                              // 0x02A8 (size: 0x8)
    class UWBP_Research_TreeLv_C* WBP_Research_TreeLv_4;                              // 0x02B0 (size: 0x8)
    class UWBP_Research_TreeLv_C* WBP_Research_TreeLv_5;                              // 0x02B8 (size: 0x8)
    class UWBP_Research_TreeLv_C* WBP_Research_TreeLv_6;                              // 0x02C0 (size: 0x8)
    class UWBP_Research_TreeLv_C* WBP_Research_TreeLv_7;                              // 0x02C8 (size: 0x8)
    int32 MinBlockSize;                                                               // 0x02D0 (size: 0x4)
    TMap<class FName, class UWBP_Research_TreeIcon_C*> TreeIconMap;                   // 0x02D8 (size: 0x50)
    EPalWorkSuitability ResearchType;                                                 // 0x0328 (size: 0x1)
    FWBP_Research_Tree_COnResearchSelectDelegate OnResearchSelectDelegate;            // 0x0330 (size: 0x10)
    void OnResearchSelectDelegate(FName ResearchId);
    FWBP_Research_Tree_COnResearchHoveredDelegate OnResearchHoveredDelegate;          // 0x0340 (size: 0x10)
    void OnResearchHoveredDelegate(FName ResearchId);
    FWBP_Research_Tree_COnResearchUnhoveredDelegate OnResearchUnhoveredDelegate;      // 0x0350 (size: 0x10)
    void OnResearchUnhoveredDelegate();
    FWBP_Research_Tree_COnTreeNodeCreate OnTreeNodeCreate;                            // 0x0360 (size: 0x10)
    void OnTreeNodeCreate(class UWBP_Research_TreeIcon_C* NewNode);
    FWBP_Research_Tree_COnTreeLineDrawed OnTreeLineDrawed;                            // 0x0370 (size: 0x10)
    void OnTreeLineDrawed(class UImage* Image, bool RelyParent, FName ResearchId);
    FName CurrentPinedResearch;                                                       // 0x0380 (size: 0x8)
    TArray<class UWBP_Research_TreeLv_C*> LvBlocks;                                   // 0x0388 (size: 0x10)

    void CalcParentNodeMaxRank(TMap<class FName, class FTreeNodeData>& TreeData, FName NodeID, int32& Rank);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void ReleaseCurrentPin();
    void GetFocusTarget(class UWidget*& FocusTarget);
    void OnResearchUnhovered();
    void OnResearchHovered(FName ResearchId);
    void OnResearchSelect(FName ResearchId);
    void Draw Node Line(FName NodeID, FTreeNodeData NodeData);
    void CalcNodeSpace(TMap<class FName, class FTreeNodeData> TreeNodeMap, FName CurrentNode, int32& RequireSpace);
    void TreeConstruct(const TArray<FPalUIGuildLabResearchInfo>& Researchs, EPalWorkSuitability Type);
    class UWBP_Research_TreeIcon_C* CreateNewIcon(FPalUIGuildLabResearchInfo ResearchInfo);
    void OnInitialized();
    void ExecuteUbergraph_WBP_Research_Tree(int32 EntryPoint);
    void OnTreeLineDrawed__DelegateSignature(class UImage* Image, bool RelyParent, FName ResearchId);
    void OnTreeNodeCreate__DelegateSignature(class UWBP_Research_TreeIcon_C* NewNode);
    void OnResearchUnhoveredDelegate__DelegateSignature();
    void OnResearchHoveredDelegate__DelegateSignature(FName ResearchId);
    void OnResearchSelectDelegate__DelegateSignature(FName ResearchId);
}; // Size: 0x398

#endif
