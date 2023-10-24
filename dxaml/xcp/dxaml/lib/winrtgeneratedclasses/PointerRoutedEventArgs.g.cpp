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

#include "precomp.h"
#include "PointerRoutedEventArgs.g.h"
#include "CoreEventArgsGroup.h"

using namespace DirectUI;

// Constructors/destructors.
DirectUI::PointerRoutedEventArgsGenerated::PointerRoutedEventArgsGenerated()
{
}

DirectUI::PointerRoutedEventArgsGenerated::~PointerRoutedEventArgsGenerated()
{
}

HRESULT DirectUI::PointerRoutedEventArgsGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::PointerRoutedEventArgs)))
    {
        *ppObject = static_cast<DirectUI::PointerRoutedEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IPointerRoutedEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IPointerRoutedEventArgs*>(this);
    }
    else
    {
        RRETURN(DirectUI::RoutedEventArgs::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Properties.
IFACEMETHODIMP DirectUI::PointerRoutedEventArgsGenerated::get_Pointer(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Input::IPointer** ppValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    CPointer* pValueCore = nullptr;

    ARG_VALIDRETURNPOINTER(ppValue);

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CPointerEventArgs*>(pCoreEventArgsNoRef)->get_Pointer(&pValueCore));

    IFC(CValueBoxer::ConvertToFramework(pValueCore, ppValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::PointerRoutedEventArgsGenerated::get_KeyModifiers(_Out_ ABI::Windows::System::VirtualKeyModifiers* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    DirectUI::VirtualKeyModifiers valueCore;

    ARG_VALIDRETURNPOINTER(pValue);

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CPointerEventArgs*>(pCoreEventArgsNoRef)->get_KeyModifiers(&valueCore));

    IFC(CValueBoxer::ConvertToFramework(valueCore, pValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::PointerRoutedEventArgsGenerated::get_GestureFollowing(_Out_ DirectUI::GestureModes* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    DirectUI::GestureModes valueCore;

    ARG_VALIDRETURNPOINTER(pValue);

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CPointerEventArgs*>(pCoreEventArgsNoRef)->get_GestureFollowing(&valueCore));

    IFC(CValueBoxer::ConvertToFramework(valueCore, pValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::PointerRoutedEventArgsGenerated::get_Handled(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    BOOLEAN valueCore;

    ARG_VALIDRETURNPOINTER(pValue);

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CPointerEventArgs*>(pCoreEventArgsNoRef)->get_Handled(&valueCore));

    IFC(CValueBoxer::ConvertToFramework(valueCore, pValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::PointerRoutedEventArgsGenerated::put_Handled(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    BOOLEAN valueCore = value;

    

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CPointerEventArgs*>(pCoreEventArgsNoRef)->put_Handled(valueCore));


Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::PointerRoutedEventArgsGenerated::get_IsGenerated(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    BOOLEAN valueCore;

    ARG_VALIDRETURNPOINTER(pValue);

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CPointerEventArgs*>(pCoreEventArgsNoRef)->get_IsGenerated(&valueCore));

    IFC(CValueBoxer::ConvertToFramework(valueCore, pValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}

// Methods.
IFACEMETHODIMP DirectUI::PointerRoutedEventArgsGenerated::GetCurrentPoint(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pRelativeTo, _Outptr_ ABI::Microsoft::UI::Input::IPointerPoint** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::PointerRoutedEventArgs_GetCurrentPoint);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(static_cast<PointerRoutedEventArgs*>(this)->GetCurrentPointImpl(pRelativeTo, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::PointerRoutedEventArgsGenerated::GetIntermediatePoints(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pRelativeTo, _Outptr_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Input::PointerPoint*>** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::PointerRoutedEventArgs_GetIntermediatePoints);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(static_cast<PointerRoutedEventArgs*>(this)->GetIntermediatePointsImpl(pRelativeTo, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}


namespace DirectUI
{
    _Check_return_ HRESULT OnFrameworkCreatePointerRoutedEventArgs(_In_ CEventArgs* pCoreObject, _Out_ IInspectable** ppNewInstance)
    {
        HRESULT hr = S_OK;
        ctl::ComPtr<DirectUI::PointerRoutedEventArgs> spInstance;
        *ppNewInstance = nullptr;
        IFC(ctl::make(pCoreObject, &spInstance));
        *ppNewInstance = ctl::iinspectable_cast(spInstance.Detach());
    Cleanup:
        RRETURN(hr);
    }
    _Check_return_ IActivationFactory* CreateActivationFactory_PointerRoutedEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::AbstractActivationFactory>::CreateActivationFactory());
    }
}
