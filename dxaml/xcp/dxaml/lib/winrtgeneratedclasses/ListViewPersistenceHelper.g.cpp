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

#include "ListViewPersistenceHelper.g.h"
#include "ListViewBase.g.h"


HRESULT DirectUI::ListViewPersistenceHelperFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IListViewPersistenceHelperStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IListViewPersistenceHelperStatics*>(this);
    }
    else
    {
        RRETURN(ctl::AbstractActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.
IFACEMETHODIMP DirectUI::ListViewPersistenceHelperFactory::GetRelativeScrollPosition(_In_ ABI::Microsoft::UI::Xaml::Controls::IListViewBase* pListViewBase, _In_ ABI::Microsoft::UI::Xaml::Controls::IListViewItemToKeyHandler* pItemToKeyHandler, _Out_ HSTRING* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::ListViewPersistenceHelper_GetRelativeScrollPosition);
    }
    ARG_NOTNULL(pListViewBase, "listViewBase");
    ARG_NOTNULL(pItemToKeyHandler, "itemToKeyHandler");
    ARG_VALIDRETURNPOINTER(pReturnValue);
    IFC(CheckActivationAllowed());
    IFC(GetRelativeScrollPositionImpl(pListViewBase, pItemToKeyHandler, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ListViewPersistenceHelperFactory::SetRelativeScrollPositionAsync(_In_ ABI::Microsoft::UI::Xaml::Controls::IListViewBase* pListViewBase, _In_ HSTRING relativeScrollPosition, _In_ ABI::Microsoft::UI::Xaml::Controls::IListViewKeyToItemHandler* pKeyToItemHandler, _Outptr_ ABI::Windows::Foundation::IAsyncAction** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::ListViewPersistenceHelper_SetRelativeScrollPositionAsync);
    }
    ARG_NOTNULL(pListViewBase, "listViewBase");
    ARG_NOTNULL(relativeScrollPosition, "relativeScrollPosition");
    ARG_NOTNULL(pKeyToItemHandler, "keyToItemHandler");
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckActivationAllowed());
    IFC(SetRelativeScrollPositionAsyncImpl(pListViewBase, relativeScrollPosition, pKeyToItemHandler, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ListViewPersistenceHelper()
    {
        RRETURN(ctl::ActivationFactoryCreator<ListViewPersistenceHelperFactory>::CreateActivationFactory());
    }
}
