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

#include "Timeline.g.h"
#include "TimelineCollection.g.h"

// Constructors/destructors.
DirectUI::TimelineGenerated::TimelineGenerated()
{
}

DirectUI::TimelineGenerated::~TimelineGenerated()
{
}

HRESULT DirectUI::TimelineGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Timeline)))
    {
        *ppObject = static_cast<DirectUI::Timeline*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::ITimeline)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::ITimeline*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::TimelineGenerated::get_AutoReverse(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Timeline_AutoReverse, pValue));
}
IFACEMETHODIMP DirectUI::TimelineGenerated::put_AutoReverse(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Timeline_AutoReverse, value));
}
IFACEMETHODIMP DirectUI::TimelineGenerated::get_BeginTime(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::TimeSpan>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Timeline_BeginTime, ppValue));
}
IFACEMETHODIMP DirectUI::TimelineGenerated::put_BeginTime(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::TimeSpan>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Timeline_BeginTime, pValue));
}
IFACEMETHODIMP DirectUI::TimelineGenerated::get_Duration(_Out_ ABI::Microsoft::UI::Xaml::Duration* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Timeline_Duration, pValue));
}
IFACEMETHODIMP DirectUI::TimelineGenerated::put_Duration(_In_ ABI::Microsoft::UI::Xaml::Duration value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Timeline_Duration, value));
}
IFACEMETHODIMP DirectUI::TimelineGenerated::get_FillBehavior(_Out_ ABI::Microsoft::UI::Xaml::Media::Animation::FillBehavior* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Timeline_FillBehavior, pValue));
}
IFACEMETHODIMP DirectUI::TimelineGenerated::put_FillBehavior(_In_ ABI::Microsoft::UI::Xaml::Media::Animation::FillBehavior value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Timeline_FillBehavior, value));
}
IFACEMETHODIMP DirectUI::TimelineGenerated::get_RepeatBehavior(_Out_ ABI::Microsoft::UI::Xaml::Media::Animation::RepeatBehavior* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Timeline_RepeatBehavior, pValue));
}
IFACEMETHODIMP DirectUI::TimelineGenerated::put_RepeatBehavior(_In_ ABI::Microsoft::UI::Xaml::Media::Animation::RepeatBehavior value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Timeline_RepeatBehavior, value));
}
IFACEMETHODIMP DirectUI::TimelineGenerated::get_SpeedRatio(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Timeline_SpeedRatio, pValue));
}
IFACEMETHODIMP DirectUI::TimelineGenerated::put_SpeedRatio(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Timeline_SpeedRatio, value));
}

// Events.
_Check_return_ HRESULT DirectUI::TimelineGenerated::GetCompletedEventSourceNoRef(_Outptr_ CompletedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::Timeline_Completed, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<CompletedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::Timeline_Completed, this, /* bUseEventManager */ true);
        IFC(StoreEventSource(KnownEventIndex::Timeline_Completed, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::TimelineGenerated::add_Completed(_In_ ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    CompletedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetCompletedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::TimelineGenerated::remove_Completed(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    CompletedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue = (ABI::Windows::Foundation::IEventHandler<IInspectable*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetCompletedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::Timeline_Completed));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.

HRESULT DirectUI::TimelineFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::ITimelineFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::ITimelineFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::ITimelineStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::ITimelineStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableAbstractCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::TimelineFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Media::Animation::ITimeline** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::ITimeline);
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
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithBetterAggregableAbstractCoreObjectActivationFactory(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.
IFACEMETHODIMP DirectUI::TimelineFactory::get_AutoReverseProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Timeline_AutoReverse, ppValue));
}
IFACEMETHODIMP DirectUI::TimelineFactory::get_BeginTimeProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Timeline_BeginTime, ppValue));
}
IFACEMETHODIMP DirectUI::TimelineFactory::get_DurationProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Timeline_Duration, ppValue));
}
IFACEMETHODIMP DirectUI::TimelineFactory::get_SpeedRatioProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Timeline_SpeedRatio, ppValue));
}
IFACEMETHODIMP DirectUI::TimelineFactory::get_FillBehaviorProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Timeline_FillBehavior, ppValue));
}
IFACEMETHODIMP DirectUI::TimelineFactory::get_RepeatBehaviorProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Timeline_RepeatBehavior, ppValue));
}

// Attached properties.

// Static properties.
IFACEMETHODIMP DirectUI::TimelineFactory::get_AllowDependentAnimations(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckActivationAllowed());
    IFC(get_AllowDependentAnimationsImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TimelineFactory::put_AllowDependentAnimations(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    
    IFC(CheckActivationAllowed());
    IFC(put_AllowDependentAnimationsImpl(value));
Cleanup:
    RRETURN(hr);
}

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_Timeline()
    {
        RRETURN(ctl::ActivationFactoryCreator<TimelineFactory>::CreateActivationFactory());
    }
}
