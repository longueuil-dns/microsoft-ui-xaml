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

#include "AutomationAnnotation.g.h"
#include "UIElement.g.h"

// Constructors/destructors.
DirectUI::AutomationAnnotation::AutomationAnnotation()
{
}

DirectUI::AutomationAnnotation::~AutomationAnnotation()
{
}

HRESULT DirectUI::AutomationAnnotation::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::AutomationAnnotation)))
    {
        *ppObject = static_cast<DirectUI::AutomationAnnotation*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::IAutomationAnnotation)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::IAutomationAnnotation*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::AutomationAnnotation::get_Element(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutomationAnnotation_Element, ppValue));
}
IFACEMETHODIMP DirectUI::AutomationAnnotation::put_Element(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutomationAnnotation_Element, pValue));
}
IFACEMETHODIMP DirectUI::AutomationAnnotation::get_Type(_Out_ ABI::Microsoft::UI::Xaml::Automation::AnnotationType* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutomationAnnotation_Type, pValue));
}
IFACEMETHODIMP DirectUI::AutomationAnnotation::put_Type(_In_ ABI::Microsoft::UI::Xaml::Automation::AnnotationType value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutomationAnnotation_Type, value));
}

// Events.

// Methods.

HRESULT DirectUI::AutomationAnnotationFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::IAutomationAnnotationFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::IAutomationAnnotationFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Automation::IAutomationAnnotationStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Automation::IAutomationAnnotationStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::AutomationAnnotationFactory::CreateInstance(_In_ ABI::Microsoft::UI::Xaml::Automation::AnnotationType type, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::IAutomationAnnotation** ppInstance)
{
    HRESULT hr = S_OK;
    
    ARG_VALIDRETURNPOINTER(ppInstance);
    IFC(CreateInstanceImpl(type, ppInstance));
Cleanup:
    return hr;
}
IFACEMETHODIMP DirectUI::AutomationAnnotationFactory::CreateWithElementParameter(_In_ ABI::Microsoft::UI::Xaml::Automation::AnnotationType type, _In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::IAutomationAnnotation** ppInstance)
{
    HRESULT hr = S_OK;
    ARG_NOTNULL(pElement, "element");
    ARG_VALIDRETURNPOINTER(ppInstance);
    IFC(CreateWithElementParameterImpl(type, pElement, ppInstance));
Cleanup:
    return hr;
}

// Dependency properties.
IFACEMETHODIMP DirectUI::AutomationAnnotationFactory::get_TypeProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AutomationAnnotation_Type, ppValue));
}
IFACEMETHODIMP DirectUI::AutomationAnnotationFactory::get_ElementProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AutomationAnnotation_Element, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_AutomationAnnotation()
    {
        RRETURN(ctl::ActivationFactoryCreator<AutomationAnnotationFactory>::CreateActivationFactory());
    }
}
