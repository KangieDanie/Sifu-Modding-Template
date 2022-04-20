#include "SCCollisionLibrary.h"

class UPrimitiveComponent;
class UStaticMesh;

void USCCollisionLibrary::BPF_VisualLogCollision(UPrimitiveComponent* _primitiveComponent, const FName& _categoryName) {
}

TEnumAsByte<ECollisionChannel> USCCollisionLibrary::BPF_TraceTypeQueryToCollisionChannel(TEnumAsByte<ETraceTypeQuery> _eTraceType) {
    return ECC_WorldStatic;
}

FCollisionResponseContainer USCCollisionLibrary::BPF_ToContainerForTraceMulti(const FCollisionResponseContainer& _responses) {
    return FCollisionResponseContainer{};
}

void USCCollisionLibrary::BPF_SetCollisionResponseToChannels(UPrimitiveComponent* _primitiveComponent, const FCollisionResponseContainer& _newReponses) {
}

void USCCollisionLibrary::BPF_SetCollisionResponseFromTemplate(UPrimitiveComponent* _primitiveComponent, const FSCCollisionResponseTemplate& _template) {
}

void USCCollisionLibrary::BPF_SetCollisionResponseFromPreset(UPrimitiveComponent* _primitiveComponent, const FSCCollisionResponsePreset& _preset) {
}

void USCCollisionLibrary::BPF_PrepareContainerForTraceMulti(FCollisionResponseContainer& _responses) {
}

TEnumAsByte<ECollisionChannel> USCCollisionLibrary::BPF_ObjectTypeQueryToCollisionChannel(TEnumAsByte<EObjectTypeQuery> _eObjectType) {
    return ECC_WorldStatic;
}

TEnumAsByte<ECollisionResponse> USCCollisionLibrary::BPF_GetCollisionResponse(const FCollisionResponseContainer& _responseContainer, TEnumAsByte<ECollisionChannel> _eCollisionChannel) {
    return ECR_Ignore;
}

bool USCCollisionLibrary::BPF_GetCollisionProfile(FName _collisionProfileName, FSCCollisionResponseTemplate& _outTemplatee) {
    return false;
}

TArray<FSCCollisionProfileDescription> USCCollisionLibrary::BPF_GetAllCollisionProfileDescriptions() {
    return TArray<FSCCollisionProfileDescription>();
}

FCollisionResponseContainer USCCollisionLibrary::BPF_GenerateCollisionResponseContainer(const FSCCollisionResponseBuilder& _builder) {
    return FCollisionResponseContainer{};
}

FCollisionResponseContainer USCCollisionLibrary::BPF_DefaultResponseContainer_OneException(TEnumAsByte<ECollisionResponse> _eDefaultResponse, TEnumAsByte<ECollisionChannel> _eExceptionChannel, TEnumAsByte<ECollisionResponse> _eExceptionResponse) {
    return FCollisionResponseContainer{};
}

FCollisionResponseContainer USCCollisionLibrary::BPF_DefaultResponseContainer(TEnumAsByte<ECollisionResponse> _eDefaultResponse) {
    return FCollisionResponseContainer{};
}

float USCCollisionLibrary::BPF_CalculateStaticMeshMass(UStaticMesh* _staticMesh) {
    return 0.0f;
}

USCCollisionLibrary::USCCollisionLibrary() {
}

