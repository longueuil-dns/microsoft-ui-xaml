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

#include "RenderTargetBitmap.g.h"
#include "UIElement.g.h"

// Constructors/destructors.
DirectUI::RenderTargetBitmapGenerated::RenderTargetBitmapGenerated()
{
}

DirectUI::RenderTargetBitmapGenerated::~RenderTargetBitmapGenerated()
{
}

HRESULT DirectUI::RenderTargetBitmapGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::RenderTargetBitmap)))
    {
        *ppObject = static_cast<DirectUI::RenderTargetBitmap*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Imaging::IRenderTargetBitmap)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Imaging::IRenderTargetBitmap*>(this);
    }
    else
    {
        RRETURN(DirectUI::ImageSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::RenderTargetBitmapGenerated::get_PixelHeight(_Out_ INT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RenderTargetBitmap_PixelHeight, pValue));
}
IFACEMETHODIMP DirectUI::RenderTargetBitmapGenerated::get_PixelWidth(_Out_ INT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RenderTargetBitmap_PixelWidth, pValue));
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::RenderTargetBitmapGenerated::GetPixelsAsync(_Outptr_ ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*>** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::RenderTargetBitmap_GetPixelsAsync);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<RenderTargetBitmap*>(this)->GetPixelsAsyncImpl(ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RenderTargetBitmapGenerated::RenderAsync(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _Outptr_ ABI::Windows::Foundation::IAsyncAction** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::RenderTargetBitmap_RenderAsync);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<RenderTargetBitmap*>(this)->RenderAsyncImpl(pElement, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RenderTargetBitmapGenerated::RenderToSizeAsync(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _In_ INT scaledWidth, _In_ INT scaledHeight, _Outptr_ ABI::Windows::Foundation::IAsyncAction** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::RenderTargetBitmap_RenderToSizeAsync);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<RenderTargetBitmap*>(this)->RenderToSizeAsyncImpl(pElement, scaledWidth, scaledHeight, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::RenderTargetBitmapFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics*>(this);
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
IFACEMETHODIMP DirectUI::RenderTargetBitmapFactory::get_PixelWidthProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RenderTargetBitmap_PixelWidth, ppValue));
}
IFACEMETHODIMP DirectUI::RenderTargetBitmapFactory::get_PixelHeightProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RenderTargetBitmap_PixelHeight, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_RenderTargetBitmap()
    {
        RRETURN(ctl::ActivationFactoryCreator<RenderTargetBitmapFactory>::CreateActivationFactory());
    }
}
