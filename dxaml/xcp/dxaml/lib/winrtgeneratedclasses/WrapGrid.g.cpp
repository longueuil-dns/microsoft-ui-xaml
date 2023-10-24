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

#include "WrapGrid.g.h"

// Constructors/destructors.
DirectUI::WrapGridGenerated::WrapGridGenerated()
{
}

DirectUI::WrapGridGenerated::~WrapGridGenerated()
{
}

HRESULT DirectUI::WrapGridGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::WrapGrid)))
    {
        *ppObject = static_cast<DirectUI::WrapGrid*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IWrapGrid)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IWrapGrid*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(DirectUI::IKeyboardNavigationPanel)))
    {
        *ppObject = static_cast<DirectUI::IKeyboardNavigationPanel*>(this);
    }
    else
    {
        RRETURN(DirectUI::OrientedVirtualizingPanel::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::WrapGridGenerated::get_HorizontalChildrenAlignment(_Out_ ABI::Microsoft::UI::Xaml::HorizontalAlignment* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::WrapGrid_HorizontalChildrenAlignment, pValue));
}
IFACEMETHODIMP DirectUI::WrapGridGenerated::put_HorizontalChildrenAlignment(_In_ ABI::Microsoft::UI::Xaml::HorizontalAlignment value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::WrapGrid_HorizontalChildrenAlignment, value));
}
IFACEMETHODIMP DirectUI::WrapGridGenerated::get_ItemHeight(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::WrapGrid_ItemHeight, pValue));
}
IFACEMETHODIMP DirectUI::WrapGridGenerated::put_ItemHeight(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::WrapGrid_ItemHeight, value));
}
IFACEMETHODIMP DirectUI::WrapGridGenerated::get_ItemWidth(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::WrapGrid_ItemWidth, pValue));
}
IFACEMETHODIMP DirectUI::WrapGridGenerated::put_ItemWidth(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::WrapGrid_ItemWidth, value));
}
IFACEMETHODIMP DirectUI::WrapGridGenerated::get_MaximumRowsOrColumns(_Out_ INT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::WrapGrid_MaximumRowsOrColumns, pValue));
}
IFACEMETHODIMP DirectUI::WrapGridGenerated::put_MaximumRowsOrColumns(_In_ INT value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::WrapGrid_MaximumRowsOrColumns, value));
}
IFACEMETHODIMP DirectUI::WrapGridGenerated::get_Orientation(_Out_ ABI::Microsoft::UI::Xaml::Controls::Orientation* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::WrapGrid_Orientation, pValue));
}
IFACEMETHODIMP DirectUI::WrapGridGenerated::put_Orientation(_In_ ABI::Microsoft::UI::Xaml::Controls::Orientation value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::WrapGrid_Orientation, value));
}
IFACEMETHODIMP DirectUI::WrapGridGenerated::get_VerticalChildrenAlignment(_Out_ ABI::Microsoft::UI::Xaml::VerticalAlignment* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::WrapGrid_VerticalChildrenAlignment, pValue));
}
IFACEMETHODIMP DirectUI::WrapGridGenerated::put_VerticalChildrenAlignment(_In_ ABI::Microsoft::UI::Xaml::VerticalAlignment value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::WrapGrid_VerticalChildrenAlignment, value));
}

// Events.

// Methods.

HRESULT DirectUI::WrapGridFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IWrapGridStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IWrapGridStatics*>(this);
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
IFACEMETHODIMP DirectUI::WrapGridFactory::get_ItemWidthProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::WrapGrid_ItemWidth, ppValue));
}
IFACEMETHODIMP DirectUI::WrapGridFactory::get_ItemHeightProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::WrapGrid_ItemHeight, ppValue));
}
IFACEMETHODIMP DirectUI::WrapGridFactory::get_OrientationProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::WrapGrid_Orientation, ppValue));
}
IFACEMETHODIMP DirectUI::WrapGridFactory::get_HorizontalChildrenAlignmentProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::WrapGrid_HorizontalChildrenAlignment, ppValue));
}
IFACEMETHODIMP DirectUI::WrapGridFactory::get_VerticalChildrenAlignmentProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::WrapGrid_VerticalChildrenAlignment, ppValue));
}
IFACEMETHODIMP DirectUI::WrapGridFactory::get_MaximumRowsOrColumnsProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::WrapGrid_MaximumRowsOrColumns, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_WrapGrid()
    {
        RRETURN(ctl::ActivationFactoryCreator<WrapGridFactory>::CreateActivationFactory());
    }
}
