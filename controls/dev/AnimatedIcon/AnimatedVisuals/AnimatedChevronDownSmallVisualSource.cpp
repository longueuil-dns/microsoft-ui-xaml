﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//       LottieGen version:
//           7.1.0+ge1fa92580f
//       
//       Command:
//           LottieGen -Language Cppwinrt -WinUIVersion 2.4 -InputFile AnimatedChevronDownSmallVisualSource.json
//       
//       Input file:
//           AnimatedChevronDownSmallVisualSource.json (10093 bytes created 9:26-07:00 Jun 8 2021)
//       
//       LottieGen source:
//           http://aka.ms/Lottie
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
// ____________________________________
// |       Object stats       | Count |
// |__________________________|_______|
// | All CompositionObjects   |    53 |
// |--------------------------+-------|
// | Expression animators     |     5 |
// | KeyFrame animators       |     4 |
// | Reference parameters     |     5 |
// | Expression operations    |     4 |
// |--------------------------+-------|
// | Animated brushes         |     1 |
// | Animated gradient stops  |     - |
// | ExpressionAnimations     |     2 |
// | PathKeyFrameAnimations   |     - |
// |--------------------------+-------|
// | ContainerVisuals         |     3 |
// | ShapeVisuals             |     2 |
// |--------------------------+-------|
// | ContainerShapes          |     - |
// | CompositionSpriteShapes  |     2 |
// |--------------------------+-------|
// | Brushes                  |     1 |
// | Gradient stops           |     - |
// | CompositionVisualSurface |     - |
// ------------------------------------
#include "pch.h"
#include "AnimatedVisuals\AnimatedChevronDownSmallVisualSource.h"
#include <winrt/Windows.Foundation.Metadata.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Microsoft.UI.Composition.h>
#include "d2d1.h"
#include <d2d1_1.h>
#include <d2d1helper.h>
#include <Windows.Graphics.Interop.h>
#ifdef BUILD_WINDOWS
namespace ABI
{
#include <Windows.Graphics.Effects.Interop.h>
}
#else
#include <Windows.Graphics.Effects.Interop.h>
#endif
#include <winrt/Windows.Graphics.Effects.h>

using namespace winrt::Microsoft::UI::Xaml::Controls;
using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Foundation::Numerics;
using namespace winrt::Windows::Graphics;
using namespace winrt::Windows::UI;
using namespace winrt::Microsoft::UI::Composition;
using TimeSpan = winrt::Windows::Foundation::TimeSpan;

namespace winrt::Microsoft::UI::Xaml::Controls::AnimatedVisuals
{
    CppWinRTActivatableClassWithBasicFactory(AnimatedChevronDownSmallVisualSource)
}
#include "AnimatedVisuals\AnimatedChevronDownSmallVisualSource.g.cpp"

class CanvasGeometry : public winrt::implements<CanvasGeometry,
    IGeometrySource2D,
    ::ABI::Windows::Graphics::IGeometrySource2DInterop>
{
    winrt::com_ptr<ID2D1Geometry> _geometry{ nullptr };

public:
    CanvasGeometry(winrt::com_ptr<ID2D1Geometry> geometry)
        : _geometry{ geometry }
    { }

    // IGeometrySource2D.
    winrt::com_ptr<ID2D1Geometry> Geometry() { return _geometry; }

    // IGeometrySource2DInterop.
    IFACEMETHODIMP GetGeometry(ID2D1Geometry** value) override
    {
        _geometry.copy_to(value);
        return S_OK;
    }

    // IGeometrySource2DInterop.
    IFACEMETHODIMP TryGetGeometryUsingFactory(ID2D1Factory*, ID2D1Geometry**) override
    {
        return E_NOTIMPL;
    }
};
class AnimatedChevronDownSmallVisualSource_AnimatedVisual : public winrt::implements<AnimatedChevronDownSmallVisualSource_AnimatedVisual,
        winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual,
        IClosable>
{
    winrt::com_ptr<ID2D1Factory> _d2dFactory{ nullptr };
    static constexpr int64_t c_durationTicks{ 4833333L };
    Compositor const _c{ nullptr };
    ExpressionAnimation const _reusableExpressionAnimation{ nullptr };
    CompositionPropertySet const _themeProperties{ nullptr };
    CompositionColorBrush _themeColor_Foreground{ nullptr };
    CompositionPathGeometry _pathGeometry{ nullptr };
    ContainerVisual _root{ nullptr };
    ExpressionAnimation _rootProgress{ nullptr };
    InsetClip _insetClip_0{ nullptr };

    static void StartProgressBoundAnimation(
        CompositionObject target,
        winrt::hstring animatedPropertyName,
        CompositionAnimation animation,
        ExpressionAnimation controllerProgressExpression)
    {
        target.StartAnimation(animatedPropertyName, animation);
        const auto controller = target.TryGetAnimationController(animatedPropertyName);
        controller.Pause();
        controller.StartAnimation(L"Progress", controllerProgressExpression);
    }

    void BindProperty(
        CompositionObject target,
        winrt::hstring animatedPropertyName,
        winrt::hstring expression,
        winrt::hstring referenceParameterName,
        CompositionObject referencedObject)
    {
        _reusableExpressionAnimation.ClearAllParameters();
        _reusableExpressionAnimation.Expression(expression);
        _reusableExpressionAnimation.SetReferenceParameter(referenceParameterName, referencedObject);
        target.StartAnimation(animatedPropertyName, _reusableExpressionAnimation);
    }

    BooleanKeyFrameAnimation CreateBooleanKeyFrameAnimation(float initialProgress, bool initialValue)
    {
        const auto result = _c.CreateBooleanKeyFrameAnimation();
        result.Duration(TimeSpan{ c_durationTicks });
        result.InsertKeyFrame(initialProgress, initialValue);
        return result;
    }

    Vector2KeyFrameAnimation CreateVector2KeyFrameAnimation(float initialProgress, winrt::float2 initialValue, CompositionEasingFunction initialEasingFunction)
    {
        const auto result = _c.CreateVector2KeyFrameAnimation();
        result.Duration(TimeSpan{ c_durationTicks });
        result.InsertKeyFrame(initialProgress, initialValue, initialEasingFunction);
        return result;
    }

    // PreComp layer: Controls - 06 - Dropdown - 05 - PressedToNormal
    BooleanKeyFrameAnimation IsVisibleBooleanAnimation_0()
    {
        // Frame 10.
        const auto result = CreateBooleanKeyFrameAnimation(0.344827592F, true);
        return result;
    }

    // PreComp layer: Controls - 06 - Dropdown - 04 - PointerOverToPressed
    BooleanKeyFrameAnimation IsVisibleBooleanAnimation_1()
    {
        // Frame 10.
        const auto result = CreateBooleanKeyFrameAnimation(0.344827592F, false);
        return result;
    }

    winrt::com_ptr<CanvasGeometry> Geometry()
    {
        winrt::com_ptr<ID2D1PathGeometry> path{ nullptr };
        winrt::check_hresult(_d2dFactory->CreatePathGeometry(path.put()));
        winrt::com_ptr<ID2D1GeometrySink> sink{ nullptr };
        winrt::check_hresult(path->Open(sink.put()));
        sink->SetFillMode(D2D1_FILL_MODE_WINDING);
        sink->BeginFigure({ -3.85400009F, -2.10400009F }, D2D1_FIGURE_BEGIN_FILLED);
        sink->AddBezier({ { -3.65899992F, -2.29900002F }, { -3.34100008F, -2.29900002F }, { -3.14599991F, -2.10400009F } });
        sink->AddLine({ 0.0F, 1.04299998F });
        sink->AddLine({ 3.14599991F, -2.10400009F });
        sink->AddBezier({ { 3.34100008F, -2.29900002F }, { 3.65899992F, -2.29900002F }, { 3.85400009F, -2.10400009F } });
        sink->AddBezier({ { 4.04899979F, -1.90900004F }, { 4.04899979F, -1.59099996F }, { 3.85400009F, -1.39600003F } });
        sink->AddLine({ 0.354000002F, 2.10400009F });
        sink->AddBezier({ { 0.158999994F, 2.29900002F }, { -0.158999994F, 2.29900002F }, { -0.354000002F, 2.10400009F } });
        sink->AddLine({ -3.85400009F, -1.39600003F });
        sink->AddBezier({ { -4.04899979F, -1.59099996F }, { -4.04899979F, -1.90900004F }, { -3.85400009F, -2.10400009F } });
        sink->EndFigure(D2D1_FIGURE_END_CLOSED);
        winrt::check_hresult(sink->Close());
        auto result = winrt::make_self<CanvasGeometry>(path);
        return result;
    }

    // Color bound to theme property value: Foreground
    CompositionColorBrush ThemeColor_Foreground()
    {
        const auto result = _themeColor_Foreground = _c.CreateColorBrush();
        BindProperty(result, L"Color", L"ColorRGB(_theme.Foreground.W,_theme.Foreground.X,_theme.Foreground.Y,_theme.Foreground.Z)", L"_theme", _themeProperties);
        return result;
    }

    CompositionPathGeometry PathGeometry()
    {
        return _pathGeometry = _c.CreatePathGeometry(CompositionPath(CanvasGeometryToIGeometrySource2D(Geometry())));
    }

    // - PreComp layer: Controls - 06 - Dropdown - 05 - PressedToNormal
    // Transforms for Controls - 06 - Dropdown - 05 - PressedToNormal Scale(1,1,0)
    // Path 1
    CompositionSpriteShape SpriteShape_0()
    {
        const auto result = _c.CreateSpriteShape(PathGeometry());
        result.Scale({ 4.0F, 4.0F });
        result.FillBrush(ThemeColor_Foreground());
        StartProgressBoundAnimation(result, L"Offset", OffsetVector2Animation_0(), RootProgress());
        return result;
    }

    // - PreComp layer: Controls - 06 - Dropdown - 04 - PointerOverToPressed
    // Transforms for Controls - 06 - Dropdown - 04 - PointerOverToPressed Scale(1,1,0)
    // Path 1
    CompositionSpriteShape SpriteShape_1()
    {
        const auto result = _c.CreateSpriteShape(_pathGeometry);
        result.Scale({ 4.0F, 4.0F });
        result.FillBrush(_themeColor_Foreground);
        StartProgressBoundAnimation(result, L"Offset", OffsetVector2Animation_1(), _rootProgress);
        return result;
    }

    // PreComp layer: Controls - 06 - Dropdown - 05 - PressedToNormal
    ContainerVisual ContainerVisual_0()
    {
        const auto result = _c.CreateContainerVisual();
        result.Clip(InsetClip_0());
        result.IsVisible(false);
        result.Size({ 48.0F, 48.0F });
        // Scale:<1, 1>
        result.TransformMatrix({ 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F });
        // Transforms for Controls - 06 - Dropdown - 05 - PressedToNormal Scale(1,1,0)
        result.Children().InsertAtTop(ShapeVisual_0());
        StartProgressBoundAnimation(result, L"IsVisible", IsVisibleBooleanAnimation_0(), _rootProgress);
        return result;
    }

    // PreComp layer: Controls - 06 - Dropdown - 04 - PointerOverToPressed
    ContainerVisual ContainerVisual_1()
    {
        const auto result = _c.CreateContainerVisual();
        result.Clip(_insetClip_0);
        result.Size({ 48.0F, 48.0F });
        // Scale:<1, 1>
        result.TransformMatrix({ 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F });
        // Transforms for Controls - 06 - Dropdown - 04 - PointerOverToPressed Scale(1,1,0)
        result.Children().InsertAtTop(ShapeVisual_1());
        StartProgressBoundAnimation(result, L"IsVisible", IsVisibleBooleanAnimation_1(), _rootProgress);
        return result;
    }

    // The root of the composition.
    ContainerVisual Root()
    {
        const auto result = _root = _c.CreateContainerVisual();
        const auto propertySet = result.Properties();
        propertySet.InsertScalar(L"Progress", 0.0F);
        const auto children = result.Children();
        // PreComp layer: Controls - 06 - Dropdown - 05 - PressedToNormal
        children.InsertAtTop(ContainerVisual_0());
        // PreComp layer: Controls - 06 - Dropdown - 04 - PointerOverToPressed
        children.InsertAtTop(ContainerVisual_1());
        return result;
    }

    ExpressionAnimation RootProgress()
    {
        const auto result = _rootProgress = _c.CreateExpressionAnimation(L"_.Progress");
        result.SetReferenceParameter(L"_", _root);
        return result;
    }

    InsetClip InsetClip_0()
    {
        const auto result = _insetClip_0 = _c.CreateInsetClip();
        return result;
    }

    // PreComp layer: Controls - 06 - Dropdown - 05 - PressedToNormal
    // Shape tree root for layer: Layer 2
    ShapeVisual ShapeVisual_0()
    {
        const auto result = _c.CreateShapeVisual();
        result.Size({ 48.0F, 48.0F });
        // ShapeGroup: Group 1
        result.Shapes().Append(SpriteShape_0());
        return result;
    }

    // PreComp layer: Controls - 06 - Dropdown - 04 - PointerOverToPressed
    // Shape tree root for layer: Layer 3
    ShapeVisual ShapeVisual_1()
    {
        const auto result = _c.CreateShapeVisual();
        result.Size({ 48.0F, 48.0F });
        // ShapeGroup: Group 1
        result.Shapes().Append(SpriteShape_1());
        return result;
    }

    // - - - PreComp layer: Controls - 06 - Dropdown - 05 - PressedToNormal
    // - - Transforms for Controls - 06 - Dropdown - 05 - PressedToNormal Scale(1,1,0)
    // - ShapeGroup: Group 1
    // Offset
    StepEasingFunction HoldThenStepEasingFunction()
    {
        const auto result = _c.CreateStepEasingFunction();
        result.IsFinalStepSingleFrame(true);
        return result;
    }

    // - - PreComp layer: Controls - 06 - Dropdown - 05 - PressedToNormal
    // - Transforms for Controls - 06 - Dropdown - 05 - PressedToNormal Scale(1,1,0)
    // ShapeGroup: Group 1
    // Offset
    Vector2KeyFrameAnimation OffsetVector2Animation_0()
    {
        // Frame 0.
        const auto result = CreateVector2KeyFrameAnimation(0.0F, { 24.0F, 24.0F }, HoldThenStepEasingFunction());
        // Frame 10.
        result.InsertKeyFrame(0.344827592F, { 24.0F, 31.5F }, _c.CreateCubicBezierEasingFunction({ 0.166999996F, 0.166999996F }, { 0.0F, 1.0F }));
        // Frame 15.
        result.InsertKeyFrame(0.517241359F, { 24.0F, 21.0F }, _c.CreateCubicBezierEasingFunction({ 0.550000012F, 0.0F }, { 0.75F, 1.0F }));
        // Frame 29.
        result.InsertKeyFrame(1.0F, { 24.0F, 24.0F }, _c.CreateCubicBezierEasingFunction({ 0.349999994F, 0.0F }, { 0.0F, 1.0F }));
        return result;
    }

    // - - PreComp layer: Controls - 06 - Dropdown - 04 - PointerOverToPressed
    // - Transforms for Controls - 06 - Dropdown - 04 - PointerOverToPressed Scale(1,1,0)
    // ShapeGroup: Group 1
    // Offset
    Vector2KeyFrameAnimation OffsetVector2Animation_1()
    {
        // Frame 0.
        const auto result = CreateVector2KeyFrameAnimation(0.0F, { 24.0F, 24.0F }, _c.CreateCubicBezierEasingFunction({ 0.166999996F, 0.166999996F }, { 0.833000004F, 0.833000004F }));
        // Frame 9.
        result.InsertKeyFrame(0.310344815F, { 24.0F, 31.5F }, _c.CreateCubicBezierEasingFunction({ 0.166999996F, 0.166999996F }, { 0.649999976F, 1.0F }));
        return result;
    }

    static IGeometrySource2D CanvasGeometryToIGeometrySource2D(winrt::com_ptr<CanvasGeometry> geo)
    {
        return geo.as<IGeometrySource2D>();
    }

public:
    AnimatedChevronDownSmallVisualSource_AnimatedVisual(
        Compositor compositor,
        CompositionPropertySet themeProperties)
        : _c{compositor}
        , _themeProperties{themeProperties}
        , _reusableExpressionAnimation(compositor.CreateExpressionAnimation())
    {
        winrt::check_hresult(D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, _d2dFactory.put()));
        const auto _ = Root();
    }

    void Close()
    {
        if (_root)
        {
            _root.Close();
        }
    }

    TimeSpan Duration() const
    {
        return TimeSpan{ c_durationTicks };
    }

    Visual RootVisual() const
    {
        return _root;
    }

    winrt::float2 Size() const
    {
        return { 48.0F, 48.0F };
    }

    static bool IsRuntimeCompatible()
    {
        return winrt::Windows::Foundation::Metadata::ApiInformation::IsApiContractPresent(L"Windows.Foundation.UniversalApiContract", 7);
    }
};

winrt::float4 AnimatedChevronDownSmallVisualSource::ColorAsVector4(Color color)
{
    return { static_cast<float>(color.R), static_cast<float>(color.G), static_cast<float>(color.B), static_cast<float>(color.A) };
}

CompositionPropertySet AnimatedChevronDownSmallVisualSource::EnsureThemeProperties(Compositor compositor)
{
    if (_themeProperties == nullptr)
    {
        _themeProperties = compositor.CreatePropertySet();
        _themeProperties.InsertVector4(L"Foreground", ColorAsVector4((Color)_themeForeground));
    }

    return _themeProperties;
}

Color AnimatedChevronDownSmallVisualSource::Foreground()
{
    return _themeForeground;
}

void AnimatedChevronDownSmallVisualSource::Foreground(Color value)
{
    _themeForeground = value;
    if (_themeProperties != nullptr)
    {
        _themeProperties.InsertVector4(L"Foreground", ColorAsVector4((Color)_themeForeground));
    }
}

winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual AnimatedChevronDownSmallVisualSource::TryCreateAnimatedVisual(
    Compositor const& compositor)
{
    IInspectable diagnostics = nullptr;
    return TryCreateAnimatedVisual(compositor, diagnostics);
}

winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual AnimatedChevronDownSmallVisualSource::TryCreateAnimatedVisual(
    Compositor const& compositor,
    IInspectable& diagnostics)
{
    const auto _ = EnsureThemeProperties(compositor);
    diagnostics = nullptr;

    if (AnimatedChevronDownSmallVisualSource_AnimatedVisual::IsRuntimeCompatible())
    {
        return winrt::make<AnimatedChevronDownSmallVisualSource_AnimatedVisual>(
            compositor,
            _themeProperties);
    }

    return nullptr;
}

double AnimatedChevronDownSmallVisualSource::FrameCount()
{
    return 29.0;
}

double AnimatedChevronDownSmallVisualSource::Framerate()
{
    return 60.0;
}

TimeSpan AnimatedChevronDownSmallVisualSource::Duration()
{
    return TimeSpan{ 4833333L };
}

double AnimatedChevronDownSmallVisualSource::FrameToProgress(double frameNumber)
{
    return frameNumber / 29.0;
}

winrt::Windows::Foundation::Collections::IMapView<hstring, double> AnimatedChevronDownSmallVisualSource::Markers()
{
    return winrt::single_threaded_map<winrt::hstring, double>(
        std::map<winrt::hstring, double>
        {
            { L"NormalToPointerOver_Start", 0.0 },
            { L"NormalToPointerOver_End", 0.0 },
            { L"NormalToPressed_Start", 0.0 },
            { L"NormalToPressed_End", 0.312068965517241 },
            { L"PointerOverToNormal_Start", 0.0 },
            { L"PointerOverToNormal_End", 0.0 },
            { L"PointerOverToPressed_Start", 0.0 },
            { L"PointerOverToPressed_End", 0.312068965517241 },
            { L"PressedToNormal_Start", 0.346551724137931 },
            { L"PressedToNormal_End", 0.967241379310345 },
            { L"PressedToPointerOver_Start", 0.346551724137931 },
            { L"PressedToPointerOver_End", 0.967241379310345 },
        }
    ).GetView();
}

void AnimatedChevronDownSmallVisualSource::SetColorProperty(hstring const& propertyName, Color value)
{
    if (propertyName == L"Foreground")
    {
        _themeForeground = value;
    }
    else
    {
        return;
    }

    if (_themeProperties != nullptr)
    {
        _themeProperties.InsertVector4(propertyName, ColorAsVector4(value));
    }
}

void AnimatedChevronDownSmallVisualSource::SetScalarProperty(hstring const&, double)
{
}
