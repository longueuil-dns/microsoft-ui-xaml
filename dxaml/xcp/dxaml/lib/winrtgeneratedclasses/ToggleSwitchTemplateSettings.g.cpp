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

#include "ToggleSwitchTemplateSettings.g.h"

// Constructors/destructors.
DirectUI::ToggleSwitchTemplateSettings::ToggleSwitchTemplateSettings()
{
}

DirectUI::ToggleSwitchTemplateSettings::~ToggleSwitchTemplateSettings()
{
}

HRESULT DirectUI::ToggleSwitchTemplateSettings::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ToggleSwitchTemplateSettings)))
    {
        *ppObject = static_cast<DirectUI::ToggleSwitchTemplateSettings*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::ToggleSwitchTemplateSettings::get_CurtainCurrentToOffOffset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToggleSwitchTemplateSettings_CurtainCurrentToOffOffset, pValue));
}
_Check_return_ HRESULT DirectUI::ToggleSwitchTemplateSettings::put_CurtainCurrentToOffOffset(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToggleSwitchTemplateSettings_CurtainCurrentToOffOffset, value));
}
IFACEMETHODIMP DirectUI::ToggleSwitchTemplateSettings::get_CurtainCurrentToOnOffset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToggleSwitchTemplateSettings_CurtainCurrentToOnOffset, pValue));
}
_Check_return_ HRESULT DirectUI::ToggleSwitchTemplateSettings::put_CurtainCurrentToOnOffset(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToggleSwitchTemplateSettings_CurtainCurrentToOnOffset, value));
}
IFACEMETHODIMP DirectUI::ToggleSwitchTemplateSettings::get_CurtainOffToOnOffset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToggleSwitchTemplateSettings_CurtainOffToOnOffset, pValue));
}
_Check_return_ HRESULT DirectUI::ToggleSwitchTemplateSettings::put_CurtainOffToOnOffset(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToggleSwitchTemplateSettings_CurtainOffToOnOffset, value));
}
IFACEMETHODIMP DirectUI::ToggleSwitchTemplateSettings::get_CurtainOnToOffOffset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToggleSwitchTemplateSettings_CurtainOnToOffOffset, pValue));
}
_Check_return_ HRESULT DirectUI::ToggleSwitchTemplateSettings::put_CurtainOnToOffOffset(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToggleSwitchTemplateSettings_CurtainOnToOffOffset, value));
}
IFACEMETHODIMP DirectUI::ToggleSwitchTemplateSettings::get_KnobCurrentToOffOffset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToggleSwitchTemplateSettings_KnobCurrentToOffOffset, pValue));
}
_Check_return_ HRESULT DirectUI::ToggleSwitchTemplateSettings::put_KnobCurrentToOffOffset(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToggleSwitchTemplateSettings_KnobCurrentToOffOffset, value));
}
IFACEMETHODIMP DirectUI::ToggleSwitchTemplateSettings::get_KnobCurrentToOnOffset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToggleSwitchTemplateSettings_KnobCurrentToOnOffset, pValue));
}
_Check_return_ HRESULT DirectUI::ToggleSwitchTemplateSettings::put_KnobCurrentToOnOffset(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToggleSwitchTemplateSettings_KnobCurrentToOnOffset, value));
}
IFACEMETHODIMP DirectUI::ToggleSwitchTemplateSettings::get_KnobOffToOnOffset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToggleSwitchTemplateSettings_KnobOffToOnOffset, pValue));
}
_Check_return_ HRESULT DirectUI::ToggleSwitchTemplateSettings::put_KnobOffToOnOffset(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToggleSwitchTemplateSettings_KnobOffToOnOffset, value));
}
IFACEMETHODIMP DirectUI::ToggleSwitchTemplateSettings::get_KnobOnToOffOffset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToggleSwitchTemplateSettings_KnobOnToOffOffset, pValue));
}
_Check_return_ HRESULT DirectUI::ToggleSwitchTemplateSettings::put_KnobOnToOffOffset(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToggleSwitchTemplateSettings_KnobOnToOffOffset, value));
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
    _Check_return_ IActivationFactory* CreateActivationFactory_ToggleSwitchTemplateSettings()
    {
        RRETURN(ctl::ActivationFactoryCreator<ToggleSwitchTemplateSettingsFactory>::CreateActivationFactory());
    }
}
