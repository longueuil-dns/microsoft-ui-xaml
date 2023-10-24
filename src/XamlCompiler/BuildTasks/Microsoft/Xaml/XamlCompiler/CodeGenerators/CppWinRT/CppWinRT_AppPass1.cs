﻿// ------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version: 17.0.0.0
//  
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
// ------------------------------------------------------------------------------
namespace Microsoft.UI.Xaml.Markup.Compiler.CodeGen
{
    using System;
    
    /// <summary>
    /// Class to produce the template output
    /// </summary>
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.TextTemplating", "17.0.0.0")]
    internal partial class CppWinRT_AppPass1 : CppWinRT_CodeGenerator<PageDefinition>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write(@"#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------

#include ""winrt/");
            this.Write(this.ToStringHelper.ToStringWithCulture(KnownNamespaces.Xaml));
            this.Write(".h\"\r\n#include \"winrt/");
            this.Write(this.ToStringHelper.ToStringWithCulture(KnownNamespaces.XamlMarkup));
            this.Write(".h\"\r\n#include \"winrt/");
            this.Write(this.ToStringHelper.ToStringWithCulture(KnownNamespaces.XamlInterop));
            this.Write(".h\"\r\n#include \"winrt/");
            this.Write(this.ToStringHelper.ToStringWithCulture(KnownNamespaces.WindowsXamlInterop));
            this.Write(".h\"\r\n\r\n#include \"XamlTypeInfo.xaml.g.h\"\r\n#include \"XamlMetaDataProvider.h\"\r\n\r\nnam" +
                    "espace winrt::");
            this.Write(this.ToStringHelper.ToStringWithCulture(Colonize(Model.CodeInfo.ClassName.Namespace)));
            this.Write("::implementation\r\n{\r\n    template <typename D, typename ... Interfaces>\r\n    stru" +
                    "ct AppT: public ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(Model.CodeInfo.BaseTypeName)));
            this.Write("T<D, ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.XamlMarkup)));
            this.Write("::IXamlMetadataProvider, Interfaces...>\r\n    {\r\n        using IXamlType = ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.XamlMarkup)));
            this.Write("::IXamlType;\r\n\r\n        void InitializeComponent()\r\n        {\r\n            if (_c" +
                    "ontentLoaded)\r\n                return;\r\n           \r\n            _contentLoaded " +
                    "= true;\r\n\r\n            ::winrt::Windows::Foundation::Uri resourceLocator{ L\"");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.GetLoadComponentUri(Model.CodeInfo.PriIndexName, Model.CodeInfo.BaseApparentRelativePath)));
            this.Write("\" };\r\n            ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.Xaml)));
            this.Write("::Application::LoadComponent(*this, resourceLocator);\r\n        }\r\n\r\n");
  if(!ProjectInfo.GenerateProviderCode) { 
            this.Write("\r\n        void AddOtherProvider(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.XamlMarkup)));
            this.Write("::IXamlMetadataProvider const& otherProvider)\r\n        {\r\n            AppProvider" +
                    "()->AddOtherProvider(otherProvider);\r\n        }\r\n");
  }
            this.Write("\r\n        IXamlType GetXamlType(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsXamlInterop)));
            this.Write(@"::TypeName const& type)
        {
            return AppProvider()->GetXamlType(type);
        }

        IXamlType GetXamlType(::winrt::hstring const& fullName)
        {
            return AppProvider()->GetXamlType(fullName);
        }

        ::winrt::com_array<");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.XamlMarkup)));
            this.Write(@"::XmlnsDefinition> GetXmlnsDefinitions()
        {
            return AppProvider()->GetXmlnsDefinitions();
        }

    private:
        bool _contentLoaded{false};
        winrt::com_ptr<XamlMetaDataProvider> _appProvider;
        winrt::com_ptr<XamlMetaDataProvider> AppProvider()
        {
            if (!_appProvider)
            {
                _appProvider = winrt::make_self<XamlMetaDataProvider>();
            }
            return _appProvider;
        }
    };
}
");
            return this.GenerationEnvironment.ToString();
        }
    }
}
