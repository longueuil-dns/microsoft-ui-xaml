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

#include "DataTemplateSelector.g.h"
#include "DataTemplate.g.h"
#include "ElementFactoryGetArgs.g.h"
#include "ElementFactoryRecycleArgs.g.h"
#include "UIElement.g.h"

// Constructors/destructors.
DirectUI::DataTemplateSelectorGenerated::DataTemplateSelectorGenerated()
{
}

DirectUI::DataTemplateSelectorGenerated::~DataTemplateSelectorGenerated()
{
}

HRESULT DirectUI::DataTemplateSelectorGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::DataTemplateSelector)))
    {
        *ppObject = static_cast<DirectUI::DataTemplateSelector*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelectorOverrides)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelectorOverrides*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IElementFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IElementFactory*>(this);
    }
    else
    {
        RRETURN(ctl::WeakReferenceSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.
IFACEMETHODIMP DirectUI::DataTemplateSelectorGenerated::GetElement(_In_ ABI::Microsoft::UI::Xaml::IElementFactoryGetArgs* pArgs, _Outptr_ ABI::Microsoft::UI::Xaml::IUIElement** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::DataTemplateSelector_GetElement);
    }
    ARG_NOTNULL(pArgs, "args");
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(static_cast<DataTemplateSelector*>(this)->GetElementImpl(pArgs, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DataTemplateSelectorGenerated::RecycleElement(_In_ ABI::Microsoft::UI::Xaml::IElementFactoryRecycleArgs* pArgs)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::DataTemplateSelector_RecycleElement);
    }
    ARG_NOTNULL(pArgs, "args");
    IFC(CheckThread());
    IFC(static_cast<DataTemplateSelector*>(this)->RecycleElementImpl(pArgs));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DataTemplateSelectorGenerated::SelectTemplate(_In_opt_ IInspectable* pItem, _In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pContainer, _Outptr_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppReturnValue)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelectorOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->SelectTemplateCore(pItem, pContainer, ppReturnValue));
    }
    else
    {
        IFC(SelectTemplateCore(pItem, pContainer, ppReturnValue));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}

IFACEMETHODIMP DirectUI::DataTemplateSelectorGenerated::SelectTemplateCore(_In_opt_ IInspectable* pItem, _In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pContainer, _Outptr_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::DataTemplateSelector_SelectTemplate);
    }
    ARG_NOTNULL(pContainer, "container");
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(static_cast<DataTemplateSelector*>(this)->SelectTemplateCoreImpl(pItem, pContainer, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DataTemplateSelectorGenerated::SelectTemplateForItem(_In_opt_ IInspectable* pItem, _Outptr_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppReturnValue)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelectorOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->SelectTemplateForItemCore(pItem, ppReturnValue));
    }
    else
    {
        IFC(SelectTemplateForItemCore(pItem, ppReturnValue));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}

IFACEMETHODIMP DirectUI::DataTemplateSelectorGenerated::SelectTemplateForItemCore(_In_opt_ IInspectable* pItem, _Outptr_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::DataTemplateSelector_SelectTemplateForItem);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(static_cast<DataTemplateSelector*>(this)->SelectTemplateForItemCoreImpl(pItem, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::DataTemplateSelectorFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelectorFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelectorFactory*>(this);
    }
    else
    {
        RRETURN(ctl::AggregableActivationFactory<DirectUI::DataTemplateSelector>::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::DataTemplateSelectorFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector** ppInstance)
{


    // Can't just IFC(_RETURN) this because for some validate calls (those with multiple template parameters), the
    // preprocessor gets confused at the "," in the template type-list before the function's opening parenthesis.
    // So we'll use IFC_RETURN syntax with a local hr variable, kind of weirdly.
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithAggregableActivationFactory<DirectUI::DataTemplateSelector,ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector>(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_DataTemplateSelector()
    {
        RRETURN(ctl::ActivationFactoryCreator<DataTemplateSelectorFactory>::CreateActivationFactory());
    }
}
