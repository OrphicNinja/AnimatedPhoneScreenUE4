#include "SBZBlackMarketVendorsWidget.h"

USBZBlackMarketVendorsWidget::USBZBlackMarketVendorsWidget() {
    this->Panel_CategoriesList = NULL;
    this->Navbar_Vendors = NULL;
    this->CategoryButtonClass = NULL;
    this->CategoryButtonClass = NULL;
    this->StoreItemButtonClass = NULL;
    this->StoreItemButtonClass = NULL;
    this->GoldStoreItemButtonClass = NULL;
    this->GoldStoreItemButtonClass = NULL;
    this->Panel_VendorList = NULL;
    this->ControlsRefActionWidget_PaydayStore = NULL;
    this->VendorButtonClass = NULL;
    this->VendorButtonClass = NULL;
    this->bIsTransactionInProgress = false;
    this->ActiveVendorIndex = -1;
    this->PurchaseTargetButton = NULL;
    this->PurchaseItemPopUpBodyWidgetClass = NULL;
    this->PurchaseItemPopUpBodyWidgetClass = NULL;
    this->PurchaseItemSlotPopUpBodyWidgetClass = NULL;
    this->PurchaseItemSlotPopUpBodyWidgetClass = NULL;
    this->PurchaseItemPopUpBody = NULL;
    this->StackValue = TEXT("Default__SBZBlackMarketVendorsWidget");
}

void USBZBlackMarketVendorsWidget::UpdateActiveVendor(int32 NewActiveVendorIndex) {
}

void USBZBlackMarketVendorsWidget::TryBuyItem(FSBZStoreItemUIData StoreItemUIData) {
}

void USBZBlackMarketVendorsWidget::SendPurchaseAttemptEvent(bool bIsAcceptPressed) {
}


void USBZBlackMarketVendorsWidget::OnVendorItemButtonSelected(USBZMenuButton* InButton) {
}





void USBZBlackMarketVendorsWidget::OnPurchaseItemPopUpClosed(FName ClosingActionName) {
}

void USBZBlackMarketVendorsWidget::OnBuyRealMoneyItemCompleted(ESBZMetaRequestResult Result) {
}

void USBZBlackMarketVendorsWidget::OnBuyItemCompleted(ESBZMetaRequestResult Result, FGuid ItemId) {
}

void USBZBlackMarketVendorsWidget::NativeOnVendorButtonSelected(USBZMenuButton* InButton) {
}

void USBZBlackMarketVendorsWidget::GoToPreviousVendor() {
}

void USBZBlackMarketVendorsWidget::GoToNextVendor() {
}

USBZBlackMarketCategoryWidget* USBZBlackMarketVendorsWidget::GetFirstCategoryWidget() {
    return NULL;
}

USBZBlackMarketVendorButton* USBZBlackMarketVendorsWidget::GetActiveVendorButton() const {
    return NULL;
}

