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

#include "RectangleGeometry.g.h"

// Constructors/destructors.
DirectUI::RectangleGeometry::RectangleGeometry()
{
}

DirectUI::RectangleGeometry::~RectangleGeometry()
{
}

HRESULT DirectUI::RectangleGeometry::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::RectangleGeometry)))
    {
        *ppObject = static_cast<DirectUI::RectangleGeometry*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IRectangleGeometry)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IRectangleGeometry*>(this);
    }
    else
    {
        RRETURN(DirectUI::Geometry::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
_Check_return_ HRESULT DirectUI::RectangleGeometry::get_RadiusX(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RectangleGeometry_RadiusX, pValue));
}
_Check_return_ HRESULT DirectUI::RectangleGeometry::put_RadiusX(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RectangleGeometry_RadiusX, value));
}
_Check_return_ HRESULT DirectUI::RectangleGeometry::get_RadiusY(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RectangleGeometry_RadiusY, pValue));
}
_Check_return_ HRESULT DirectUI::RectangleGeometry::put_RadiusY(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RectangleGeometry_RadiusY, value));
}
IFACEMETHODIMP DirectUI::RectangleGeometry::get_Rect(_Out_ ABI::Windows::Foundation::Rect* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RectangleGeometry_Rect, pValue));
}
IFACEMETHODIMP DirectUI::RectangleGeometry::put_Rect(_In_ ABI::Windows::Foundation::Rect value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RectangleGeometry_Rect, value));
}

// Events.

// Methods.

HRESULT DirectUI::RectangleGeometryFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IRectangleGeometryStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IRectangleGeometryStatics*>(this);
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
IFACEMETHODIMP DirectUI::RectangleGeometryFactory::get_RectProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RectangleGeometry_Rect, ppValue));
}



// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_RectangleGeometry()
    {
        RRETURN(ctl::ActivationFactoryCreator<RectangleGeometryFactory>::CreateActivationFactory());
    }
}
