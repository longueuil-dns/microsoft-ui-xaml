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

#include "PanelEx.g.h"
#include "UIElementCollection.g.h"

// Constructors/destructors.
DirectUI::PanelEx::PanelEx()
{
}

DirectUI::PanelEx::~PanelEx()
{
}

HRESULT DirectUI::PanelEx::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::PanelEx)))
    {
        *ppObject = static_cast<DirectUI::PanelEx*>(this);
    }
#if WI_IS_FEATURE_PRESENT(Feature_Xaml2018)
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IPanelEx)) && Feature_Xaml2018::IsEnabled())
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IPanelEx*>(this);
    }
#endif
    else
    {
        RRETURN(DirectUI::UIElement::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::PanelEx::get_ActualHeight(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PanelEx_ActualHeight, pValue));
}
IFACEMETHODIMP DirectUI::PanelEx::get_ActualWidth(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PanelEx_ActualWidth, pValue));
}
IFACEMETHODIMP DirectUI::PanelEx::get_Children(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::UIElement*>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PanelEx_Children, ppValue));
}
IFACEMETHODIMP DirectUI::PanelEx::get_Height(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PanelEx_Height, pValue));
}
IFACEMETHODIMP DirectUI::PanelEx::put_Height(_In_ DOUBLE value)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::PanelEx_Height, value));
}
IFACEMETHODIMP DirectUI::PanelEx::get_HorizontalAlignment(_Out_ ABI::Microsoft::UI::Xaml::HorizontalAlignment* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PanelEx_HorizontalAlignment, pValue));
}
IFACEMETHODIMP DirectUI::PanelEx::put_HorizontalAlignment(_In_ ABI::Microsoft::UI::Xaml::HorizontalAlignment value)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::PanelEx_HorizontalAlignment, value));
}
IFACEMETHODIMP DirectUI::PanelEx::get_Margin(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PanelEx_Margin, pValue));
}
IFACEMETHODIMP DirectUI::PanelEx::put_Margin(_In_ ABI::Microsoft::UI::Xaml::Thickness value)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::PanelEx_Margin, value));
}
IFACEMETHODIMP DirectUI::PanelEx::get_MaxHeight(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PanelEx_MaxHeight, pValue));
}
IFACEMETHODIMP DirectUI::PanelEx::put_MaxHeight(_In_ DOUBLE value)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::PanelEx_MaxHeight, value));
}
IFACEMETHODIMP DirectUI::PanelEx::get_MaxWidth(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PanelEx_MaxWidth, pValue));
}
IFACEMETHODIMP DirectUI::PanelEx::put_MaxWidth(_In_ DOUBLE value)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::PanelEx_MaxWidth, value));
}
IFACEMETHODIMP DirectUI::PanelEx::get_MinHeight(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PanelEx_MinHeight, pValue));
}
IFACEMETHODIMP DirectUI::PanelEx::put_MinHeight(_In_ DOUBLE value)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::PanelEx_MinHeight, value));
}
IFACEMETHODIMP DirectUI::PanelEx::get_MinWidth(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PanelEx_MinWidth, pValue));
}
IFACEMETHODIMP DirectUI::PanelEx::put_MinWidth(_In_ DOUBLE value)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::PanelEx_MinWidth, value));
}
IFACEMETHODIMP DirectUI::PanelEx::get_VerticalAlignment(_Out_ ABI::Microsoft::UI::Xaml::VerticalAlignment* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PanelEx_VerticalAlignment, pValue));
}
IFACEMETHODIMP DirectUI::PanelEx::put_VerticalAlignment(_In_ ABI::Microsoft::UI::Xaml::VerticalAlignment value)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::PanelEx_VerticalAlignment, value));
}
IFACEMETHODIMP DirectUI::PanelEx::get_Width(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PanelEx_Width, pValue));
}
IFACEMETHODIMP DirectUI::PanelEx::put_Width(_In_ DOUBLE value)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::PanelEx_Width, value));
}

// Events.

// Methods.

HRESULT DirectUI::PanelExFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
#if WI_IS_FEATURE_PRESENT(Feature_Xaml2018)
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IPanelExFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IPanelExFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IPanelExStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IPanelExStatics*>(this);
    }
    else
#endif
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

#if WI_IS_FEATURE_PRESENT(Feature_Xaml2018)
    AddRefOuter();
    RRETURN(S_OK);
#endif
}


// Factory methods.
IFACEMETHODIMP DirectUI::PanelExFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IPanelEx** ppInstance)
{
    if (!Feature_Xaml2018::IsEnabled()) IFC_RETURN(E_NOTIMPL);

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::IPanelEx);
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
IFACEMETHODIMP DirectUI::PanelExFactory::get_ActualWidthProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::PanelEx_ActualWidth, ppValue));
}
IFACEMETHODIMP DirectUI::PanelExFactory::get_ActualHeightProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::PanelEx_ActualHeight, ppValue));
}
IFACEMETHODIMP DirectUI::PanelExFactory::get_WidthProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::PanelEx_Width, ppValue));
}
IFACEMETHODIMP DirectUI::PanelExFactory::get_HeightProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::PanelEx_Height, ppValue));
}
IFACEMETHODIMP DirectUI::PanelExFactory::get_MinWidthProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::PanelEx_MinWidth, ppValue));
}
IFACEMETHODIMP DirectUI::PanelExFactory::get_MaxWidthProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::PanelEx_MaxWidth, ppValue));
}
IFACEMETHODIMP DirectUI::PanelExFactory::get_MinHeightProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::PanelEx_MinHeight, ppValue));
}
IFACEMETHODIMP DirectUI::PanelExFactory::get_MaxHeightProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::PanelEx_MaxHeight, ppValue));
}
IFACEMETHODIMP DirectUI::PanelExFactory::get_HorizontalAlignmentProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::PanelEx_HorizontalAlignment, ppValue));
}
IFACEMETHODIMP DirectUI::PanelExFactory::get_VerticalAlignmentProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::PanelEx_VerticalAlignment, ppValue));
}
IFACEMETHODIMP DirectUI::PanelExFactory::get_MarginProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::PanelEx_Margin, ppValue));
}


// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_PanelEx()
    {
        RRETURN(ctl::ActivationFactoryCreator<PanelExFactory>::CreateActivationFactory());
    }
}
