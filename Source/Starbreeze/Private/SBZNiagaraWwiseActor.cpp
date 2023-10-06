#include "SBZNiagaraWwiseActor.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "SBZAmbientSoundComponent.h"

ASBZNiagaraWwiseActor::ASBZNiagaraWwiseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventToPlayOneShot = NULL;
    this->EventToPlay = NULL;
    this->EventToStopPlay = NULL;
    this->Rtpc = NULL;
    this->NiagaraEffectOneShot = NULL;
    this->NiagaraEffect = NULL;
    this->AudioComponent = CreateDefaultSubobject<USBZAmbientSoundComponent>(TEXT("SBZAmbientSoundComponent"));
    this->AudioComponent->SetupAttachment(RootComponent);
    this->NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->NiagaraComponent->SetupAttachment(RootComponent);
    this->bPlayFromBeginning = false;
    this->bOneShotEffect = false;
    this->bUpdateRtpc = false;
    this->RtpcUpdateValue = 0.00f;
    this->RtpcInterpolationTimerMS = 0.00f;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZNiagaraWwiseActor::UpdateRtpc(float RtpcValue, float RtpcInterpolationValue) {
}

void ASBZNiagaraWwiseActor::StopEffectsLoop() {
}

void ASBZNiagaraWwiseActor::PlayEffectsOneShot() {
}

void ASBZNiagaraWwiseActor::PlayEffectsLoop() {
}

void ASBZNiagaraWwiseActor::DestroyComponents() {
}

void ASBZNiagaraWwiseActor::DeactivateActor() {
}

void ASBZNiagaraWwiseActor::ActivateActor() {
}


