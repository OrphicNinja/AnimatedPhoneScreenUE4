#include "SBZSkillCQCSpecialistCQCSpecialist.h"

USBZSkillCQCSpecialistCQCSpecialist::USBZSkillCQCSpecialistCQCSpecialist() {
    this->BuffActivationArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillCQCSpecialistCQCSpecialist::StaticClass();
}


