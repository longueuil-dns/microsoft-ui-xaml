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

#include "AppBarSeparator.g.h"

// Constructors/destructors.
DirectUI::AppBarSeparatorGenerated::AppBarSeparatorGenerated()
{
}

DirectUI::AppBarSeparatorGenerated::~AppBarSeparatorGenerated()
{
}

HRESULT DirectUI::AppBarSeparatorGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::AppBarSeparator)))
    {
        *ppObject = static_cast<DirectUI::AppBarSeparator*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IAppBarSeparator)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IAppBarSeparator*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICommandBarElement)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ICommandBarElement*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICommandBarOverflowElement)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ICommandBarOverflowElement*>(this);
    }
    else
    {
        RRETURN(DirectUI::Control::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::AppBarSeparatorGenerated::get_DynamicOverflowOrder(_Out_ INT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AppBarSeparator_DynamicOverflowOrder, pValue));
}
IFACEMETHODIMP DirectUI::AppBarSeparatorGenerated::put_DynamicOverflowOrder(_In_ INT value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AppBarSeparator_DynamicOverflowOrder, value));
}
IFACEMETHODIMP DirectUI::AppBarSeparatorGenerated::get_IsCompact(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AppBarSeparator_IsCompact, pValue));
}
IFACEMETHODIMP DirectUI::AppBarSeparatorGenerated::put_IsCompact(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AppBarSeparator_IsCompact, value));
}
IFACEMETHODIMP DirectUI::AppBarSeparatorGenerated::get_IsInOverflow(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<AppBarSeparator*>(this)->get_IsInOverflowImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::AppBarSeparatorGenerated::get_UseOverflowStyle(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AppBarSeparator_UseOverflowStyle, pValue));
}
IFACEMETHODIMP DirectUI::AppBarSeparatorGenerated::put_UseOverflowStyle(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AppBarSeparator_UseOverflowStyle, value));
}

// Events.

// Methods.

HRESULT DirectUI::AppBarSeparatorFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IAppBarSeparatorFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IAppBarSeparatorFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IAppBarSeparatorStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IAppBarSeparatorStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::AppBarSeparatorFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IAppBarSeparator** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::IAppBarSeparator);
    const GUID metadataAPIGUID = MetadataAPI::GetClassInfoByIndex(GetTypeIndex())->GetGuid();
    const KnownTypeIndex typeIndex = GetTypeIndex();

    if(uuidofGUID != metadataAPIGUID)
    {
        XAML_FAIL_FAST();
    }
#endif

    // Can't just IFC(_RETURN) this because for some validate calls (those with multiple template parameters), the
    // preprocessor gets confused at the "," in the template type-list before the function's opening parenthesis.
    // So we'll use IFC_RETURN syntax with a local hr variable, kind of weirdly.
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithBetterAggregableCoreObjectActivationFactory(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.
IFACEMETHODIMP DirectUI::AppBarSeparatorFactory::get_IsCompactProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AppBarSeparator_IsCompact, ppValue));
}
IFACEMETHODIMP DirectUI::AppBarSeparatorFactory::get_IsInOverflowProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AppBarSeparator_IsInOverflow, ppValue));
}
IFACEMETHODIMP DirectUI::AppBarSeparatorFactory::get_DynamicOverflowOrderProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AppBarSeparator_DynamicOverflowOrder, ppValue));
}


// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_AppBarSeparator()
    {
        RRETURN(ctl::ActivationFactoryCreator<AppBarSeparatorFactory>::CreateActivationFactory());
    }
}
