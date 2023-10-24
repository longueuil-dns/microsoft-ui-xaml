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

#include "ToolTipTemplateSettings.g.h"

// Constructors/destructors.
DirectUI::ToolTipTemplateSettings::ToolTipTemplateSettings()
{
}

DirectUI::ToolTipTemplateSettings::~ToolTipTemplateSettings()
{
}

HRESULT DirectUI::ToolTipTemplateSettings::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ToolTipTemplateSettings)))
    {
        *ppObject = static_cast<DirectUI::ToolTipTemplateSettings*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::ToolTipTemplateSettings::get_FromHorizontalOffset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToolTipTemplateSettings_FromHorizontalOffset, pValue));
}
_Check_return_ HRESULT DirectUI::ToolTipTemplateSettings::put_FromHorizontalOffset(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToolTipTemplateSettings_FromHorizontalOffset, value));
}
IFACEMETHODIMP DirectUI::ToolTipTemplateSettings::get_FromVerticalOffset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToolTipTemplateSettings_FromVerticalOffset, pValue));
}
_Check_return_ HRESULT DirectUI::ToolTipTemplateSettings::put_FromVerticalOffset(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToolTipTemplateSettings_FromVerticalOffset, value));
}

// Events.

// Methods.

// Factory methods.

// Dependency properties.



// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ToolTipTemplateSettings()
    {
        RRETURN(ctl::ActivationFactoryCreator<ToolTipTemplateSettingsFactory>::CreateActivationFactory());
    }
}
