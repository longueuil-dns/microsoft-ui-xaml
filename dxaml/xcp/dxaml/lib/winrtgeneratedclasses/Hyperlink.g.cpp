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

#include "Hyperlink.g.h"

// Constructors/destructors.
DirectUI::HyperlinkGenerated::HyperlinkGenerated()
{
}

DirectUI::HyperlinkGenerated::~HyperlinkGenerated()
{
}

HRESULT DirectUI::HyperlinkGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Hyperlink)))
    {
        *ppObject = static_cast<DirectUI::Hyperlink*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Documents::IHyperlink)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Documents::IHyperlink*>(this);
    }
    else
    {
        RRETURN(DirectUI::Span::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::HyperlinkGenerated::get_ElementSoundMode(_Out_ ABI::Microsoft::UI::Xaml::ElementSoundMode* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Hyperlink_ElementSoundMode, pValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::put_ElementSoundMode(_In_ ABI::Microsoft::UI::Xaml::ElementSoundMode value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Hyperlink_ElementSoundMode, value));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::get_FocusState(_Out_ ABI::Microsoft::UI::Xaml::FocusState* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Hyperlink_FocusState, pValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::get_IsTabStop(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Hyperlink_IsTabStop, pValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::put_IsTabStop(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Hyperlink_IsTabStop, value));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::get_NavigateUri(_Outptr_result_maybenull_ ABI::Windows::Foundation::IUriRuntimeClass** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Hyperlink_NavigateUri, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::put_NavigateUri(_In_opt_ ABI::Windows::Foundation::IUriRuntimeClass* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Hyperlink_NavigateUri, pValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::get_TabIndex(_Out_ INT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Hyperlink_TabIndex, pValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::put_TabIndex(_In_ INT value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Hyperlink_TabIndex, value));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::get_UnderlineStyle(_Out_ ABI::Microsoft::UI::Xaml::Documents::UnderlineStyle* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Hyperlink_UnderlineStyle, pValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::put_UnderlineStyle(_In_ ABI::Microsoft::UI::Xaml::Documents::UnderlineStyle value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Hyperlink_UnderlineStyle, value));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::get_XYFocusDown(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Hyperlink_XYFocusDown, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::put_XYFocusDown(_In_opt_ ABI::Microsoft::UI::Xaml::IDependencyObject* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Hyperlink_XYFocusDown, pValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::get_XYFocusDownNavigationStrategy(_Out_ ABI::Microsoft::UI::Xaml::Input::XYFocusNavigationStrategy* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Hyperlink_XYFocusDownNavigationStrategy, pValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::put_XYFocusDownNavigationStrategy(_In_ ABI::Microsoft::UI::Xaml::Input::XYFocusNavigationStrategy value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Hyperlink_XYFocusDownNavigationStrategy, value));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::get_XYFocusLeft(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Hyperlink_XYFocusLeft, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::put_XYFocusLeft(_In_opt_ ABI::Microsoft::UI::Xaml::IDependencyObject* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Hyperlink_XYFocusLeft, pValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::get_XYFocusLeftNavigationStrategy(_Out_ ABI::Microsoft::UI::Xaml::Input::XYFocusNavigationStrategy* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Hyperlink_XYFocusLeftNavigationStrategy, pValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::put_XYFocusLeftNavigationStrategy(_In_ ABI::Microsoft::UI::Xaml::Input::XYFocusNavigationStrategy value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Hyperlink_XYFocusLeftNavigationStrategy, value));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::get_XYFocusRight(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Hyperlink_XYFocusRight, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::put_XYFocusRight(_In_opt_ ABI::Microsoft::UI::Xaml::IDependencyObject* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Hyperlink_XYFocusRight, pValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::get_XYFocusRightNavigationStrategy(_Out_ ABI::Microsoft::UI::Xaml::Input::XYFocusNavigationStrategy* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Hyperlink_XYFocusRightNavigationStrategy, pValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::put_XYFocusRightNavigationStrategy(_In_ ABI::Microsoft::UI::Xaml::Input::XYFocusNavigationStrategy value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Hyperlink_XYFocusRightNavigationStrategy, value));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::get_XYFocusUp(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Hyperlink_XYFocusUp, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::put_XYFocusUp(_In_opt_ ABI::Microsoft::UI::Xaml::IDependencyObject* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Hyperlink_XYFocusUp, pValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::get_XYFocusUpNavigationStrategy(_Out_ ABI::Microsoft::UI::Xaml::Input::XYFocusNavigationStrategy* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Hyperlink_XYFocusUpNavigationStrategy, pValue));
}
IFACEMETHODIMP DirectUI::HyperlinkGenerated::put_XYFocusUpNavigationStrategy(_In_ ABI::Microsoft::UI::Xaml::Input::XYFocusNavigationStrategy value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Hyperlink_XYFocusUpNavigationStrategy, value));
}

// Events.
_Check_return_ HRESULT DirectUI::HyperlinkGenerated::GetClickEventSourceNoRef(_Outptr_ ClickEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::Hyperlink_Click, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<ClickEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::Hyperlink_Click, this, /* bUseEventManager */ true);
        IFC(StoreEventSource(KnownEventIndex::Hyperlink_Click, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::HyperlinkGenerated::add_Click(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Documents::Hyperlink*, ABI::Microsoft::UI::Xaml::Documents::HyperlinkClickEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    ClickEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetClickEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::HyperlinkGenerated::remove_Click(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    ClickEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Documents::Hyperlink*, ABI::Microsoft::UI::Xaml::Documents::HyperlinkClickEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Documents::Hyperlink*, ABI::Microsoft::UI::Xaml::Documents::HyperlinkClickEventArgs*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetClickEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::Hyperlink_Click));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::HyperlinkGenerated::GetGotFocusEventSourceNoRef(_Outptr_ GotFocusEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::Hyperlink_GotFocus, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<GotFocusEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::Hyperlink_GotFocus, this, /* bUseEventManager */ true);
        IFC(StoreEventSource(KnownEventIndex::Hyperlink_GotFocus, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::HyperlinkGenerated::add_GotFocus(_In_ ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    GotFocusEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetGotFocusEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::HyperlinkGenerated::remove_GotFocus(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    GotFocusEventSourceType* pEventSource = nullptr;
    ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue = (ABI::Microsoft::UI::Xaml::IRoutedEventHandler*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetGotFocusEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::Hyperlink_GotFocus));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::HyperlinkGenerated::GetLostFocusEventSourceNoRef(_Outptr_ LostFocusEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::Hyperlink_LostFocus, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<LostFocusEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::Hyperlink_LostFocus, this, /* bUseEventManager */ true);
        IFC(StoreEventSource(KnownEventIndex::Hyperlink_LostFocus, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::HyperlinkGenerated::add_LostFocus(_In_ ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    LostFocusEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetLostFocusEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::HyperlinkGenerated::remove_LostFocus(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    LostFocusEventSourceType* pEventSource = nullptr;
    ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue = (ABI::Microsoft::UI::Xaml::IRoutedEventHandler*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetLostFocusEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::Hyperlink_LostFocus));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.
IFACEMETHODIMP DirectUI::HyperlinkGenerated::Focus(_In_ ABI::Microsoft::UI::Xaml::FocusState value, _Out_ BOOLEAN* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::Hyperlink_Focus);
    }
    ARG_VALIDRETURNPOINTER(pReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<Hyperlink*>(this)->FocusImpl(value, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::HyperlinkFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Documents::IHyperlinkStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Documents::IHyperlinkStatics*>(this);
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
IFACEMETHODIMP DirectUI::HyperlinkFactory::get_NavigateUriProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Hyperlink_NavigateUri, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkFactory::get_UnderlineStyleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Hyperlink_UnderlineStyle, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkFactory::get_XYFocusLeftProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Hyperlink_XYFocusLeft, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkFactory::get_XYFocusRightProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Hyperlink_XYFocusRight, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkFactory::get_XYFocusUpProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Hyperlink_XYFocusUp, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkFactory::get_XYFocusDownProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Hyperlink_XYFocusDown, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkFactory::get_ElementSoundModeProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Hyperlink_ElementSoundMode, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkFactory::get_FocusStateProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Hyperlink_FocusState, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkFactory::get_XYFocusUpNavigationStrategyProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Hyperlink_XYFocusUpNavigationStrategy, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkFactory::get_XYFocusDownNavigationStrategyProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Hyperlink_XYFocusDownNavigationStrategy, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkFactory::get_XYFocusLeftNavigationStrategyProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Hyperlink_XYFocusLeftNavigationStrategy, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkFactory::get_XYFocusRightNavigationStrategyProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Hyperlink_XYFocusRightNavigationStrategy, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkFactory::get_IsTabStopProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Hyperlink_IsTabStop, ppValue));
}
IFACEMETHODIMP DirectUI::HyperlinkFactory::get_TabIndexProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Hyperlink_TabIndex, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_Hyperlink()
    {
        RRETURN(ctl::ActivationFactoryCreator<HyperlinkFactory>::CreateActivationFactory());
    }
}
