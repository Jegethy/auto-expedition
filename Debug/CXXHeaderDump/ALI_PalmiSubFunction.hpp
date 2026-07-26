#ifndef UE4SS_SDK_ALI_PalmiSubFunction_HPP
#define UE4SS_SDK_ALI_PalmiSubFunction_HPP

class IALI_PalmiSubFunction_C : public IAnimLayerInterface
{

    void OnAim(FPoseLink InPose_0, bool IsAim, FPoseLink& OnAim);
    void LeftHandAttach(FPoseLink InPose, FPoseLink& LeftHandAttach);
}; // Size: 0x28

#endif
