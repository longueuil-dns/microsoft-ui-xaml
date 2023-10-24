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

#include "TemplateBinding.g.h"

// Constructors/destructors.
DirectUI::TemplateBinding::TemplateBinding()
{
}

DirectUI::TemplateBinding::~TemplateBinding()
{
}

HRESULT DirectUI::TemplateBinding::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::TemplateBinding)))
    {
        *ppObject = static_cast<DirectUI::TemplateBinding*>(this);
    }
    else
    {
        RRETURN(DirectUI::MarkupExtensionBase::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
_Check_return_ HRESULT DirectUI::TemplateBinding::get_Property(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TemplateBinding_Property, ppValue));
}
_Check_return_ HRESULT DirectUI::TemplateBinding::put_Property(_In_opt_ ABI::Microsoft::UI::Xaml::IDependencyProperty* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::TemplateBinding_Property, pValue));
}

// Events.

// Methods.


