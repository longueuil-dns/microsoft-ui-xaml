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

#include "EasingFunctionBase.g.h"

// Constructors/destructors.
DirectUI::EasingFunctionBaseGenerated::EasingFunctionBaseGenerated()
{
}

DirectUI::EasingFunctionBaseGenerated::~EasingFunctionBaseGenerated()
{
}

HRESULT DirectUI::EasingFunctionBaseGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::EasingFunctionBase)))
    {
        *ppObject = static_cast<DirectUI::EasingFunctionBase*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IEasingFunctionBase)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IEasingFunctionBase*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::EasingFunctionBaseGenerated::get_EasingMode(_Out_ ABI::Microsoft::UI::Xaml::Media::Animation::EasingMode* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::EasingFunctionBase_EasingMode, pValue));
}
IFACEMETHODIMP DirectUI::EasingFunctionBaseGenerated::put_EasingMode(_In_ ABI::Microsoft::UI::Xaml::Media::Animation::EasingMode value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::EasingFunctionBase_EasingMode, value));
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::EasingFunctionBaseGenerated::Ease(_In_ DOUBLE normalizedTime, _Out_ DOUBLE* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::EasingFunctionBase_Ease);
    }
    ARG_VALIDRETURNPOINTER(pReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<EasingFunctionBase*>(this)->EaseImpl(normalizedTime, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::EasingFunctionBaseFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableAbstractCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.
IFACEMETHODIMP DirectUI::EasingFunctionBaseFactory::get_EasingModeProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::EasingFunctionBase_EasingMode, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_EasingFunctionBase()
    {
        RRETURN(ctl::ActivationFactoryCreator<EasingFunctionBaseFactory>::CreateActivationFactory());
    }
}
