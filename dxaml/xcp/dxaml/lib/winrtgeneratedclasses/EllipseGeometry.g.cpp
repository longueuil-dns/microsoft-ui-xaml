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

#include "EllipseGeometry.g.h"

// Constructors/destructors.
DirectUI::EllipseGeometry::EllipseGeometry()
{
}

DirectUI::EllipseGeometry::~EllipseGeometry()
{
}

HRESULT DirectUI::EllipseGeometry::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::EllipseGeometry)))
    {
        *ppObject = static_cast<DirectUI::EllipseGeometry*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IEllipseGeometry)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IEllipseGeometry*>(this);
    }
    else
    {
        RRETURN(DirectUI::Geometry::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::EllipseGeometry::get_Center(_Out_ ABI::Windows::Foundation::Point* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::EllipseGeometry_Center, pValue));
}
IFACEMETHODIMP DirectUI::EllipseGeometry::put_Center(_In_ ABI::Windows::Foundation::Point value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::EllipseGeometry_Center, value));
}
IFACEMETHODIMP DirectUI::EllipseGeometry::get_RadiusX(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::EllipseGeometry_RadiusX, pValue));
}
IFACEMETHODIMP DirectUI::EllipseGeometry::put_RadiusX(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::EllipseGeometry_RadiusX, value));
}
IFACEMETHODIMP DirectUI::EllipseGeometry::get_RadiusY(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::EllipseGeometry_RadiusY, pValue));
}
IFACEMETHODIMP DirectUI::EllipseGeometry::put_RadiusY(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::EllipseGeometry_RadiusY, value));
}

// Events.

// Methods.

HRESULT DirectUI::EllipseGeometryFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IEllipseGeometryStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IEllipseGeometryStatics*>(this);
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
IFACEMETHODIMP DirectUI::EllipseGeometryFactory::get_CenterProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::EllipseGeometry_Center, ppValue));
}
IFACEMETHODIMP DirectUI::EllipseGeometryFactory::get_RadiusXProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::EllipseGeometry_RadiusX, ppValue));
}
IFACEMETHODIMP DirectUI::EllipseGeometryFactory::get_RadiusYProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::EllipseGeometry_RadiusY, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_EllipseGeometry()
    {
        RRETURN(ctl::ActivationFactoryCreator<EllipseGeometryFactory>::CreateActivationFactory());
    }
}
