#include "SBZECMJammerToolData.h"

USBZECMJammerToolData::USBZECMJammerToolData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZECMJammerToolData::StaticClass();
}


