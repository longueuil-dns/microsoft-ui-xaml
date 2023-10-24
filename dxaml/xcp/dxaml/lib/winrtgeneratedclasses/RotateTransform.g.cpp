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

#include "RotateTransform.g.h"

// Constructors/destructors.
DirectUI::RotateTransform::RotateTransform()
{
}

DirectUI::RotateTransform::~RotateTransform()
{
}

HRESULT DirectUI::RotateTransform::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::RotateTransform)))
    {
        *ppObject = static_cast<DirectUI::RotateTransform*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IRotateTransform)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IRotateTransform*>(this);
    }
    else
    {
        RRETURN(DirectUI::Transform::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::RotateTransform::get_Angle(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RotateTransform_Angle, pValue));
}
IFACEMETHODIMP DirectUI::RotateTransform::put_Angle(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RotateTransform_Angle, value));
}
_Check_return_ HRESULT DirectUI::RotateTransform::get_AngleAnimation(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RotateTransform_AngleAnimation, ppValue));
}
_Check_return_ HRESULT DirectUI::RotateTransform::put_AngleAnimation(_In_opt_ IInspectable* pValue)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RotateTransform_AngleAnimation, pValue));
}
IFACEMETHODIMP DirectUI::RotateTransform::get_CenterX(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RotateTransform_CenterX, pValue));
}
IFACEMETHODIMP DirectUI::RotateTransform::put_CenterX(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RotateTransform_CenterX, value));
}
_Check_return_ HRESULT DirectUI::RotateTransform::get_CenterXAnimation(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RotateTransform_CenterXAnimation, ppValue));
}
_Check_return_ HRESULT DirectUI::RotateTransform::put_CenterXAnimation(_In_opt_ IInspectable* pValue)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RotateTransform_CenterXAnimation, pValue));
}
IFACEMETHODIMP DirectUI::RotateTransform::get_CenterY(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RotateTransform_CenterY, pValue));
}
IFACEMETHODIMP DirectUI::RotateTransform::put_CenterY(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RotateTransform_CenterY, value));
}
_Check_return_ HRESULT DirectUI::RotateTransform::get_CenterYAnimation(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RotateTransform_CenterYAnimation, ppValue));
}
_Check_return_ HRESULT DirectUI::RotateTransform::put_CenterYAnimation(_In_opt_ IInspectable* pValue)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RotateTransform_CenterYAnimation, pValue));
}

// Events.

// Methods.

HRESULT DirectUI::RotateTransformFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IRotateTransformStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IRotateTransformStatics*>(this);
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
IFACEMETHODIMP DirectUI::RotateTransformFactory::get_CenterXProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RotateTransform_CenterX, ppValue));
}

IFACEMETHODIMP DirectUI::RotateTransformFactory::get_CenterYProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RotateTransform_CenterY, ppValue));
}

IFACEMETHODIMP DirectUI::RotateTransformFactory::get_AngleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RotateTransform_Angle, ppValue));
}


// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_RotateTransform()
    {
        RRETURN(ctl::ActivationFactoryCreator<RotateTransformFactory>::CreateActivationFactory());
    }
}
