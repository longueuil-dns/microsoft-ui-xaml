// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//------------------------------------------------------------------------
//
//  Abstract:
//
//      XAML types.
//      NOTE: This file was generated by a tool.
//
//------------------------------------------------------------------------

#pragma once

namespace DirectUI
{
    interface __declspec(uuid("e1430e36-404a-4696-9f0f-7654bb708a1b")) IGeneratorHost : public IInspectable
    {
        // Properties.
        IFACEMETHOD(get_View)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<IInspectable*>** ppValue) = 0;
        IFACEMETHOD(get_CollectionView)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Data::ICollectionView** ppValue) = 0;

        // Events.

        // Methods.
        IFACEMETHOD(IsItemItsOwnContainer)(_In_ IInspectable* pItem, _Out_ BOOLEAN* pReturnValue) = 0;
        IFACEMETHOD(GetContainerForItem)(_In_ IInspectable* pItem, _In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pContainer, _Outptr_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppReturnValue) = 0;
        IFACEMETHOD(PrepareItemContainer)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pContainer, _In_ IInspectable* pItem) = 0;
        IFACEMETHOD(ClearContainerForItem)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pContainer, _In_ IInspectable* pItem) = 0;
        IFACEMETHOD(IsHostForItemContainer)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pContainer, _Out_ BOOLEAN* pReturnValue) = 0;
        IFACEMETHOD(GetGroupStyle)(_In_ ABI::Microsoft::UI::Xaml::Data::ICollectionViewGroup* pGroup, _In_ UINT level, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IGroupStyle** ppReturnValue) = 0;
        IFACEMETHOD(SetIsGrouping)(_In_ BOOLEAN isGrouping) = 0;
        IFACEMETHOD(GetHeaderForGroup)(_In_ IInspectable* pGroup, _Outptr_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppReturnValue) = 0;
        IFACEMETHOD(PrepareGroupContainer)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pContainer, _In_ ABI::Microsoft::UI::Xaml::Data::ICollectionViewGroup* pGroup) = 0;
        IFACEMETHOD(ClearGroupContainerForGroup)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pContainer, _In_ ABI::Microsoft::UI::Xaml::Data::ICollectionViewGroup* pGroup) = 0;
        IFACEMETHOD(SetupContainerContentChangingAfterPrepare)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pContainer, _In_ IInspectable* pItem, _In_ INT itemIndex, _In_ ABI::Windows::Foundation::Size measureSize) = 0;
        IFACEMETHOD(RegisterWorkFromArgs)(_In_ ABI::Microsoft::UI::Xaml::Controls::IContainerContentChangingEventArgs* pArgs) = 0;
        IFACEMETHOD(RegisterWorkForContainer)(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pContainer) = 0;
        IFACEMETHOD(CanRecycleContainer)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pContainer, _Out_ BOOLEAN* pReturnValue) = 0;
        IFACEMETHOD(SuggestContainerForContainerFromItemLookup)(_Outptr_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppReturnValue) = 0;
        IFACEMETHOD(ShouldRaiseChoosingItemContainer)(_Out_ BOOLEAN* pReturnValue) = 0;
        IFACEMETHOD(RaiseChoosingItemContainer)(_In_ ABI::Microsoft::UI::Xaml::Controls::IChoosingItemContainerEventArgs* pArgs) = 0;
        IFACEMETHOD(RaiseContainerContentChangingOnRecycle)(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pContainer, _In_ IInspectable* pItem) = 0;
        IFACEMETHOD(ShouldRaiseChoosingGroupHeaderContainer)(_Out_ BOOLEAN* pReturnValue) = 0;
        IFACEMETHOD(RaiseChoosingGroupHeaderContainer)(_In_ ABI::Microsoft::UI::Xaml::Controls::IChoosingGroupHeaderContainerEventArgs* pArgs) = 0;
        IFACEMETHOD(VirtualizationFinished)() = 0;
        IFACEMETHOD(OverrideContainerArrangeBounds)(_In_ INT index, _In_ ABI::Windows::Foundation::Rect suggestedBounds, _Out_ ABI::Windows::Foundation::Rect* pNewBounds) = 0;
    };
}
