﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//       LottieGen version:
//           7.1.0+ge1fa92580f
//       
//       Command:
//           LottieGen -Language Cppwinrt -WinUIVersion 2.4 -InputFile AnimatedBackVisualSource.json
//       
//       Input file:
//           AnimatedBackVisualSource.json (21751 bytes created 23:37-07:00 Oct 5 2021)
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
// | All CompositionObjects   |    89 |
// |--------------------------+-------|
// | Expression animators     |    12 |
// | KeyFrame animators       |     9 |
// | Reference parameters     |    12 |
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
// | ContainerShapes          |     1 |
// | CompositionSpriteShapes  |     6 |
// |--------------------------+-------|
// | Brushes                  |     1 |
// | Gradient stops           |     - |
// | CompositionVisualSurface |     - |
// ------------------------------------
#include "pch.h"
#include "AnimatedVisuals\AnimatedBackVisualSource.h"
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
    CppWinRTActivatableClassWithBasicFactory(AnimatedBackVisualSource)
}
#include "AnimatedVisuals\AnimatedBackVisualSource.g.cpp"

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
class AnimatedBackVisualSource_AnimatedVisual : public winrt::implements<AnimatedBackVisualSource_AnimatedVisual,
        winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual,
        IClosable>
{
    winrt::com_ptr<ID2D1Factory> _d2dFactory{ nullptr };
    static constexpr int64_t c_durationTicks{ 13333333L };
    Compositor const _c{ nullptr };
    ExpressionAnimation const _reusableExpressionAnimation{ nullptr };
    CompositionPropertySet const _themeProperties{ nullptr };
    CompositionColorBrush _themeColor_Foreground{ nullptr };
    CompositionPathGeometry _pathGeometry_0{ nullptr };
    CompositionPathGeometry _pathGeometry_1{ nullptr };
    CompositionPathGeometry _pathGeometry_2{ nullptr };
    ContainerVisual _root{ nullptr };
    CubicBezierEasingFunction _cubicBezierEasingFunction_0{ nullptr };
    CubicBezierEasingFunction _cubicBezierEasingFunction_1{ nullptr };
    CubicBezierEasingFunction _cubicBezierEasingFunction_2{ nullptr };
    CubicBezierEasingFunction _cubicBezierEasingFunction_3{ nullptr };
    CubicBezierEasingFunction _cubicBezierEasingFunction_4{ nullptr };
    ExpressionAnimation _rootProgress{ nullptr };
    InsetClip _insetClip_0{ nullptr };
    StepEasingFunction _holdThenStepEasingFunction{ nullptr };
    StepEasingFunction _stepThenHoldEasingFunction{ nullptr };

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

    ScalarKeyFrameAnimation CreateScalarKeyFrameAnimation(float initialProgress, float initialValue, CompositionEasingFunction initialEasingFunction)
    {
        const auto result = _c.CreateScalarKeyFrameAnimation();
        result.Duration(TimeSpan{ c_durationTicks });
        result.InsertKeyFrame(initialProgress, initialValue, initialEasingFunction);
        return result;
    }

    Vector2KeyFrameAnimation CreateVector2KeyFrameAnimation(float initialProgress, winrt::float2 initialValue, CompositionEasingFunction initialEasingFunction)
    {
        const auto result = _c.CreateVector2KeyFrameAnimation();
        result.Duration(TimeSpan{ c_durationTicks });
        result.InsertKeyFrame(initialProgress, initialValue, initialEasingFunction);
        return result;
    }

    CompositionSpriteShape CreateSpriteShape(CompositionGeometry geometry, winrt::float3x2 transformMatrix, CompositionBrush fillBrush)
    {
        const auto result = _c.CreateSpriteShape(geometry);
        result.TransformMatrix(transformMatrix);
        result.FillBrush(fillBrush);
        return result;
    }

    // PreComp layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 - Back -
    // 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal Controls -
    // 03 - Back - 06 - PressedToPointerOver
    BooleanKeyFrameAnimation IsVisibleBooleanAnimation_0()
    {
        // Frame 10.
        const auto result = CreateBooleanKeyFrameAnimation(0.125F, true);
        return result;
    }

    // PreComp layer: Controls - 03 - Back - 01 - NormalToPointerOver Controls - 03 - Back
    // - 03 - PointerOverToNormal
    BooleanKeyFrameAnimation IsVisibleBooleanAnimation_1()
    {
        // Frame 30.
        const auto result = CreateBooleanKeyFrameAnimation(0.375F, false);
        return result;
    }

    winrt::com_ptr<CanvasGeometry> Geometry_0()
    {
        winrt::com_ptr<ID2D1PathGeometry> path{ nullptr };
        winrt::check_hresult(_d2dFactory->CreatePathGeometry(path.put()));
        winrt::com_ptr<ID2D1GeometrySink> sink{ nullptr };
        winrt::check_hresult(path->Open(sink.put()));
        sink->SetFillMode(D2D1_FILL_MODE_WINDING);
        sink->BeginFigure({ 7.5F, 0.499000013F }, D2D1_FIGURE_BEGIN_FILLED);
        sink->AddBezier({ { 7.77600002F, 0.499000013F }, { 8.0F, 0.275000006F }, { 8.0F, -0.00100000005F } });
        sink->AddBezier({ { 8.0F, -0.27700001F }, { 7.77600002F, -0.500999987F }, { 7.5F, -0.500999987F } });
        sink->AddLine({ 7.5F, 0.499000013F });
        sink->EndFigure(D2D1_FIGURE_END_CLOSED);
        winrt::check_hresult(sink->Close());
        auto result = winrt::make_self<CanvasGeometry>(path);
        return result;
    }

    winrt::com_ptr<CanvasGeometry> Geometry_1()
    {
        winrt::com_ptr<ID2D1PathGeometry> path{ nullptr };
        winrt::check_hresult(_d2dFactory->CreatePathGeometry(path.put()));
        winrt::com_ptr<ID2D1GeometrySink> sink{ nullptr };
        winrt::check_hresult(path->Open(sink.put()));
        sink->SetFillMode(D2D1_FILL_MODE_WINDING);
        sink->BeginFigure({ -5.33400011F, 0.495000005F }, D2D1_FIGURE_BEGIN_FILLED);
        sink->AddLine({ 7.5F, 0.499000013F });
        sink->AddLine({ 7.5F, -0.500999987F });
        sink->AddLine({ -5.33099985F, -0.504999995F });
        sink->AddLine({ -5.33400011F, 0.495000005F });
        sink->EndFigure(D2D1_FIGURE_END_CLOSED);
        winrt::check_hresult(sink->Close());
        auto result = winrt::make_self<CanvasGeometry>(path);
        return result;
    }

    winrt::com_ptr<CanvasGeometry> Geometry_2()
    {
        winrt::com_ptr<ID2D1PathGeometry> path{ nullptr };
        winrt::check_hresult(_d2dFactory->CreatePathGeometry(path.put()));
        winrt::com_ptr<ID2D1GeometrySink> sink{ nullptr };
        winrt::check_hresult(path->Open(sink.put()));
        sink->SetFillMode(D2D1_FILL_MODE_WINDING);
        sink->BeginFigure({ -0.837000012F, 6.86800003F }, D2D1_FIGURE_BEGIN_FILLED);
        sink->AddBezier({ { -0.633000016F, 7.0539999F }, { -0.317000002F, 7.03999996F }, { -0.130999997F, 6.83599997F } });
        sink->AddBezier({ { 0.0549999997F, 6.63199997F }, { 0.0410000011F, 6.31500006F }, { -0.163000003F, 6.12900019F } });
        sink->AddLine({ -6.33099985F, 0.499000013F });
        sink->AddLine({ -5.32800007F, 0.488999993F });
        sink->AddLine({ -5.32800007F, -0.510999978F });
        sink->AddLine({ -6.32800007F, -0.500999987F });
        sink->AddLine({ -0.163000003F, -6.12900019F });
        sink->AddBezier({ { 0.0410000011F, -6.31500006F }, { 0.0549999997F, -6.63199997F }, { -0.130999997F, -6.83599997F } });
        sink->AddBezier({ { -0.317000002F, -7.03999996F }, { -0.633000016F, -7.0539999F }, { -0.837000012F, -6.86800003F } });
        sink->AddLine({ -7.75299978F, -0.55400002F });
        sink->AddBezier({ { -7.89300013F, -0.425999999F }, { -7.97300005F, -0.257999986F }, { -7.99300003F, -0.0850000009F } });
        sink->AddBezier({ { -7.99800014F, -0.0579999983F }, { -8.0F, -0.0299999993F }, { -8.0F, -0.00100000005F } });
        sink->AddBezier({ { -8.0F, 0.0260000005F }, { -7.99800014F, 0.0520000011F }, { -7.99399996F, 0.0780000016F } });
        sink->AddBezier({ { -7.97599983F, 0.254000008F }, { -7.89499998F, 0.423999995F }, { -7.75299978F, 0.55400002F } });
        sink->AddLine({ -0.837000012F, 6.86800003F });
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

    // - PreComp layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 - Back -
    // 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal Controls -
    // 03 - Back - 06 - PressedToPointerOver
    // Opacity for layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 - Back
    // - 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal Controls -
    // 03 - Back - 06 - PressedToPointerOver
    // Layer: Round Cap 2 Round Cap 2 Round Cap 2 Round Cap 2
    CompositionContainerShape ContainerShape()
    {
        const auto result = _c.CreateContainerShape();
        const auto shapes = result.Shapes();
        // Transforms: Round Cap 2 Round Cap 2 Round Cap 2 Round Cap 2 Scale:2.25,2.25
        shapes.Append(SpriteShape_0());
        // Transforms: Stem 2 Stem 2 Stem 2 Stem 2
        shapes.Append(SpriteShape_1());
        StartProgressBoundAnimation(result, L"Offset", OffsetVector2Animation_0(), _rootProgress);
        return result;
    }

    CompositionPathGeometry PathGeometry_0()
    {
        return _pathGeometry_0 = _c.CreatePathGeometry(CompositionPath(CanvasGeometryToIGeometrySource2D(Geometry_0())));
    }

    CompositionPathGeometry PathGeometry_1()
    {
        return _pathGeometry_1 = _c.CreatePathGeometry(CompositionPath(CanvasGeometryToIGeometrySource2D(Geometry_1())));
    }

    CompositionPathGeometry PathGeometry_2()
    {
        return _pathGeometry_2 = _c.CreatePathGeometry(CompositionPath(CanvasGeometryToIGeometrySource2D(Geometry_2())));
    }

    // - - PreComp layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 - Back
    // - 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal Controls -
    // 03 - Back - 06 - PressedToPointerOver
    // - Opacity for layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 -
    // Back - 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal
    // Controls - 03 - Back - 06 - PressedToPointerOver
    // Layer: Round Cap 2 Round Cap 2 Round Cap 2 Round Cap 2
    // Path 1 Path 1 Path 1 Path 1
    CompositionSpriteShape SpriteShape_0()
    {
        // Scale:<2.25, 2.25>
        const auto geometry = PathGeometry_0();
        const auto result = CreateSpriteShape(geometry, { 2.25F, 0.0F, 0.0F, 2.25F, 0.0F, 0.0F }, ThemeColor_Foreground());
        return result;
    }

    // - - PreComp layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 - Back
    // - 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal Controls -
    // 03 - Back - 06 - PressedToPointerOver
    // - Opacity for layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 -
    // Back - 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal
    // Controls - 03 - Back - 06 - PressedToPointerOver
    // Layer: Round Cap 2 Round Cap 2 Round Cap 2 Round Cap 2
    // Path 1 Path 1 Path 1 Path 1
    CompositionSpriteShape SpriteShape_1()
    {
        const auto result = _c.CreateSpriteShape(PathGeometry_1());
        result.CenterPoint({ 7.5F, -0.00300000003F });
        result.Offset({ 9.375F, -0.00400000019F });
        result.FillBrush(_themeColor_Foreground);
        StartProgressBoundAnimation(result, L"Scale.X", ScaleXScalarAnimation_2p25_to_2p25(), RootProgress());
        StartProgressBoundAnimation(result, L"Scale.Y", ScaleYScalarAnimation_2p25_to_2p25(), _rootProgress);
        return result;
    }

    // - PreComp layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 - Back -
    // 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal Controls -
    // 03 - Back - 06 - PressedToPointerOver
    // Opacity for layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 - Back
    // - 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal Controls -
    // 03 - Back - 06 - PressedToPointerOver
    // Path 1 Path 1 Path 1 Path 1
    CompositionSpriteShape SpriteShape_2()
    {
        const auto result = _c.CreateSpriteShape(PathGeometry_2());
        result.Scale({ 2.25F, 2.25F });
        result.FillBrush(_themeColor_Foreground);
        StartProgressBoundAnimation(result, L"Offset", OffsetVector2Animation_1(), _rootProgress);
        return result;
    }

    // - PreComp layer: Controls - 03 - Back - 01 - NormalToPointerOver Controls - 03 -
    // Back - 03 - PointerOverToNormal
    // Opacity for layer: Controls - 03 - Back - 01 - NormalToPointerOver Controls - 03 -
    // Back - 03 - PointerOverToNormal
    // Path 1 Path 1
    CompositionSpriteShape SpriteShape_3()
    {
        // Offset:<24, 24>, Scale:<2.25, 2.25>
        const auto geometry = _pathGeometry_0;
        const auto result = CreateSpriteShape(geometry, { 2.25F, 0.0F, 0.0F, 2.25F, 24.0F, 24.0F }, _themeColor_Foreground);
        return result;
    }

    // - PreComp layer: Controls - 03 - Back - 01 - NormalToPointerOver Controls - 03 -
    // Back - 03 - PointerOverToNormal
    // Opacity for layer: Controls - 03 - Back - 01 - NormalToPointerOver Controls - 03 -
    // Back - 03 - PointerOverToNormal
    // Path 1 Path 1
    CompositionSpriteShape SpriteShape_4()
    {
        // Offset:<24, 23.99975>, Scale:<2.25, 2.25>
        const auto geometry = _pathGeometry_1;
        const auto result = CreateSpriteShape(geometry, { 2.25F, 0.0F, 0.0F, 2.25F, 24.0F, 23.9997501F }, _themeColor_Foreground);
        return result;
    }

    // - PreComp layer: Controls - 03 - Back - 01 - NormalToPointerOver Controls - 03 -
    // Back - 03 - PointerOverToNormal
    // Opacity for layer: Controls - 03 - Back - 01 - NormalToPointerOver Controls - 03 -
    // Back - 03 - PointerOverToNormal
    // Path 1 Path 1
    CompositionSpriteShape SpriteShape_5()
    {
        // Offset:<24, 24>, Scale:<2.25, 2.25>
        const auto geometry = _pathGeometry_2;
        const auto result = CreateSpriteShape(geometry, { 2.25F, 0.0F, 0.0F, 2.25F, 24.0F, 24.0F }, _themeColor_Foreground);
        return result;
    }

    // PreComp layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 - Back -
    // 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal Controls -
    // 03 - Back - 06 - PressedToPointerOver
    ContainerVisual ContainerVisual_0()
    {
        const auto result = _c.CreateContainerVisual();
        result.Clip(InsetClip_0());
        result.IsVisible(false);
        result.Size({ 48.0F, 48.0F });
        // Scale:<1, 1>
        result.TransformMatrix({ 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F });
        // Opacity for layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 - Back
        // - 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal Controls -
        // 03 - Back - 06 - PressedToPointerOver
        result.Children().InsertAtTop(ShapeVisual_0());
        StartProgressBoundAnimation(result, L"Opacity", OpacityScalarAnimation_1_to_1_0(), _rootProgress);
        StartProgressBoundAnimation(result, L"IsVisible", IsVisibleBooleanAnimation_0(), _rootProgress);
        return result;
    }

    // PreComp layer: Controls - 03 - Back - 01 - NormalToPointerOver Controls - 03 - Back
    // - 03 - PointerOverToNormal
    ContainerVisual ContainerVisual_1()
    {
        const auto result = _c.CreateContainerVisual();
        result.Clip(_insetClip_0);
        result.Size({ 48.0F, 48.0F });
        // Scale:<1, 1>
        result.TransformMatrix({ 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F });
        // Opacity for layer: Controls - 03 - Back - 01 - NormalToPointerOver Controls - 03 -
        // Back - 03 - PointerOverToNormal
        result.Children().InsertAtTop(ShapeVisual_1());
        StartProgressBoundAnimation(result, L"Opacity", OpacityScalarAnimation_1_to_1_1(), _rootProgress);
        StartProgressBoundAnimation(result, L"IsVisible", IsVisibleBooleanAnimation_1(), _rootProgress);
        return result;
    }

    // The root of the composition.
    ContainerVisual Root()
    {
        const auto result = _root = _c.CreateContainerVisual();
        const auto propertySet = result.Properties();
        propertySet.InsertScalar(L"Progress", 0.0F);
        propertySet.InsertScalar(L"t0", 0.0F);
        const auto children = result.Children();
        // PreComp layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 - Back -
        // 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal Controls -
        // 03 - Back - 06 - PressedToPointerOver
        children.InsertAtTop(ContainerVisual_0());
        // PreComp layer: Controls - 03 - Back - 01 - NormalToPointerOver Controls - 03 - Back
        // - 03 - PointerOverToNormal
        children.InsertAtTop(ContainerVisual_1());
        StartProgressBoundAnimation(propertySet, L"t0", t0ScalarAnimation_0_to_1(), _rootProgress);
        return result;
    }

    CubicBezierEasingFunction CubicBezierEasingFunction_0()
    {
        return _cubicBezierEasingFunction_0 = _c.CreateCubicBezierEasingFunction({ 0.166999996F, 0.166999996F }, { 0.0F, 1.0F });
    }

    CubicBezierEasingFunction CubicBezierEasingFunction_1()
    {
        return _cubicBezierEasingFunction_1 = _c.CreateCubicBezierEasingFunction({ 0.550000012F, 0.0F }, { 0.75F, 1.0F });
    }

    CubicBezierEasingFunction CubicBezierEasingFunction_2()
    {
        return _cubicBezierEasingFunction_2 = _c.CreateCubicBezierEasingFunction({ 0.349999994F, 0.0F }, { 0.0F, 1.0F });
    }

    CubicBezierEasingFunction CubicBezierEasingFunction_3()
    {
        return _cubicBezierEasingFunction_3 = _c.CreateCubicBezierEasingFunction({ 0.166999996F, 0.0F }, { 0.0F, 1.0F });
    }

    CubicBezierEasingFunction CubicBezierEasingFunction_4()
    {
        return _cubicBezierEasingFunction_4 = _c.CreateCubicBezierEasingFunction({ 0.850000024F, 0.0F }, { 0.75F, 1.0F });
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

    // PreComp layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 - Back -
    // 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal Controls -
    // 03 - Back - 06 - PressedToPointerOver
    // Layer opacity animation
    ScalarKeyFrameAnimation OpacityScalarAnimation_1_to_1_0()
    {
        // Frame 0.
        const auto result = CreateScalarKeyFrameAnimation(0.0F, 1.0F, _stepThenHoldEasingFunction);
        // Frame 10.
        result.InsertKeyFrame(0.125F, 1.0F, _holdThenStepEasingFunction);
        // Frame 20.
        result.InsertKeyFrame(0.25F, 0.0F, _holdThenStepEasingFunction);
        // Frame 30.
        result.InsertKeyFrame(0.375F, 1.0F, _holdThenStepEasingFunction);
        return result;
    }

    // PreComp layer: Controls - 03 - Back - 01 - NormalToPointerOver Controls - 03 - Back
    // - 03 - PointerOverToNormal
    // Layer opacity animation
    ScalarKeyFrameAnimation OpacityScalarAnimation_1_to_1_1()
    {
        // Frame 0.
        const auto result = CreateScalarKeyFrameAnimation(0.0F, 1.0F, _holdThenStepEasingFunction);
        // Frame 10.
        result.InsertKeyFrame(0.125F, 0.0F, _holdThenStepEasingFunction);
        // Frame 20.
        result.InsertKeyFrame(0.25F, 1.0F, _holdThenStepEasingFunction);
        return result;
    }

    // - - - PreComp layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 -
    // Back - 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal
    // Controls - 03 - Back - 06 - PressedToPointerOver
    // - - Opacity for layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 -
    // Back - 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal
    // Controls - 03 - Back - 06 - PressedToPointerOver
    // - Layer: Round Cap 2 Round Cap 2 Round Cap 2 Round Cap 2
    // Transforms: Stem 2 Stem 2 Stem 2 Stem 2
    // Scale
    ScalarKeyFrameAnimation ScaleXScalarAnimation_2p25_to_2p25()
    {
        // Frame 0.
        const auto result = CreateScalarKeyFrameAnimation(0.0F, 2.25F, StepThenHoldEasingFunction());
        // Frame 10.
        result.InsertKeyFrame(0.125F, 2.25F, HoldThenStepEasingFunction());
        // Frame 19.
        result.InsertKeyFrame(0.237499997F, 1.62211001F, CubicBezierEasingFunction_0());
        // Frame 30.
        result.InsertKeyFrame(0.375F, 2.25F, _holdThenStepEasingFunction);
        // Frame 39.
        result.InsertKeyFrame(0.487500012F, 1.62211001F, _cubicBezierEasingFunction_0);
        // Frame 40.
        result.InsertKeyFrame(0.5F, 1.62211001F, _holdThenStepEasingFunction);
        // Frame 50.
        result.InsertKeyFrame(0.625F, 2.26947999F, CubicBezierEasingFunction_1());
        // Frame 59.
        result.InsertKeyFrame(0.737500012F, 2.25F, CubicBezierEasingFunction_2());
        // Frame 60.
        result.InsertKeyFrame(0.75F, 1.62211001F, _holdThenStepEasingFunction);
        // Frame 70.
        result.InsertKeyFrame(0.875F, 2.26947999F, _cubicBezierEasingFunction_1);
        // Frame 79.
        result.InsertKeyFrame(0.987500012F, 2.25F, _cubicBezierEasingFunction_2);
        return result;
    }

    // - - - PreComp layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 -
    // Back - 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal
    // Controls - 03 - Back - 06 - PressedToPointerOver
    // - - Opacity for layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 -
    // Back - 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal
    // Controls - 03 - Back - 06 - PressedToPointerOver
    // - Layer: Round Cap 2 Round Cap 2 Round Cap 2 Round Cap 2
    // Transforms: Stem 2 Stem 2 Stem 2 Stem 2
    // Scale
    ScalarKeyFrameAnimation ScaleYScalarAnimation_2p25_to_2p25()
    {
        // Frame 0.
        const auto result = CreateScalarKeyFrameAnimation(0.0F, 2.25F, _stepThenHoldEasingFunction);
        // Frame 10.
        result.InsertKeyFrame(0.125F, 2.25F, _holdThenStepEasingFunction);
        // Frame 19.
        result.InsertKeyFrame(0.237499997F, 2.25F, CubicBezierEasingFunction_3());
        // Frame 30.
        result.InsertKeyFrame(0.375F, 2.25F, _holdThenStepEasingFunction);
        // Frame 39.
        result.InsertKeyFrame(0.487500012F, 2.25F, _cubicBezierEasingFunction_3);
        // Frame 40.
        result.InsertKeyFrame(0.5F, 2.25F, _holdThenStepEasingFunction);
        // Frame 50.
        result.InsertKeyFrame(0.625F, 2.25F, _cubicBezierEasingFunction_1);
        // Frame 59.
        result.InsertKeyFrame(0.737500012F, 2.25F, _cubicBezierEasingFunction_2);
        // Frame 60.
        result.InsertKeyFrame(0.75F, 2.25F, _holdThenStepEasingFunction);
        // Frame 70.
        result.InsertKeyFrame(0.875F, 2.25F, _cubicBezierEasingFunction_1);
        // Frame 79.
        result.InsertKeyFrame(0.987500012F, 2.25F, _cubicBezierEasingFunction_2);
        return result;
    }

    ScalarKeyFrameAnimation t0ScalarAnimation_0_to_1()
    {
        // Frame 50.
        const auto result = CreateScalarKeyFrameAnimation(0.62500006F, 0.0F, _stepThenHoldEasingFunction);
        result.SetReferenceParameter(L"_", _root);
        // Frame 59.
        result.InsertKeyFrame(0.737499952F, 1.0F, _cubicBezierEasingFunction_2);
        // Frame 70.
        result.InsertKeyFrame(0.87500006F, 0.0F, _stepThenHoldEasingFunction);
        // Frame 79.
        result.InsertKeyFrame(0.987499952F, 1.0F, _cubicBezierEasingFunction_2);
        return result;
    }

    // PreComp layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 - Back -
    // 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal Controls -
    // 03 - Back - 06 - PressedToPointerOver
    // Layer aggregator
    ShapeVisual ShapeVisual_0()
    {
        const auto result = _c.CreateShapeVisual();
        result.Size({ 48.0F, 48.0F });
        const auto shapes = result.Shapes();
        // Layer: Round Cap 2 Round Cap 2 Round Cap 2 Round Cap 2
        shapes.Append(ContainerShape());
        // Layer: Round Cap 2 Round Cap 2 Round Cap 2 Round Cap 2
        shapes.Append(SpriteShape_2());
        return result;
    }

    // PreComp layer: Controls - 03 - Back - 01 - NormalToPointerOver Controls - 03 - Back
    // - 03 - PointerOverToNormal
    // Layer aggregator
    ShapeVisual ShapeVisual_1()
    {
        const auto result = _c.CreateShapeVisual();
        result.Size({ 48.0F, 48.0F });
        const auto shapes = result.Shapes();
        // Layer: Round Cap 2 Round Cap 2
        shapes.Append(SpriteShape_3());
        // Layer: Round Cap 2 Round Cap 2
        shapes.Append(SpriteShape_4());
        // Layer: Round Cap 2 Round Cap 2
        shapes.Append(SpriteShape_5());
        return result;
    }

    StepEasingFunction HoldThenStepEasingFunction()
    {
        const auto result = _holdThenStepEasingFunction = _c.CreateStepEasingFunction();
        result.IsFinalStepSingleFrame(true);
        return result;
    }

    StepEasingFunction StepThenHoldEasingFunction()
    {
        const auto result = _stepThenHoldEasingFunction = _c.CreateStepEasingFunction();
        result.IsInitialStepSingleFrame(true);
        return result;
    }

    // - - PreComp layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 - Back
    // - 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal Controls -
    // 03 - Back - 06 - PressedToPointerOver
    // - Opacity for layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 -
    // Back - 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal
    // Controls - 03 - Back - 06 - PressedToPointerOver
    // Layer: Round Cap 2 Round Cap 2 Round Cap 2 Round Cap 2
    // Offset
    Vector2KeyFrameAnimation OffsetVector2Animation_0()
    {
        // Frame 0.
        const auto result = CreateVector2KeyFrameAnimation(0.0F, { 24.0F, 24.0F }, _stepThenHoldEasingFunction);
        result.SetReferenceParameter(L"_", _root);
        // Frame 10.
        result.InsertKeyFrame(0.125F, { 24.0F, 24.0F }, _holdThenStepEasingFunction);
        // Frame 19.
        result.InsertKeyFrame(0.237499997F, { 24.9379997F, 24.0F }, _cubicBezierEasingFunction_0);
        // Frame 30.
        result.InsertKeyFrame(0.375F, { 24.0F, 24.0F }, _holdThenStepEasingFunction);
        // Frame 39.
        result.InsertKeyFrame(0.487500012F, { 24.9379997F, 24.0F }, _cubicBezierEasingFunction_0);
        // Frame 40.
        result.InsertKeyFrame(0.5F, { 24.9379997F, 24.0F }, _holdThenStepEasingFunction);
        // Frame 50.
        result.InsertKeyFrame(0.625F, { 20.25F, 24.0F }, _cubicBezierEasingFunction_1);
        // Frame 59.
        result.InsertExpressionKeyFrame(0.737499952F, L"Pow(1-_.t0,3)*Vector2(20.25,24)+(3*Square(1-_.t0)*_.t0*Vector2(20.094,24))+(3*(1-_.t0)*Square(_.t0)*Vector2(23.375,24))+(Pow(_.t0,3)*Vector2(24,24))", _stepThenHoldEasingFunction);
        // Frame 59.
        result.InsertKeyFrame(0.737500012F, { 24.0F, 24.0F }, _stepThenHoldEasingFunction);
        // Frame 60.
        result.InsertKeyFrame(0.75F, { 24.9379997F, 24.0F }, _holdThenStepEasingFunction);
        // Frame 70.
        result.InsertKeyFrame(0.875F, { 20.25F, 24.0F }, _cubicBezierEasingFunction_1);
        // Frame 79.
        result.InsertExpressionKeyFrame(0.987499952F, L"Pow(1-_.t0,3)*Vector2(20.25,24)+(3*Square(1-_.t0)*_.t0*Vector2(20.094,24))+(3*(1-_.t0)*Square(_.t0)*Vector2(23.375,24))+(Pow(_.t0,3)*Vector2(24,24))", _stepThenHoldEasingFunction);
        // Frame 79.
        result.InsertKeyFrame(0.987500012F, { 24.0F, 24.0F }, _stepThenHoldEasingFunction);
        return result;
    }

    // - - PreComp layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 - Back
    // - 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal Controls -
    // 03 - Back - 06 - PressedToPointerOver
    // - Opacity for layer: Controls - 03 - Back - 02 - NormalToPressed Controls - 03 -
    // Back - 04 - PointerOverToPressed  Controls - 03 - Back - 05 - PressedToNormal
    // Controls - 03 - Back - 06 - PressedToPointerOver
    // Layer: Round Cap 2 Round Cap 2 Round Cap 2 Round Cap 2
    // Offset
    Vector2KeyFrameAnimation OffsetVector2Animation_1()
    {
        // Frame 0.
        const auto result = CreateVector2KeyFrameAnimation(0.0F, { 24.0F, 24.0F }, _stepThenHoldEasingFunction);
        // Frame 10.
        result.InsertKeyFrame(0.125F, { 24.0F, 24.0F }, _holdThenStepEasingFunction);
        // Frame 19.
        result.InsertKeyFrame(0.237499997F, { 33.0F, 24.0F }, _cubicBezierEasingFunction_0);
        // Frame 30.
        result.InsertKeyFrame(0.375F, { 24.0F, 24.0F }, _holdThenStepEasingFunction);
        // Frame 39.
        result.InsertKeyFrame(0.487500012F, { 33.0F, 24.0F }, _cubicBezierEasingFunction_0);
        // Frame 40.
        result.InsertKeyFrame(0.5F, { 33.0F, 24.0F }, _holdThenStepEasingFunction);
        // Frame 50.
        result.InsertKeyFrame(0.625F, { 19.9839993F, 24.0F }, CubicBezierEasingFunction_4());
        // Frame 59.
        result.InsertKeyFrame(0.737500012F, { 24.0F, 24.0F }, _cubicBezierEasingFunction_2);
        // Frame 60.
        result.InsertKeyFrame(0.75F, { 33.0F, 24.0F }, _holdThenStepEasingFunction);
        // Frame 70.
        result.InsertKeyFrame(0.875F, { 19.9839993F, 24.0F }, _cubicBezierEasingFunction_4);
        // Frame 79.
        result.InsertKeyFrame(0.987500012F, { 24.0F, 24.0F }, _cubicBezierEasingFunction_2);
        return result;
    }

    static IGeometrySource2D CanvasGeometryToIGeometrySource2D(winrt::com_ptr<CanvasGeometry> geo)
    {
        return geo.as<IGeometrySource2D>();
    }

public:
    AnimatedBackVisualSource_AnimatedVisual(
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

winrt::float4 AnimatedBackVisualSource::ColorAsVector4(Color color)
{
    return { static_cast<float>(color.R), static_cast<float>(color.G), static_cast<float>(color.B), static_cast<float>(color.A) };
}

CompositionPropertySet AnimatedBackVisualSource::EnsureThemeProperties(Compositor compositor)
{
    if (_themeProperties == nullptr)
    {
        _themeProperties = compositor.CreatePropertySet();
        _themeProperties.InsertVector4(L"Foreground", ColorAsVector4((Color)_themeForeground));
    }

    return _themeProperties;
}

Color AnimatedBackVisualSource::Foreground()
{
    return _themeForeground;
}

void AnimatedBackVisualSource::Foreground(Color value)
{
    _themeForeground = value;
    if (_themeProperties != nullptr)
    {
        _themeProperties.InsertVector4(L"Foreground", ColorAsVector4((Color)_themeForeground));
    }
}

winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual AnimatedBackVisualSource::TryCreateAnimatedVisual(
    Compositor const& compositor)
{
    IInspectable diagnostics = nullptr;
    return TryCreateAnimatedVisual(compositor, diagnostics);
}

winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual AnimatedBackVisualSource::TryCreateAnimatedVisual(
    Compositor const& compositor,
    IInspectable& diagnostics)
{
    const auto _ = EnsureThemeProperties(compositor);
    diagnostics = nullptr;

    if (AnimatedBackVisualSource_AnimatedVisual::IsRuntimeCompatible())
    {
        return winrt::make<AnimatedBackVisualSource_AnimatedVisual>(
            compositor,
            _themeProperties);
    }

    return nullptr;
}

double AnimatedBackVisualSource::FrameCount()
{
    return 80.0;
}

double AnimatedBackVisualSource::Framerate()
{
    return 60.0;
}

TimeSpan AnimatedBackVisualSource::Duration()
{
    return TimeSpan{ 13333333L };
}

double AnimatedBackVisualSource::FrameToProgress(double frameNumber)
{
    return frameNumber / 80.0;
}

winrt::Windows::Foundation::Collections::IMapView<hstring, double> AnimatedBackVisualSource::Markers()
{
    return winrt::single_threaded_map<winrt::hstring, double>(
        std::map<winrt::hstring, double>
        {
            { L"NormalToPointerOver_Start", 0.0 },
            { L"NormalToPointerOver_End", 0.113125 },
            { L"NormalToPressed_Start", 0.125625 },
            { L"NormalToPressed_End", 0.238125 },
            { L"PointerOverToNormal_Start", 0.250625 },
            { L"PointerOverToNormal_End", 0.363125 },
            { L"PointerOverToPressed_Start", 0.375625 },
            { L"PointerOverToPressed_End", 0.488125 },
            { L"PressedToNormal_Start", 0.500625 },
            { L"PressedToNormal_End", 0.738125 },
            { L"PressedToPointerOver_Start", 0.750625 },
            { L"PressedToPointerOver_End", 0.988125 },
        }
    ).GetView();
}

void AnimatedBackVisualSource::SetColorProperty(hstring const& propertyName, Color value)
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

void AnimatedBackVisualSource::SetScalarProperty(hstring const&, double)
{
}
