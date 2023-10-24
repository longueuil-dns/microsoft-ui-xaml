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

#include "Slider.g.h"
#include "DataTemplate.g.h"

// Constructors/destructors.
DirectUI::SliderGenerated::SliderGenerated()
{
}

DirectUI::SliderGenerated::~SliderGenerated()
{
}

HRESULT DirectUI::SliderGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Slider)))
    {
        *ppObject = static_cast<DirectUI::Slider*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ISlider)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ISlider*>(this);
    }
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ISliderFeature_HeaderPlacement)) && Feature_HeaderPlacement::IsEnabled())
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ISliderFeature_HeaderPlacement*>(this);
    }
#endif
    else
    {
        RRETURN(DirectUI::RangeBase::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::SliderGenerated::get_Header(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Slider_Header, ppValue));
}
IFACEMETHODIMP DirectUI::SliderGenerated::put_Header(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Slider_Header, pValue));
}
IFACEMETHODIMP DirectUI::SliderGenerated::get_HeaderPlacement(_Out_ ABI::Microsoft::UI::Xaml::Controls::ControlHeaderPlacement* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Slider_HeaderPlacement, pValue));
}
IFACEMETHODIMP DirectUI::SliderGenerated::put_HeaderPlacement(_In_ ABI::Microsoft::UI::Xaml::Controls::ControlHeaderPlacement value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Slider_HeaderPlacement, value));
}
IFACEMETHODIMP DirectUI::SliderGenerated::get_HeaderTemplate(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Slider_HeaderTemplate, ppValue));
}
IFACEMETHODIMP DirectUI::SliderGenerated::put_HeaderTemplate(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Slider_HeaderTemplate, pValue));
}
IFACEMETHODIMP DirectUI::SliderGenerated::get_IntermediateValue(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Slider_IntermediateValue, pValue));
}
IFACEMETHODIMP DirectUI::SliderGenerated::put_IntermediateValue(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Slider_IntermediateValue, value));
}
IFACEMETHODIMP DirectUI::SliderGenerated::get_IsDirectionReversed(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Slider_IsDirectionReversed, pValue));
}
IFACEMETHODIMP DirectUI::SliderGenerated::put_IsDirectionReversed(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Slider_IsDirectionReversed, value));
}
IFACEMETHODIMP DirectUI::SliderGenerated::get_IsThumbToolTipEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Slider_IsThumbToolTipEnabled, pValue));
}
IFACEMETHODIMP DirectUI::SliderGenerated::put_IsThumbToolTipEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Slider_IsThumbToolTipEnabled, value));
}
IFACEMETHODIMP DirectUI::SliderGenerated::get_Orientation(_Out_ ABI::Microsoft::UI::Xaml::Controls::Orientation* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Slider_Orientation, pValue));
}
IFACEMETHODIMP DirectUI::SliderGenerated::put_Orientation(_In_ ABI::Microsoft::UI::Xaml::Controls::Orientation value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Slider_Orientation, value));
}
IFACEMETHODIMP DirectUI::SliderGenerated::get_SnapsTo(_Out_ ABI::Microsoft::UI::Xaml::Controls::Primitives::SliderSnapsTo* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Slider_SnapsTo, pValue));
}
IFACEMETHODIMP DirectUI::SliderGenerated::put_SnapsTo(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::SliderSnapsTo value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Slider_SnapsTo, value));
}
IFACEMETHODIMP DirectUI::SliderGenerated::get_StepFrequency(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Slider_StepFrequency, pValue));
}
IFACEMETHODIMP DirectUI::SliderGenerated::put_StepFrequency(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Slider_StepFrequency, value));
}
IFACEMETHODIMP DirectUI::SliderGenerated::get_ThumbToolTipValueConverter(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Data::IValueConverter** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Slider_ThumbToolTipValueConverter, ppValue));
}
IFACEMETHODIMP DirectUI::SliderGenerated::put_ThumbToolTipValueConverter(_In_opt_ ABI::Microsoft::UI::Xaml::Data::IValueConverter* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Slider_ThumbToolTipValueConverter, pValue));
}
IFACEMETHODIMP DirectUI::SliderGenerated::get_TickFrequency(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Slider_TickFrequency, pValue));
}
IFACEMETHODIMP DirectUI::SliderGenerated::put_TickFrequency(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Slider_TickFrequency, value));
}
IFACEMETHODIMP DirectUI::SliderGenerated::get_TickPlacement(_Out_ ABI::Microsoft::UI::Xaml::Controls::Primitives::TickPlacement* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Slider_TickPlacement, pValue));
}
IFACEMETHODIMP DirectUI::SliderGenerated::put_TickPlacement(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::TickPlacement value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Slider_TickPlacement, value));
}

// Events.

// Methods.

HRESULT DirectUI::SliderFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ISliderFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ISliderFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ISliderStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ISliderStatics*>(this);
    }
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ISliderStaticsFeature_HeaderPlacement)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ISliderStaticsFeature_HeaderPlacement*>(this);
    }
#endif
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::SliderFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::ISlider** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::ISlider);
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
IFACEMETHODIMP DirectUI::SliderFactory::get_IntermediateValueProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Slider_IntermediateValue, ppValue));
}
IFACEMETHODIMP DirectUI::SliderFactory::get_StepFrequencyProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Slider_StepFrequency, ppValue));
}
IFACEMETHODIMP DirectUI::SliderFactory::get_SnapsToProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Slider_SnapsTo, ppValue));
}
IFACEMETHODIMP DirectUI::SliderFactory::get_TickFrequencyProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Slider_TickFrequency, ppValue));
}
IFACEMETHODIMP DirectUI::SliderFactory::get_TickPlacementProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Slider_TickPlacement, ppValue));
}
IFACEMETHODIMP DirectUI::SliderFactory::get_OrientationProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Slider_Orientation, ppValue));
}
IFACEMETHODIMP DirectUI::SliderFactory::get_IsDirectionReversedProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Slider_IsDirectionReversed, ppValue));
}
IFACEMETHODIMP DirectUI::SliderFactory::get_IsThumbToolTipEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Slider_IsThumbToolTipEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::SliderFactory::get_ThumbToolTipValueConverterProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Slider_ThumbToolTipValueConverter, ppValue));
}
IFACEMETHODIMP DirectUI::SliderFactory::get_HeaderProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Slider_Header, ppValue));
}
IFACEMETHODIMP DirectUI::SliderFactory::get_HeaderTemplateProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Slider_HeaderTemplate, ppValue));
}
IFACEMETHODIMP DirectUI::SliderFactory::get_HeaderPlacementProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Slider_HeaderPlacement, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_Slider()
    {
        RRETURN(ctl::ActivationFactoryCreator<SliderFactory>::CreateActivationFactory());
    }
}
