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

#include "StaticResource.g.h"

// Constructors/destructors.
DirectUI::StaticResource::StaticResource()
{
}

DirectUI::StaticResource::~StaticResource()
{
}

HRESULT DirectUI::StaticResource::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::StaticResource)))
    {
        *ppObject = static_cast<DirectUI::StaticResource*>(this);
    }
    else
    {
        RRETURN(DirectUI::MarkupExtensionBase::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
_Check_return_ HRESULT DirectUI::StaticResource::get_ResourceKey(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::StaticResource_ResourceKey, pValue));
}
_Check_return_ HRESULT DirectUI::StaticResource::put_ResourceKey(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::StaticResource_ResourceKey, value));
}

// Events.

// Methods.


