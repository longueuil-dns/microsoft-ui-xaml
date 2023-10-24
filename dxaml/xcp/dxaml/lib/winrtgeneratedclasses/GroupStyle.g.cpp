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

#include "GroupStyle.g.h"
#include "DataTemplate.g.h"
#include "DataTemplateSelector.g.h"
#include "ItemsPanelTemplate.g.h"
#include "Style.g.h"
#include "StyleSelector.g.h"

// Constructors/destructors.
DirectUI::GroupStyleGenerated::GroupStyleGenerated()
{
}

DirectUI::GroupStyleGenerated::~GroupStyleGenerated()
{
}

HRESULT DirectUI::GroupStyleGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::GroupStyle)))
    {
        *ppObject = static_cast<DirectUI::GroupStyle*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IGroupStyle)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IGroupStyle*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Data::INotifyPropertyChanged)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Data::INotifyPropertyChanged*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::GroupStyleGenerated::get_ContainerStyle(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IStyle** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::GroupStyle_ContainerStyle, ppValue));
}
IFACEMETHODIMP DirectUI::GroupStyleGenerated::put_ContainerStyle(_In_opt_ ABI::Microsoft::UI::Xaml::IStyle* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::GroupStyle_ContainerStyle, pValue));
}
IFACEMETHODIMP DirectUI::GroupStyleGenerated::get_ContainerStyleSelector(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IStyleSelector** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::GroupStyle_ContainerStyleSelector, ppValue));
}
IFACEMETHODIMP DirectUI::GroupStyleGenerated::put_ContainerStyleSelector(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IStyleSelector* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::GroupStyle_ContainerStyleSelector, pValue));
}
IFACEMETHODIMP DirectUI::GroupStyleGenerated::get_HeaderContainerStyle(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IStyle** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::GroupStyle_HeaderContainerStyle, ppValue));
}
IFACEMETHODIMP DirectUI::GroupStyleGenerated::put_HeaderContainerStyle(_In_opt_ ABI::Microsoft::UI::Xaml::IStyle* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::GroupStyle_HeaderContainerStyle, pValue));
}
IFACEMETHODIMP DirectUI::GroupStyleGenerated::get_HeaderTemplate(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::GroupStyle_HeaderTemplate, ppValue));
}
IFACEMETHODIMP DirectUI::GroupStyleGenerated::put_HeaderTemplate(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::GroupStyle_HeaderTemplate, pValue));
}
IFACEMETHODIMP DirectUI::GroupStyleGenerated::get_HeaderTemplateSelector(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::GroupStyle_HeaderTemplateSelector, ppValue));
}
IFACEMETHODIMP DirectUI::GroupStyleGenerated::put_HeaderTemplateSelector(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::GroupStyle_HeaderTemplateSelector, pValue));
}
IFACEMETHODIMP DirectUI::GroupStyleGenerated::get_HidesIfEmpty(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::GroupStyle_HidesIfEmpty, pValue));
}
IFACEMETHODIMP DirectUI::GroupStyleGenerated::put_HidesIfEmpty(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::GroupStyle_HidesIfEmpty, value));
}
IFACEMETHODIMP DirectUI::GroupStyleGenerated::get_Panel(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IItemsPanelTemplate** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::GroupStyle_Panel, ppValue));
}
IFACEMETHODIMP DirectUI::GroupStyleGenerated::put_Panel(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IItemsPanelTemplate* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::GroupStyle_Panel, pValue));
}

// Events.
_Check_return_ HRESULT DirectUI::GroupStyleGenerated::GetPropertyChangedEventSourceNoRef(_Outptr_ PropertyChangedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::GroupStyle_PropertyChanged, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<PropertyChangedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::GroupStyle_PropertyChanged, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::GroupStyle_PropertyChanged, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::GroupStyleGenerated::add_PropertyChanged(_In_ ABI::Microsoft::UI::Xaml::Data::IPropertyChangedEventHandler* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    PropertyChangedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetPropertyChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::GroupStyleGenerated::remove_PropertyChanged(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    PropertyChangedEventSourceType* pEventSource = nullptr;
    ABI::Microsoft::UI::Xaml::Data::IPropertyChangedEventHandler* pValue = (ABI::Microsoft::UI::Xaml::Data::IPropertyChangedEventHandler*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetPropertyChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::GroupStyle_PropertyChanged));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.

HRESULT DirectUI::GroupStyleFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IGroupStyleFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IGroupStyleFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::GroupStyleFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IGroupStyle** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::IGroupStyle);
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








// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_GroupStyle()
    {
        RRETURN(ctl::ActivationFactoryCreator<GroupStyleFactory>::CreateActivationFactory());
    }
}
