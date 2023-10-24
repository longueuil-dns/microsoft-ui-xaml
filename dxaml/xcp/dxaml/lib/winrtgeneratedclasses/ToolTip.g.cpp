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

#include "ToolTip.g.h"
#include "ToolTipTemplateSettings.g.h"
#include "UIElement.g.h"

// Constructors/destructors.
DirectUI::ToolTipGenerated::ToolTipGenerated()
{
}

DirectUI::ToolTipGenerated::~ToolTipGenerated()
{
}

HRESULT DirectUI::ToolTipGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ToolTip)))
    {
        *ppObject = static_cast<DirectUI::ToolTip*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IToolTip)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IToolTip*>(this);
    }
    else
    {
        RRETURN(DirectUI::ContentControl::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::ToolTipGenerated::get_HorizontalOffset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToolTip_HorizontalOffset, pValue));
}
IFACEMETHODIMP DirectUI::ToolTipGenerated::put_HorizontalOffset(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToolTip_HorizontalOffset, value));
}
IFACEMETHODIMP DirectUI::ToolTipGenerated::get_IsOpen(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToolTip_IsOpen, pValue));
}
IFACEMETHODIMP DirectUI::ToolTipGenerated::put_IsOpen(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToolTip_IsOpen, value));
}
IFACEMETHODIMP DirectUI::ToolTipGenerated::get_Placement(_Out_ ABI::Microsoft::UI::Xaml::Controls::Primitives::PlacementMode* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToolTip_Placement, pValue));
}
IFACEMETHODIMP DirectUI::ToolTipGenerated::put_Placement(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::PlacementMode value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToolTip_Placement, value));
}
IFACEMETHODIMP DirectUI::ToolTipGenerated::get_PlacementRect(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Rect>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToolTip_PlacementRect, ppValue));
}
IFACEMETHODIMP DirectUI::ToolTipGenerated::put_PlacementRect(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Rect>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToolTip_PlacementRect, pValue));
}
IFACEMETHODIMP DirectUI::ToolTipGenerated::get_PlacementTarget(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToolTip_PlacementTarget, ppValue));
}
IFACEMETHODIMP DirectUI::ToolTipGenerated::put_PlacementTarget(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToolTip_PlacementTarget, pValue));
}
IFACEMETHODIMP DirectUI::ToolTipGenerated::get_TemplateSettings(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToolTip_TemplateSettings, ppValue));
}
_Check_return_ HRESULT DirectUI::ToolTipGenerated::put_TemplateSettings(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToolTip_TemplateSettings, pValue));
}
IFACEMETHODIMP DirectUI::ToolTipGenerated::get_VerticalOffset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ToolTip_VerticalOffset, pValue));
}
IFACEMETHODIMP DirectUI::ToolTipGenerated::put_VerticalOffset(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ToolTip_VerticalOffset, value));
}

// Events.
_Check_return_ HRESULT DirectUI::ToolTipGenerated::GetClosedEventSourceNoRef(_Outptr_ ClosedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::ToolTip_Closed, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<ClosedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::ToolTip_Closed, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::ToolTip_Closed, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::ToolTipGenerated::add_Closed(_In_ ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    ClosedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetClosedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::ToolTipGenerated::remove_Closed(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    ClosedEventSourceType* pEventSource = nullptr;
    ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue = (ABI::Microsoft::UI::Xaml::IRoutedEventHandler*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetClosedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::ToolTip_Closed));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::ToolTipGenerated::GetOpenedEventSourceNoRef(_Outptr_ OpenedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::ToolTip_Opened, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<OpenedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::ToolTip_Opened, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::ToolTip_Opened, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::ToolTipGenerated::add_Opened(_In_ ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    OpenedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetOpenedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::ToolTipGenerated::remove_Opened(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    OpenedEventSourceType* pEventSource = nullptr;
    ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue = (ABI::Microsoft::UI::Xaml::IRoutedEventHandler*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetOpenedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::ToolTip_Opened));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.

_Check_return_ HRESULT DirectUI::ToolTipGenerated::EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler, _In_ BOOLEAN handledEventsToo)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::ToolTip_Closed:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::IRoutedEventHandler> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                ClosedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetClosedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get(), handledEventsToo));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::ToolTip_Opened:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::IRoutedEventHandler> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                OpenedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetOpenedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get(), handledEventsToo));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::ContentControlGenerated::EventAddHandlerByIndex(nEventIndex, pHandler, handledEventsToo));
        break;
    }

    return S_OK;
}

_Check_return_ HRESULT DirectUI::ToolTipGenerated::EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::ToolTip_Closed:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::IRoutedEventHandler> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                ClosedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetClosedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::ToolTip_Opened:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::IRoutedEventHandler> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                OpenedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetOpenedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::ContentControlGenerated::EventRemoveHandlerByIndex(nEventIndex, pHandler));
        break;
    }

    return S_OK;
}

HRESULT DirectUI::ToolTipFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IToolTipFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IToolTipFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IToolTipStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IToolTipStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::ToolTipFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IToolTip** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::IToolTip);
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
IFACEMETHODIMP DirectUI::ToolTipFactory::get_HorizontalOffsetProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ToolTip_HorizontalOffset, ppValue));
}
IFACEMETHODIMP DirectUI::ToolTipFactory::get_IsOpenProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ToolTip_IsOpen, ppValue));
}
IFACEMETHODIMP DirectUI::ToolTipFactory::get_PlacementProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ToolTip_Placement, ppValue));
}
IFACEMETHODIMP DirectUI::ToolTipFactory::get_PlacementTargetProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ToolTip_PlacementTarget, ppValue));
}
IFACEMETHODIMP DirectUI::ToolTipFactory::get_PlacementRectProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ToolTip_PlacementRect, ppValue));
}
IFACEMETHODIMP DirectUI::ToolTipFactory::get_VerticalOffsetProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ToolTip_VerticalOffset, ppValue));
}


// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ToolTip()
    {
        RRETURN(ctl::ActivationFactoryCreator<ToolTipFactory>::CreateActivationFactory());
    }
}
