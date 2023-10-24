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

#include "TimePicker.g.h"
#include "DataTemplate.g.h"

// Constructors/destructors.
DirectUI::TimePickerGenerated::TimePickerGenerated()
{
}

DirectUI::TimePickerGenerated::~TimePickerGenerated()
{
}

HRESULT DirectUI::TimePickerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::TimePicker)))
    {
        *ppObject = static_cast<DirectUI::TimePicker*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ITimePicker)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ITimePicker*>(this);
    }
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ITimePickerFeature_HeaderPlacement)) && Feature_HeaderPlacement::IsEnabled())
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ITimePickerFeature_HeaderPlacement*>(this);
    }
#endif
    else
    {
        RRETURN(DirectUI::Control::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::TimePickerGenerated::get_ClockIdentifier(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TimePicker_ClockIdentifier, pValue));
}
IFACEMETHODIMP DirectUI::TimePickerGenerated::put_ClockIdentifier(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::TimePicker_ClockIdentifier, value));
}
IFACEMETHODIMP DirectUI::TimePickerGenerated::get_Header(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TimePicker_Header, ppValue));
}
IFACEMETHODIMP DirectUI::TimePickerGenerated::put_Header(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::TimePicker_Header, pValue));
}
IFACEMETHODIMP DirectUI::TimePickerGenerated::get_HeaderPlacement(_Out_ ABI::Microsoft::UI::Xaml::Controls::ControlHeaderPlacement* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TimePicker_HeaderPlacement, pValue));
}
IFACEMETHODIMP DirectUI::TimePickerGenerated::put_HeaderPlacement(_In_ ABI::Microsoft::UI::Xaml::Controls::ControlHeaderPlacement value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::TimePicker_HeaderPlacement, value));
}
IFACEMETHODIMP DirectUI::TimePickerGenerated::get_HeaderTemplate(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TimePicker_HeaderTemplate, ppValue));
}
IFACEMETHODIMP DirectUI::TimePickerGenerated::put_HeaderTemplate(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::TimePicker_HeaderTemplate, pValue));
}
IFACEMETHODIMP DirectUI::TimePickerGenerated::get_LightDismissOverlayMode(_Out_ ABI::Microsoft::UI::Xaml::Controls::LightDismissOverlayMode* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TimePicker_LightDismissOverlayMode, pValue));
}
IFACEMETHODIMP DirectUI::TimePickerGenerated::put_LightDismissOverlayMode(_In_ ABI::Microsoft::UI::Xaml::Controls::LightDismissOverlayMode value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::TimePicker_LightDismissOverlayMode, value));
}
IFACEMETHODIMP DirectUI::TimePickerGenerated::get_MinuteIncrement(_Out_ INT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TimePicker_MinuteIncrement, pValue));
}
IFACEMETHODIMP DirectUI::TimePickerGenerated::put_MinuteIncrement(_In_ INT value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::TimePicker_MinuteIncrement, value));
}
IFACEMETHODIMP DirectUI::TimePickerGenerated::get_SelectedTime(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::TimeSpan>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TimePicker_SelectedTime, ppValue));
}
IFACEMETHODIMP DirectUI::TimePickerGenerated::put_SelectedTime(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::TimeSpan>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::TimePicker_SelectedTime, pValue));
}
IFACEMETHODIMP DirectUI::TimePickerGenerated::get_Time(_Out_ ABI::Windows::Foundation::TimeSpan* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TimePicker_Time, pValue));
}
IFACEMETHODIMP DirectUI::TimePickerGenerated::put_Time(_In_ ABI::Windows::Foundation::TimeSpan value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::TimePicker_Time, value));
}

// Events.
_Check_return_ HRESULT DirectUI::TimePickerGenerated::GetSelectedTimeChangedEventSourceNoRef(_Outptr_ SelectedTimeChangedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::TimePicker_SelectedTimeChanged, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<SelectedTimeChangedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::TimePicker_SelectedTimeChanged, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::TimePicker_SelectedTimeChanged, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::TimePickerGenerated::add_SelectedTimeChanged(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::TimePicker*, ABI::Microsoft::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    SelectedTimeChangedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetSelectedTimeChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::TimePickerGenerated::remove_SelectedTimeChanged(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    SelectedTimeChangedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::TimePicker*, ABI::Microsoft::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::TimePicker*, ABI::Microsoft::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetSelectedTimeChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::TimePicker_SelectedTimeChanged));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::TimePickerGenerated::GetTimeChangedEventSourceNoRef(_Outptr_ TimeChangedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::TimePicker_TimeChanged, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<TimeChangedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::TimePicker_TimeChanged, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::TimePicker_TimeChanged, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::TimePickerGenerated::add_TimeChanged(_In_ ABI::Windows::Foundation::IEventHandler<ABI::Microsoft::UI::Xaml::Controls::TimePickerValueChangedEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    TimeChangedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetTimeChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::TimePickerGenerated::remove_TimeChanged(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    TimeChangedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::IEventHandler<ABI::Microsoft::UI::Xaml::Controls::TimePickerValueChangedEventArgs*>* pValue = (ABI::Windows::Foundation::IEventHandler<ABI::Microsoft::UI::Xaml::Controls::TimePickerValueChangedEventArgs*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetTimeChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::TimePicker_TimeChanged));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.

_Check_return_ HRESULT DirectUI::TimePickerGenerated::EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler, _In_ BOOLEAN handledEventsToo)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::TimePicker_SelectedTimeChanged:
        {
            ctl::ComPtr<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::TimePicker*, ABI::Microsoft::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs*>> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                SelectedTimeChangedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetSelectedTimeChangedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::TimePicker_TimeChanged:
        {
            ctl::ComPtr<ABI::Windows::Foundation::IEventHandler<ABI::Microsoft::UI::Xaml::Controls::TimePickerValueChangedEventArgs*>> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                TimeChangedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetTimeChangedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::ControlGenerated::EventAddHandlerByIndex(nEventIndex, pHandler, handledEventsToo));
        break;
    }

    return S_OK;
}

_Check_return_ HRESULT DirectUI::TimePickerGenerated::EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::TimePicker_SelectedTimeChanged:
        {
            ctl::ComPtr<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::TimePicker*, ABI::Microsoft::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs*>> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                SelectedTimeChangedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetSelectedTimeChangedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::TimePicker_TimeChanged:
        {
            ctl::ComPtr<ABI::Windows::Foundation::IEventHandler<ABI::Microsoft::UI::Xaml::Controls::TimePickerValueChangedEventArgs*>> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                TimeChangedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetTimeChangedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::ControlGenerated::EventRemoveHandlerByIndex(nEventIndex, pHandler));
        break;
    }

    return S_OK;
}

HRESULT DirectUI::TimePickerFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ITimePickerFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ITimePickerFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ITimePickerStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ITimePickerStatics*>(this);
    }
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ITimePickerStaticsFeature_HeaderPlacement)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ITimePickerStaticsFeature_HeaderPlacement*>(this);
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
IFACEMETHODIMP DirectUI::TimePickerFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::ITimePicker** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::ITimePicker);
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
IFACEMETHODIMP DirectUI::TimePickerFactory::get_HeaderProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::TimePicker_Header, ppValue));
}
IFACEMETHODIMP DirectUI::TimePickerFactory::get_HeaderTemplateProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::TimePicker_HeaderTemplate, ppValue));
}
IFACEMETHODIMP DirectUI::TimePickerFactory::get_ClockIdentifierProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::TimePicker_ClockIdentifier, ppValue));
}
IFACEMETHODIMP DirectUI::TimePickerFactory::get_MinuteIncrementProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::TimePicker_MinuteIncrement, ppValue));
}
IFACEMETHODIMP DirectUI::TimePickerFactory::get_TimeProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::TimePicker_Time, ppValue));
}
IFACEMETHODIMP DirectUI::TimePickerFactory::get_LightDismissOverlayModeProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::TimePicker_LightDismissOverlayMode, ppValue));
}
IFACEMETHODIMP DirectUI::TimePickerFactory::get_SelectedTimeProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::TimePicker_SelectedTime, ppValue));
}
IFACEMETHODIMP DirectUI::TimePickerFactory::get_HeaderPlacementProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::TimePicker_HeaderPlacement, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_TimePicker()
    {
        RRETURN(ctl::ActivationFactoryCreator<TimePickerFactory>::CreateActivationFactory());
    }
}
