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

#include "XamlRoot.g.h"
#include "UIElement.g.h"

// Constructors/destructors.
DirectUI::XamlRootGenerated::XamlRootGenerated()
{
}

DirectUI::XamlRootGenerated::~XamlRootGenerated()
{
}

HRESULT DirectUI::XamlRootGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::XamlRoot)))
    {
        *ppObject = static_cast<DirectUI::XamlRoot*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IXamlRoot)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IXamlRoot*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IXamlRoot2)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::IXamlRoot2>(this);
    }
    else
    {
        RRETURN(ctl::WeakReferenceSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::XamlRootGenerated::get_Content(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(static_cast<XamlRoot*>(this)->get_ContentImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::XamlRootGenerated::get_ContentIslandEnvironment(_Outptr_result_maybenull_ ABI::Microsoft::UI::Content::IContentIslandEnvironment** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(static_cast<XamlRoot*>(this)->get_ContentIslandEnvironmentImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::XamlRootGenerated::get_IsHostVisible(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<XamlRoot*>(this)->get_IsHostVisibleImpl(pValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::XamlRootGenerated::get_IsInputActive(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<XamlRoot*>(this)->get_IsInputActiveImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::XamlRootGenerated::get_RasterizationScale(_Out_ DOUBLE* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<XamlRoot*>(this)->get_RasterizationScaleImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::XamlRootGenerated::get_Size(_Out_ ABI::Windows::Foundation::Size* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<XamlRoot*>(this)->get_SizeImpl(pValue));
Cleanup:
    RRETURN(hr);
}

HRESULT DirectUI::XamlRootGenerated::EventAddPreValidation(_In_ void* const pValue, EventRegistrationToken* const ptToken) const
{
    HRESULT hr = S_OK;

    ARG_VALIDRETURNPOINTER(ptToken);
    ARG_NOTNULL(pValue, "value");
    IFC(CheckThread());

Cleanup:
    return S_OK;
}
// Events.
IFACEMETHODIMP DirectUI::XamlRootGenerated::add_Changed(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::XamlRoot*, ABI::Microsoft::UI::Xaml::XamlRootChangedEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    ChangedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));

    IFC(GetChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::XamlRootGenerated::remove_Changed(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    ChangedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::XamlRoot*, ABI::Microsoft::UI::Xaml::XamlRootChangedEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::XamlRoot*, ABI::Microsoft::UI::Xaml::XamlRootChangedEventArgs*>*)tToken.value;

    IFC(CheckThread());
    IFC(GetChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));


Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::XamlRootGenerated::add_InputActivationChanged(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::XamlRoot*, ABI::Microsoft::UI::Xaml::XamlRootChangedEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    InputActivationChangedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));

    IFC(GetInputActivationChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

_Check_return_ HRESULT DirectUI::XamlRootGenerated::remove_InputActivationChanged(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    InputActivationChangedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::XamlRoot*, ABI::Microsoft::UI::Xaml::XamlRootChangedEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::XamlRoot*, ABI::Microsoft::UI::Xaml::XamlRootChangedEventArgs*>*)tToken.value;

    IFC(CheckThread());
    IFC(GetInputActivationChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));


Cleanup:
    RRETURN(hr);
}

// Methods.


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_XamlRoot()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::AbstractActivationFactory>::CreateActivationFactory());
    }
}
