﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//       LottieGen version:
//           7.0.0-build.16+g667576ee09
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
// | All CompositionObjects   |    59 |
// |--------------------------+-------|
// | Animators                |    13 |
// | Animated brushes         |     3 |
// | Animated gradient stops  |     - |
// | ExpressionAnimations     |     4 |
// | PathKeyFrameAnimations   |     - |
// |--------------------------+-------|
// | ContainerVisuals         |     1 |
// | ShapeVisuals             |     1 |
// |--------------------------+-------|
// | ContainerShapes          |     1 |
// | CompositionSpriteShapes  |     3 |
// |--------------------------+-------|
// | Brushes                  |     3 |
// | Gradient stops           |     - |
// | CompositionVisualSurface |     - |
// ------------------------------------
#include "pch.h"
#include "ProgressRingIndeterminate.h"
#include "WindowsNumerics.h"

using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Foundation::Numerics;
using namespace winrt::Windows::Graphics;
using namespace winrt::Windows::UI;
using namespace winrt::Windows::UI::Composition;

namespace {
class AnimatedVisual : public winrt::implements<AnimatedVisual, winrt::IAnimatedVisual, winrt::IClosable>
{
    static constexpr int64_t c_durationTicks{ 20000000L };
    Compositor const _c{ nullptr };
    ExpressionAnimation const _reusableExpressionAnimation{ nullptr };
    CompositionPropertySet const _themeProperties{ nullptr };
    CompositionColorBrush _themeColor_Foreground_0{ nullptr };
    CompositionColorBrush _themeColor_Foreground_1{ nullptr };
    ContainerVisual _root{ nullptr };
    CubicBezierEasingFunction _cubicBezierEasingFunction_0{ nullptr };
    ExpressionAnimation _rootProgress{ nullptr };
    StepEasingFunction _holdThenStepEasingFunction{ nullptr };

    static void StartProgressBoundAnimation(CompositionObject target, winrt::hstring animatedPropertyName, CompositionAnimation animation, ExpressionAnimation controllerProgressExpression)
    {
        target.StartAnimation(animatedPropertyName, animation);
        const auto controller = target.TryGetAnimationController(animatedPropertyName);
        controller.Pause();
        controller.StartAnimation(L"Progress", controllerProgressExpression);
    }

    void BindProperty(CompositionObject target, winrt::hstring animatedPropertyName, winrt::hstring expression, winrt::hstring referenceParameterName, CompositionObject referencedObject)
    {
        _reusableExpressionAnimation.ClearAllParameters();
        _reusableExpressionAnimation.Expression(expression);
        _reusableExpressionAnimation.SetReferenceParameter(referenceParameterName, referencedObject);
        target.StartAnimation(animatedPropertyName, _reusableExpressionAnimation);
    }

    void BindProperty2(
        CompositionObject target,
        winrt::hstring animatedPropertyName,
        winrt::hstring expression,
        winrt::hstring referenceParameterName0,
        CompositionObject referencedObject0,
        winrt::hstring referenceParameterName1,
        CompositionObject referencedObject1)
    {
        _reusableExpressionAnimation.ClearAllParameters();
        _reusableExpressionAnimation.Expression(expression);
        _reusableExpressionAnimation.SetReferenceParameter(referenceParameterName0, referencedObject0);
        _reusableExpressionAnimation.SetReferenceParameter(referenceParameterName1, referencedObject1);
        target.StartAnimation(animatedPropertyName, _reusableExpressionAnimation);
    }

    ScalarKeyFrameAnimation CreateScalarKeyFrameAnimation(float initialProgress, float initialValue, CompositionEasingFunction initialEasingFunction)
    {
        const auto result = _c.CreateScalarKeyFrameAnimation();
        result.Duration(TimeSpan{ c_durationTicks });
        result.InsertKeyFrame(initialProgress, initialValue, initialEasingFunction);
        return result;
    }

    CompositionSpriteShape CreateSpriteShape(CompositionGeometry geometry, float3x2 transformMatrix)
    {
        const auto result = _c.CreateSpriteShape(geometry);
        result.TransformMatrix(transformMatrix);
        return result;
    }

    // - Layer aggregator
    // Scale:5,5, Offset:<40, 40>
    // Color bound to theme property value: Background
    CompositionColorBrush ThemeColor_Background()
    {
        const auto result = _c.CreateColorBrush();
        BindProperty(
            result,
            L"Color",
            L"ColorRGB(_theme.Background.W*1,_theme.Background.X,_theme.Background.Y,_theme.Background.Z)",
            L"_theme",
            _themeProperties);
        return result;
    }

    // - - Layer aggregator
    // -  Scale:5,5, Offset:<40, 40>
    // ShapeGroup: Ellipse B
    // Color bound to theme property value: Foreground
    CompositionColorBrush ThemeColor_Foreground_0()
    {
        const auto result = _themeColor_Foreground_0 = _c.CreateColorBrush();
        const auto propertySet = result.Properties();
        propertySet.InsertScalar(L"Opacity0", 0.0F);
        BindProperty2(
            result,
            L"Color",
            L"ColorRGB(_theme.Foreground.W*my.Opacity0,_theme.Foreground.X,_theme.Foreground.Y,_theme.Foreground.Z)",
            L"_theme",
            _themeProperties,
            L"my",
            propertySet);
        StartProgressBoundAnimation(propertySet, L"Opacity0", Opacity0ScalarAnimation_0_to_1(), _rootProgress);
        return result;
    }

    // - - Layer aggregator
    // -  Scale:5,5, Offset:<40, 40>
    // ShapeGroup: Ellipse B
    // Color bound to theme property value: Foreground
    CompositionColorBrush ThemeColor_Foreground_1()
    {
        const auto result = _themeColor_Foreground_1 = _c.CreateColorBrush();
        const auto propertySet = result.Properties();
        propertySet.InsertScalar(L"Opacity0", 1.0F);
        BindProperty2(
            result,
            L"Color",
            L"ColorRGB(_theme.Foreground.W*my.Opacity0,_theme.Foreground.X,_theme.Foreground.Y,_theme.Foreground.Z)",
            L"_theme",
            _themeProperties,
            L"my",
            propertySet);
        StartProgressBoundAnimation(propertySet, L"Opacity0", Opacity0ScalarAnimation_1_to_0(), _rootProgress);
        return result;
    }

    // Layer aggregator
    // Transforms for Radial
    CompositionContainerShape ContainerShape()
    {
        const auto result = _c.CreateContainerShape();
        // Offset:<40, 40>, Scale:<5, 5>
        result.TransformMatrix({ 5.0F, 0.0F, 0.0F, 5.0F, 40.0F, 40.0F });
        const auto shapes = result.Shapes();
        // ShapeGroup: Ellipse B
        shapes.Append(SpriteShape_1());
        // ShapeGroup: Ellipse B
        shapes.Append(SpriteShape_2());
        StartProgressBoundAnimation(result, L"RotationAngleInDegrees", RotationAngleInDegreesScalarAnimation_0_to_900(), _rootProgress);
        return result;
    }

    // - Layer aggregator
    // Scale:5,5, Offset:<40, 40>
    // Ellipse Path.EllipseGeometry
    CompositionEllipseGeometry Ellipse_7_0()
    {
        const auto result = _c.CreateEllipseGeometry();
        result.Radius({ 7.0F, 7.0F });
        return result;
    }

    // - - Layer aggregator
    // -  Scale:5,5, Offset:<40, 40>
    // ShapeGroup: Ellipse B
    // Ellipse Path.EllipseGeometry
    CompositionEllipseGeometry Ellipse_7_1()
    {
        const auto result = _c.CreateEllipseGeometry();
        result.TrimEnd(0.5F);
        result.Radius({ 7.0F, 7.0F });
        StartProgressBoundAnimation(result, L"TrimStart", TrimStartScalarAnimation_0_to_0p5(), RootProgress());
        return result;
    }

    // - - Layer aggregator
    // -  Scale:5,5, Offset:<40, 40>
    // ShapeGroup: Ellipse B
    // Ellipse Path.EllipseGeometry
    CompositionEllipseGeometry Ellipse_7_2()
    {
        const auto result = _c.CreateEllipseGeometry();
        result.Radius({ 7.0F, 7.0F });
        StartProgressBoundAnimation(result, L"TrimEnd", TrimEndScalarAnimation_0_to_0p5(), _rootProgress);
        return result;
    }

    // Layer aggregator
    // Ellipse Path
    CompositionSpriteShape SpriteShape_0()
    {
        // Offset:<40, 40>, Scale:<5, 5>
        const auto result = CreateSpriteShape(Ellipse_7_0(), { 5.0F, 0.0F, 0.0F, 5.0F, 40.0F, 40.0F });
        result.StrokeBrush(ThemeColor_Background());
        result.StrokeDashCap(CompositionStrokeCap::Round);
        result.StrokeThickness(1.5F);
        return result;
    }

    // - Layer aggregator
    // Scale:5,5, Offset:<40, 40>
    // Ellipse Path
    CompositionSpriteShape SpriteShape_1()
    {
        const auto result = _c.CreateSpriteShape(Ellipse_7_1());
        result.StrokeBrush(ThemeColor_Foreground_0());
        result.StrokeDashCap(CompositionStrokeCap::Round);
        result.StrokeStartCap(CompositionStrokeCap::Round);
        result.StrokeEndCap(CompositionStrokeCap::Round);
        result.StrokeThickness(1.5F);
        return result;
    }

    // - Layer aggregator
    // Scale:5,5, Offset:<40, 40>
    // Ellipse Path
    CompositionSpriteShape SpriteShape_2()
    {
        const auto result = _c.CreateSpriteShape(Ellipse_7_2());
        result.StrokeBrush(ThemeColor_Foreground_1());
        result.StrokeDashCap(CompositionStrokeCap::Round);
        result.StrokeStartCap(CompositionStrokeCap::Round);
        result.StrokeEndCap(CompositionStrokeCap::Round);
        result.StrokeThickness(1.5F);
        return result;
    }

    // The root of the composition.
    ContainerVisual Root()
    {
        const auto result = _root = _c.CreateContainerVisual();
        const auto propertySet = result.Properties();
        propertySet.InsertScalar(L"Progress", 0.0F);
        // Layer aggregator
        result.Children().InsertAtTop(ShapeVisual_0());
        return result;
    }

    CubicBezierEasingFunction CubicBezierEasingFunction_0()
    {
        return _cubicBezierEasingFunction_0 =
                   _c.CreateCubicBezierEasingFunction({ 0.166999996F, 0.166999996F }, { 0.833000004F, 0.833000004F });
    }

    ExpressionAnimation RootProgress()
    {
        const auto result = _rootProgress = _c.CreateExpressionAnimation(L"_.Progress");
        result.SetReferenceParameter(L"_", _root);
        return result;
    }

    // Opacity0
    ScalarKeyFrameAnimation Opacity0ScalarAnimation_0_to_1()
    {
        const auto result = CreateScalarKeyFrameAnimation(0.0F, 0.0F, _holdThenStepEasingFunction);
        result.InsertKeyFrame(0.5F, 1.0F, _holdThenStepEasingFunction);
        return result;
    }

    // Opacity0
    ScalarKeyFrameAnimation Opacity0ScalarAnimation_1_to_0()
    {
        const auto result = CreateScalarKeyFrameAnimation(0.0F, 1.0F, _holdThenStepEasingFunction);
        result.InsertKeyFrame(0.5F, 0.0F, _holdThenStepEasingFunction);
        return result;
    }

    // - Layer aggregator
    // Scale:5,5, Offset:<40, 40>
    // Rotation
    ScalarKeyFrameAnimation RotationAngleInDegreesScalarAnimation_0_to_900()
    {
        const auto result = CreateScalarKeyFrameAnimation(0.0F, 0.0F, _holdThenStepEasingFunction);
        result.InsertKeyFrame(0.5F, 450.0F, _cubicBezierEasingFunction_0);
        result.InsertKeyFrame(1.0F, 900.0F, _cubicBezierEasingFunction_0);
        return result;
    }

    // - - - Layer aggregator
    // - -  Scale:5,5, Offset:<40, 40>
    // - ShapeGroup: Ellipse B
    // Ellipse Path.EllipseGeometry
    // TrimEnd
    ScalarKeyFrameAnimation TrimEndScalarAnimation_0_to_0p5()
    {
        const auto result = CreateScalarKeyFrameAnimation(0.0F, 9.99999975E-05F, _holdThenStepEasingFunction);
        result.InsertKeyFrame(0.5F, 0.5F, _cubicBezierEasingFunction_0);
        return result;
    }

    // - - - Layer aggregator
    // - -  Scale:5,5, Offset:<40, 40>
    // - ShapeGroup: Ellipse B
    // Ellipse Path.EllipseGeometry
    // TrimStart
    ScalarKeyFrameAnimation TrimStartScalarAnimation_0_to_0p5()
    {
        const auto result = CreateScalarKeyFrameAnimation(0.0F, 0.0F, StepThenHoldEasingFunction());
        result.InsertKeyFrame(0.5F, 0.0F, HoldThenStepEasingFunction());
        result.InsertKeyFrame(1.0F, 0.5F, CubicBezierEasingFunction_0());
        return result;
    }

    // Layer aggregator
    ShapeVisual ShapeVisual_0()
    {
        const auto result = _c.CreateShapeVisual();
        result.Size({ 80.0F, 80.0F });
        const auto shapes = result.Shapes();
        // Scale:5,5, Offset:<40, 40>
        shapes.Append(SpriteShape_0());
        // Scale:5,5, Offset:<40, 40>
        shapes.Append(ContainerShape());
        return result;
    }

    StepEasingFunction HoldThenStepEasingFunction()
    {
        const auto result = _holdThenStepEasingFunction = _c.CreateStepEasingFunction();
        result.IsFinalStepSingleFrame(true);
        return result;
    }

    // - - - - Layer aggregator
    // - - -  Scale:5,5, Offset:<40, 40>
    // - - ShapeGroup: Ellipse B
    // - Ellipse Path.EllipseGeometry
    // TrimStart
    StepEasingFunction StepThenHoldEasingFunction()
    {
        const auto result = _c.CreateStepEasingFunction();
        result.IsInitialStepSingleFrame(true);
        return result;
    }

public:
    AnimatedVisual(Compositor compositor, CompositionPropertySet themeProperties) :
        _c(compositor), _themeProperties(themeProperties), _reusableExpressionAnimation(compositor.CreateExpressionAnimation())
    {
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
        return { TimeSpan{ c_durationTicks } };
    }

    Visual RootVisual() const
    {
        return _root;
    }

    float2 Size() const
    {
        return { 80.0F, 80.0F };
    }

    static bool IsRuntimeCompatible()
    {
        return winrt::Windows::Foundation::Metadata::ApiInformation::IsApiContractPresent(
            L"Windows.Foundation.UniversalApiContract", 7);
    }
};
} // end namespace

float4 AnimatedVisuals::ProgressRingIndeterminate::ColorAsVector4(Color color)
{
    return { static_cast<float>(color.R), static_cast<float>(color.G), static_cast<float>(color.B), static_cast<float>(color.A) };
}

winrt::CompositionPropertySet AnimatedVisuals::ProgressRingIndeterminate::EnsureThemeProperties(Compositor compositor)
{
    if (_themeProperties == nullptr)
    {
        _themeProperties = compositor.CreatePropertySet();
        _themeProperties.InsertVector4(L"Background", ColorAsVector4((Color)_themeBackground));
        _themeProperties.InsertVector4(L"Foreground", ColorAsVector4((Color)_themeForeground));
    }

    return _themeProperties;
}

winrt::CompositionPropertySet AnimatedVisuals::ProgressRingIndeterminate::GetThemeProperties(Compositor compositor)
{
    return EnsureThemeProperties(compositor);
}

Color AnimatedVisuals::ProgressRingIndeterminate::Background()
{
    return _themeBackground;
}

void AnimatedVisuals::ProgressRingIndeterminate::Background(Color value)
{
    _themeBackground = value;
    if (_themeProperties != nullptr)
    {
        _themeProperties.InsertVector4(L"Background", ColorAsVector4((Color)_themeBackground));
    }
}

Color AnimatedVisuals::ProgressRingIndeterminate::Foreground()
{
    return _themeForeground;
}

void AnimatedVisuals::ProgressRingIndeterminate::Foreground(Color value)
{
    _themeForeground = value;
    if (_themeProperties != nullptr)
    {
        _themeProperties.InsertVector4(L"Foreground", ColorAsVector4((Color)_themeForeground));
    }
}

winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual AnimatedVisuals::ProgressRingIndeterminate::TryCreateAnimatedVisual(
    const Compositor& compositor, IInspectable& diagnostics)
{
    const auto _ = EnsureThemeProperties(compositor);
    diagnostics = nullptr;

    if (AnimatedVisual::IsRuntimeCompatible())
    {
        return winrt::make<AnimatedVisual>(compositor, _themeProperties);
    }

    return nullptr;
}
