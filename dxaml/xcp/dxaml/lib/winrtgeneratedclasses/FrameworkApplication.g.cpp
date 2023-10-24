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

#include "FrameworkApplication.g.h"
#include "DebugSettings.g.h"
#include "LaunchActivatedEventArgs.g.h"
#include "ResourceDictionary.g.h"
#include "WindowCreatedEventArgs.g.h"
#include "XamlIsland.g.h"

// Constructors/destructors.
DirectUI::FrameworkApplicationGenerated::FrameworkApplicationGenerated()
{
}

DirectUI::FrameworkApplicationGenerated::~FrameworkApplicationGenerated()
{
}

HRESULT DirectUI::FrameworkApplicationGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::FrameworkApplication)))
    {
        *ppObject = static_cast<DirectUI::FrameworkApplication*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IApplication)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IApplication*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IApplicationOverrides)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IApplicationOverrides*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IFrameworkApplicationPrivate)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IFrameworkApplicationPrivate*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IApplication2)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::IApplication2>(this);
    }
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IApplicationFeature_UwpSupportApi)) && Feature_UwpSupportApi::IsEnabled())
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IApplicationFeature_UwpSupportApi*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IApplicationOverridesFeature_UwpSupportApi)) && Feature_UwpSupportApi::IsEnabled())
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IApplicationOverridesFeature_UwpSupportApi*>(this);
    }
#endif
    else
    {
        RRETURN(ctl::WeakReferenceSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::get_DebugSettings(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDebugSettings** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    
    IFC(static_cast<FrameworkApplication*>(this)->get_DebugSettingsImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::get_FocusVisualKind(_Out_ ABI::Microsoft::UI::Xaml::FocusVisualKind* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    
    IFC(static_cast<FrameworkApplication*>(this)->get_FocusVisualKindImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::put_FocusVisualKind(_In_ ABI::Microsoft::UI::Xaml::FocusVisualKind value)
{
    HRESULT hr = S_OK;
    
    
    IFC(static_cast<FrameworkApplication*>(this)->put_FocusVisualKindImpl(value));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::get_HighContrastAdjustment(_Out_ ABI::Microsoft::UI::Xaml::ApplicationHighContrastAdjustment* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    
    IFC(static_cast<FrameworkApplication*>(this)->get_HighContrastAdjustmentImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::put_HighContrastAdjustment(_In_ ABI::Microsoft::UI::Xaml::ApplicationHighContrastAdjustment value)
{
    HRESULT hr = S_OK;
    
    
    IFC(static_cast<FrameworkApplication*>(this)->put_HighContrastAdjustmentImpl(value));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::get_RequestedTheme(_Out_ ABI::Microsoft::UI::Xaml::ApplicationTheme* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    
    IFC(static_cast<FrameworkApplication*>(this)->get_RequestedThemeImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::put_RequestedTheme(_In_ ABI::Microsoft::UI::Xaml::ApplicationTheme value)
{
    HRESULT hr = S_OK;
    
    
    IFC(static_cast<FrameworkApplication*>(this)->put_RequestedThemeImpl(value));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::get_RequiresPointerMode(_Out_ ABI::Microsoft::UI::Xaml::ApplicationRequiresPointerMode* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    
    IFC(static_cast<FrameworkApplication*>(this)->get_RequiresPointerModeImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::put_RequiresPointerMode(_In_ ABI::Microsoft::UI::Xaml::ApplicationRequiresPointerMode value)
{
    HRESULT hr = S_OK;
    
    
    IFC(static_cast<FrameworkApplication*>(this)->put_RequiresPointerModeImpl(value));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::get_Resources(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IResourceDictionary** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    
    IFC(static_cast<FrameworkApplication*>(this)->get_ResourcesImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::put_Resources(_In_opt_ ABI::Microsoft::UI::Xaml::IResourceDictionary* pValue)
{
    HRESULT hr = S_OK;
    
    
    IFC(static_cast<FrameworkApplication*>(this)->put_ResourcesImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::get_Windows(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVectorView<ABI::Microsoft::UI::Xaml::Window*>** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    
    IFC(static_cast<FrameworkApplication*>(this)->get_WindowsImpl(ppValue));
Cleanup:
    RRETURN(hr);
}

HRESULT DirectUI::FrameworkApplicationGenerated::EventAddPreValidation(_In_ void* const pValue, EventRegistrationToken* const ptToken) const
{
    HRESULT hr = S_OK;

    ARG_VALIDRETURNPOINTER(ptToken);
    ARG_NOTNULL(pValue, "value");
    IFC(CheckThread());

Cleanup:
    return S_OK;
}
// Events.

// Methods.
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::CreateIsland(_Outptr_ ABI::Microsoft::UI::Xaml::Hosting::IXamlIsland** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkApplication_CreateIsland);
    }
    ARG_VALIDRETURNPOINTER(ppResult);
    
    IFC(static_cast<FrameworkApplication*>(this)->CreateIslandImpl(ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::CreateIslandWithContentBridge(_In_ IInspectable* pOwner, _In_opt_ IInspectable* pContentBridge, _Outptr_ ABI::Microsoft::UI::Xaml::Hosting::IXamlIsland** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkApplication_CreateIslandWithContentBridge);
    }
    ARG_NOTNULL(pOwner, "owner");
    ARG_VALIDRETURNPOINTER(ppResult);
    
    IFC(static_cast<FrameworkApplication*>(this)->CreateIslandWithContentBridgeImpl(pOwner, pContentBridge, ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::Exit()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkApplication_Exit);
    }
    
    
    IFC(static_cast<FrameworkApplication*>(this)->ExitImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::OnActivated(_In_ ABI::Windows::ApplicationModel::Activation::IActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkApplication_OnActivated);
    }
    ARG_NOTNULL(pArgs, "args");
    
    IFC(static_cast<FrameworkApplication*>(this)->OnActivatedImpl(pArgs));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
#endif

#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
_Check_return_ HRESULT DirectUI::FrameworkApplicationGenerated::OnActivatedProtected(_In_ ABI::Windows::ApplicationModel::Activation::IActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::IApplicationOverridesFeature_UwpSupportApi* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnActivated(pArgs));
    }
    else
    {
        IFC(OnActivated(pArgs));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
#endif
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::OnBackgroundActivated(_In_ ABI::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkApplication_OnBackgroundActivated);
    }
    ARG_NOTNULL(pArgs, "args");
    
    IFC(static_cast<FrameworkApplication*>(this)->OnBackgroundActivatedImpl(pArgs));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
#endif

#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
_Check_return_ HRESULT DirectUI::FrameworkApplicationGenerated::OnBackgroundActivatedProtected(_In_ ABI::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::IApplicationOverridesFeature_UwpSupportApi* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnBackgroundActivated(pArgs));
    }
    else
    {
        IFC(OnBackgroundActivated(pArgs));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
#endif
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::OnCachedFileUpdaterActivated(_In_ ABI::Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkApplication_OnCachedFileUpdaterActivated);
    }
    ARG_NOTNULL(pArgs, "args");
    
    IFC(static_cast<FrameworkApplication*>(this)->OnCachedFileUpdaterActivatedImpl(pArgs));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
#endif

#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
_Check_return_ HRESULT DirectUI::FrameworkApplicationGenerated::OnCachedFileUpdaterActivatedProtected(_In_ ABI::Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::IApplicationOverridesFeature_UwpSupportApi* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnCachedFileUpdaterActivated(pArgs));
    }
    else
    {
        IFC(OnCachedFileUpdaterActivated(pArgs));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
#endif
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::OnFileActivated(_In_ ABI::Windows::ApplicationModel::Activation::IFileActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkApplication_OnFileActivated);
    }
    ARG_NOTNULL(pArgs, "args");
    
    IFC(static_cast<FrameworkApplication*>(this)->OnFileActivatedImpl(pArgs));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
#endif

#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
_Check_return_ HRESULT DirectUI::FrameworkApplicationGenerated::OnFileActivatedProtected(_In_ ABI::Windows::ApplicationModel::Activation::IFileActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::IApplicationOverridesFeature_UwpSupportApi* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnFileActivated(pArgs));
    }
    else
    {
        IFC(OnFileActivated(pArgs));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
#endif
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::OnFileOpenPickerActivated(_In_ ABI::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkApplication_OnFileOpenPickerActivated);
    }
    ARG_NOTNULL(pArgs, "args");
    
    IFC(static_cast<FrameworkApplication*>(this)->OnFileOpenPickerActivatedImpl(pArgs));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
#endif

#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
_Check_return_ HRESULT DirectUI::FrameworkApplicationGenerated::OnFileOpenPickerActivatedProtected(_In_ ABI::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::IApplicationOverridesFeature_UwpSupportApi* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnFileOpenPickerActivated(pArgs));
    }
    else
    {
        IFC(OnFileOpenPickerActivated(pArgs));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
#endif
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::OnFileSavePickerActivated(_In_ ABI::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkApplication_OnFileSavePickerActivated);
    }
    ARG_NOTNULL(pArgs, "args");
    
    IFC(static_cast<FrameworkApplication*>(this)->OnFileSavePickerActivatedImpl(pArgs));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
#endif

#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
_Check_return_ HRESULT DirectUI::FrameworkApplicationGenerated::OnFileSavePickerActivatedProtected(_In_ ABI::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::IApplicationOverridesFeature_UwpSupportApi* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnFileSavePickerActivated(pArgs));
    }
    else
    {
        IFC(OnFileSavePickerActivated(pArgs));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
#endif
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::OnLaunched(_In_ ABI::Microsoft::UI::Xaml::ILaunchActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkApplication_OnLaunched);
    }
    ARG_NOTNULL(pArgs, "args");
    
    IFC(static_cast<FrameworkApplication*>(this)->OnLaunchedImpl(pArgs));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::FrameworkApplicationGenerated::OnLaunchedProtected(_In_ ABI::Microsoft::UI::Xaml::ILaunchActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::IApplicationOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnLaunched(pArgs));
    }
    else
    {
        IFC(OnLaunched(pArgs));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::OnSearchActivated(_In_ ABI::Windows::ApplicationModel::Activation::ISearchActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkApplication_OnSearchActivated);
    }
    ARG_NOTNULL(pArgs, "args");
    
    IFC(static_cast<FrameworkApplication*>(this)->OnSearchActivatedImpl(pArgs));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
#endif

#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
_Check_return_ HRESULT DirectUI::FrameworkApplicationGenerated::OnSearchActivatedProtected(_In_ ABI::Windows::ApplicationModel::Activation::ISearchActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::IApplicationOverridesFeature_UwpSupportApi* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnSearchActivated(pArgs));
    }
    else
    {
        IFC(OnSearchActivated(pArgs));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
#endif
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::OnShareTargetActivated(_In_ ABI::Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkApplication_OnShareTargetActivated);
    }
    ARG_NOTNULL(pArgs, "args");
    
    IFC(static_cast<FrameworkApplication*>(this)->OnShareTargetActivatedImpl(pArgs));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
#endif

#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
_Check_return_ HRESULT DirectUI::FrameworkApplicationGenerated::OnShareTargetActivatedProtected(_In_ ABI::Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::IApplicationOverridesFeature_UwpSupportApi* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnShareTargetActivated(pArgs));
    }
    else
    {
        IFC(OnShareTargetActivated(pArgs));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
#endif
#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::OnWindowCreated(_In_ ABI::Microsoft::UI::Xaml::IWindowCreatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkApplication_OnWindowCreated);
    }
    ARG_NOTNULL(pArgs, "args");
    
    IFC(static_cast<FrameworkApplication*>(this)->OnWindowCreatedImpl(pArgs));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
#endif

#if WI_IS_FEATURE_PRESENT(Feature_UwpSupportApi)
_Check_return_ HRESULT DirectUI::FrameworkApplicationGenerated::OnWindowCreatedProtected(_In_ ABI::Microsoft::UI::Xaml::IWindowCreatedEventArgs* pArgs)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::IApplicationOverridesFeature_UwpSupportApi* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnWindowCreated(pArgs));
    }
    else
    {
        IFC(OnWindowCreated(pArgs));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
#endif
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::RemoveIsland(_In_ ABI::Microsoft::UI::Xaml::Hosting::IXamlIsland* pIsland)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkApplication_RemoveIsland);
    }
    ARG_NOTNULL(pIsland, "island");
    
    IFC(static_cast<FrameworkApplication*>(this)->RemoveIslandImpl(pIsland));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::SetSynchronizationWindow(_In_ UINT64 commitResizeWindow)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkApplication_SetSynchronizationWindow);
    }
    
    
    IFC(static_cast<FrameworkApplication*>(this)->SetSynchronizationWindowImpl(commitResizeWindow));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationGenerated::StartOnCurrentThread(_In_opt_ ABI::Microsoft::UI::Xaml::IApplicationInitializationCallback* pCallback)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(this, KnownMethodIndex::FrameworkApplication_StartOnCurrentThread);
    }
    
    
    IFC(static_cast<FrameworkApplication*>(this)->StartOnCurrentThreadImpl(pCallback));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(this, hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::FrameworkApplicationFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IApplicationFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IApplicationFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IApplicationStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IApplicationStatics*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IFrameworkApplicationStaticsPrivate)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IFrameworkApplicationStaticsPrivate*>(this);
    }
    else
    {
        RRETURN(ctl::AggregableActivationFactory<DirectUI::FrameworkApplication>::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

_Check_return_ HRESULT DirectUI::FrameworkApplicationFactory::CheckActivationAllowed()
{
    RRETURN(S_OK);
}

// Factory methods.
IFACEMETHODIMP DirectUI::FrameworkApplicationFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IApplication** ppInstance)
{


    // Can't just IFC(_RETURN) this because for some validate calls (those with multiple template parameters), the
    // preprocessor gets confused at the "," in the template type-list before the function's opening parenthesis.
    // So we'll use IFC_RETURN syntax with a local hr variable, kind of weirdly.
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithAggregableActivationFactory<DirectUI::FrameworkApplication,ABI::Microsoft::UI::Xaml::IApplication>(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), true /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.

// Attached properties.

// Static properties.
IFACEMETHODIMP DirectUI::FrameworkApplicationFactory::get_Current(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IApplication** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    
    IFC(get_CurrentImpl(ppValue));
Cleanup:
    RRETURN(hr);
}

// Static methods.
IFACEMETHODIMP DirectUI::FrameworkApplicationFactory::Start(_In_opt_ ABI::Microsoft::UI::Xaml::IApplicationInitializationCallback* pCallback)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::FrameworkApplication_Start);
    }
    
    
    IFC(StartImpl(pCallback));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationFactory::LoadComponent(_In_ IInspectable* pComponent, _In_ ABI::Windows::Foundation::IUriRuntimeClass* pResourceLocator)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::FrameworkApplication_LoadComponent);
    }
    ARG_NOTNULL(pComponent, "component");
    ARG_NOTNULL(pResourceLocator, "resourceLocator");
    
    IFC(LoadComponentImpl(pComponent, pResourceLocator));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationFactory::LoadComponentWithResourceLocation(_In_ IInspectable* pComponent, _In_ ABI::Windows::Foundation::IUriRuntimeClass* pResourceLocator, _In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::ComponentResourceLocation componentResourceLocation)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::FrameworkApplication_LoadComponentWithResourceLocation);
    }
    ARG_NOTNULL(pComponent, "component");
    ARG_NOTNULL(pResourceLocator, "resourceLocator");
    
    IFC(LoadComponentWithResourceLocationImpl(pComponent, pResourceLocator, componentResourceLocation));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::FrameworkApplicationFactory::EnableFailFastOnStowedException()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        ApiEtwStart(nullptr, KnownMethodIndex::FrameworkApplication_EnableFailFastOnStowedException);
    }
    
    
    IFC(EnableFailFastOnStowedExceptionImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        ApiEtwStop(nullptr, hr);
    }
    RRETURN(hr);
}

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_FrameworkApplication()
    {
        RRETURN(ctl::ActivationFactoryCreator<FrameworkApplicationFactory>::CreateActivationFactory());
    }
}
