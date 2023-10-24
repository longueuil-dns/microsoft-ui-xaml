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

#include "Run.g.h"

// Constructors/destructors.
DirectUI::Run::Run()
{
}

DirectUI::Run::~Run()
{
}

HRESULT DirectUI::Run::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Run)))
    {
        *ppObject = static_cast<DirectUI::Run*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Documents::IRun)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Documents::IRun*>(this);
    }
    else
    {
        RRETURN(DirectUI::Inline::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::Run::get_FlowDirection(_Out_ ABI::Microsoft::UI::Xaml::FlowDirection* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Run_FlowDirection, pValue));
}
IFACEMETHODIMP DirectUI::Run::put_FlowDirection(_In_ ABI::Microsoft::UI::Xaml::FlowDirection value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Run_FlowDirection, value));
}
IFACEMETHODIMP DirectUI::Run::get_Text(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Run_Text, pValue));
}
IFACEMETHODIMP DirectUI::Run::put_Text(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Run_Text, value));
}

// Events.

// Methods.

HRESULT DirectUI::RunFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Documents::IRunStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Documents::IRunStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.

IFACEMETHODIMP DirectUI::RunFactory::get_FlowDirectionProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Run_FlowDirection, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_Run()
    {
        RRETURN(ctl::ActivationFactoryCreator<RunFactory>::CreateActivationFactory());
    }
}
