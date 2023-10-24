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

#pragma once

#include "Transform3D.g.h"

#define __CompositeTransform3D_GUID "63982bde-b6cd-47f0-9e1f-50cbda62bb89"

namespace DirectUI
{
    class CompositeTransform3D;

    class __declspec(novtable) __declspec(uuid(__CompositeTransform3D_GUID)) CompositeTransform3D:
        public DirectUI::Transform3D
        , public ABI::Microsoft::UI::Xaml::Media::Media3D::ICompositeTransform3D
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Media3D.CompositeTransform3D");

        BEGIN_INTERFACE_MAP(CompositeTransform3D, DirectUI::Transform3D)
            INTERFACE_ENTRY(CompositeTransform3D, ABI::Microsoft::UI::Xaml::Media::Media3D::ICompositeTransform3D)
        END_INTERFACE_MAP(CompositeTransform3D, DirectUI::Transform3D)

    public:
        CompositeTransform3D();
        ~CompositeTransform3D() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::CompositeTransform3D;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::CompositeTransform3D;
        }

        // Properties.
        IFACEMETHOD(get_CenterX)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_CenterX)(_In_ DOUBLE value) override;
        _Check_return_ HRESULT get_CenterXAnimation(_Outptr_result_maybenull_ IInspectable** ppValue);
        _Check_return_ HRESULT put_CenterXAnimation(_In_opt_ IInspectable* pValue);
        IFACEMETHOD(get_CenterY)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_CenterY)(_In_ DOUBLE value) override;
        _Check_return_ HRESULT get_CenterYAnimation(_Outptr_result_maybenull_ IInspectable** ppValue);
        _Check_return_ HRESULT put_CenterYAnimation(_In_opt_ IInspectable* pValue);
        IFACEMETHOD(get_CenterZ)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_CenterZ)(_In_ DOUBLE value) override;
        _Check_return_ HRESULT get_CenterZAnimation(_Outptr_result_maybenull_ IInspectable** ppValue);
        _Check_return_ HRESULT put_CenterZAnimation(_In_opt_ IInspectable* pValue);
        IFACEMETHOD(get_RotationX)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_RotationX)(_In_ DOUBLE value) override;
        _Check_return_ HRESULT get_RotationXAnimation(_Outptr_result_maybenull_ IInspectable** ppValue);
        _Check_return_ HRESULT put_RotationXAnimation(_In_opt_ IInspectable* pValue);
        IFACEMETHOD(get_RotationY)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_RotationY)(_In_ DOUBLE value) override;
        _Check_return_ HRESULT get_RotationYAnimation(_Outptr_result_maybenull_ IInspectable** ppValue);
        _Check_return_ HRESULT put_RotationYAnimation(_In_opt_ IInspectable* pValue);
        IFACEMETHOD(get_RotationZ)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_RotationZ)(_In_ DOUBLE value) override;
        _Check_return_ HRESULT get_RotationZAnimation(_Outptr_result_maybenull_ IInspectable** ppValue);
        _Check_return_ HRESULT put_RotationZAnimation(_In_opt_ IInspectable* pValue);
        IFACEMETHOD(get_ScaleX)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_ScaleX)(_In_ DOUBLE value) override;
        _Check_return_ HRESULT get_ScaleXAnimation(_Outptr_result_maybenull_ IInspectable** ppValue);
        _Check_return_ HRESULT put_ScaleXAnimation(_In_opt_ IInspectable* pValue);
        IFACEMETHOD(get_ScaleY)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_ScaleY)(_In_ DOUBLE value) override;
        _Check_return_ HRESULT get_ScaleYAnimation(_Outptr_result_maybenull_ IInspectable** ppValue);
        _Check_return_ HRESULT put_ScaleYAnimation(_In_opt_ IInspectable* pValue);
        IFACEMETHOD(get_ScaleZ)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_ScaleZ)(_In_ DOUBLE value) override;
        _Check_return_ HRESULT get_ScaleZAnimation(_Outptr_result_maybenull_ IInspectable** ppValue);
        _Check_return_ HRESULT put_ScaleZAnimation(_In_opt_ IInspectable* pValue);
        IFACEMETHOD(get_TranslateX)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_TranslateX)(_In_ DOUBLE value) override;
        _Check_return_ HRESULT get_TranslateXAnimation(_Outptr_result_maybenull_ IInspectable** ppValue);
        _Check_return_ HRESULT put_TranslateXAnimation(_In_opt_ IInspectable* pValue);
        IFACEMETHOD(get_TranslateY)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_TranslateY)(_In_ DOUBLE value) override;
        _Check_return_ HRESULT get_TranslateYAnimation(_Outptr_result_maybenull_ IInspectable** ppValue);
        _Check_return_ HRESULT put_TranslateYAnimation(_In_opt_ IInspectable* pValue);
        IFACEMETHOD(get_TranslateZ)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_TranslateZ)(_In_ DOUBLE value) override;
        _Check_return_ HRESULT get_TranslateZAnimation(_Outptr_result_maybenull_ IInspectable** ppValue);
        _Check_return_ HRESULT put_TranslateZAnimation(_In_opt_ IInspectable* pValue);

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
    };
}


namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) CompositeTransform3DFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics
    {
        BEGIN_INTERFACE_MAP(CompositeTransform3DFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(CompositeTransform3DFactory, ABI::Microsoft::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics)
        END_INTERFACE_MAP(CompositeTransform3DFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_CenterXProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_CenterYProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_CenterZProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_RotationXProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_RotationYProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_RotationZProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_ScaleXProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_ScaleYProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_ScaleZProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_TranslateXProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_TranslateYProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_TranslateZProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::CompositeTransform3D;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
