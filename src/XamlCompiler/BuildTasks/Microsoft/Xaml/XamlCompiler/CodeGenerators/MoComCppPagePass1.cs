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
    using System.Linq;
    using System;
    
    /// <summary>
    /// Class to produce the template output
    /// </summary>
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.TextTemplating", "17.0.0.0")]
    internal partial class MoComCppPagePass1 : CppCX_CodeGenerator<PageDefinition>
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

");
 if (Model.CodeInfo.BindStatus != BindStatus.None) 
 { 
            this.Write("#include \"XamlBindingInfo.g.h\"\r\n");
 } 
            this.Write("\r\n");
 Output_ForwardDeclarations(); 
            this.Write("\r\n");
 OutputNamespaceBegin(Model.CodeInfo.ClassName.Namespace); 
            this.Write("[::Windows::Foundation::Metadata::WebHostHidden]\r\npartial ref class ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.CodeInfo.ClassName.ShortName));
            this.Write(" : public ::");
            this.Write(this.ToStringHelper.ToStringWithCulture(Colonize(Model.CodeInfo.BaseTypeName)));
            this.Write(", \r\n    public ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.XamlMarkup)));
            this.Write("::IComponentConnector\r\n{\r\npublic:\r\n    void InitializeComponent();\r\n");
 if(Model.CodeInfo.PerXamlFileInfo.Count > 1)
 {
            this.Write("    void InitializeComponent(::Windows::Foundation::Uri^ resourceLocator);\r\n");
 }
            this.Write("    virtual void Connect(int connectionId, ::Platform::Object^ target);\r\n    virt" +
                    "ual ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.XamlMarkup)));
            this.Write("::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ " +
                    "target);\r\n\r\nprivate:\r\n    void UnloadObject(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.Xaml)));
            this.Write("::DependencyObject^ dependencyObject);\r\n    void DisconnectUnloadedObject(int con" +
                    "nectionId);\r\n\r\nprivate:\r\n    bool _contentLoaded;\r\n\r\n");
 foreach (BindUniverse bindUniverse in Model.CodeInfo.BindUniverses)
 {
            this.Write("    class ");
            this.Write(this.ToStringHelper.ToStringWithCulture(bindUniverse.BindingsClassName));
            this.Write(";\r\n");
 }
            this.Write("\r\n");
 if (Model.CodeInfo.BindStatus != BindStatus.None) 
 { 
            this.Write("    ::XamlBindingInfo::XamlBindings^ Bindings;\r\n");
 } 
 Output_Cpp_FieldDefinitions(); 
 Output_xProperties(); 
            this.Write("};\r\n");
 OutputNamespaceEnd(Model.CodeInfo.ClassName.Namespace); 
            return this.GenerationEnvironment.ToString();
        }
 
     private void Output_ForwardDeclarations()
     {
         foreach (ForwardDeclaringNamespace typePath in Model.ForwardDeclarations)
         {
             int indentCount = 0;
             foreach(String nsPart in typePath.Namespace.Split('.'))
             {
this.Write("namespace ");

this.Write(this.ToStringHelper.ToStringWithCulture(nsPart));

this.Write(" {\r\n");

                 PushIndent();
                 indentCount += 1;
             }
             foreach(String typeName in typePath.ShortNameTypes)
             {
this.Write("ref class ");

this.Write(this.ToStringHelper.ToStringWithCulture(typeName));

this.Write(";\r\n");

             }
             while(indentCount-- > 0)
             {
                 PopIndent();
this.Write("}\r\n");

             }
         }
     }
     private void Output_Cpp_FieldDefinitions()
     {
         foreach (FieldDefinition fieldData in Model.CodeInfo.FieldDeclarations)
         {
             if (fieldData.IsDeprecated)
             {
this.Write("#pragma warning( push )\r\n#pragma warning( disable : 4973 )\r\n");

             }
this.Write("    ");

this.Write(this.ToStringHelper.ToStringWithCulture(fieldData.FieldModifier));

this.Write(": ::");

this.Write(this.ToStringHelper.ToStringWithCulture(Colonize(fieldData.FieldTypeName)));

this.Write("^ ");

this.Write(this.ToStringHelper.ToStringWithCulture(fieldData.FieldName));

this.Write(";\r\n");

             if (fieldData.IsDeprecated)
             {
this.Write("#pragma warning( pop )\r\n");

             }
         }
     }
     private void Output_xProperties() 
     { 
         if (Model.XProperties.Any()) 
         { 
this.Write("    private: void InitializeXProperties();\r\n\r\n");

         } 
         foreach (xProperty xProp in Model.XProperties) 
         { 
this.Write("    // ");

this.Write(this.ToStringHelper.ToStringWithCulture(xProp.CodegenComment));

this.Write("\r\n    private: ::");

this.Write(this.ToStringHelper.ToStringWithCulture(Colonize(xProp.FullTypeName)));

this.Write("^ _");

this.Write(this.ToStringHelper.ToStringWithCulture(xProp.Name));

this.Write(";\r\n");

             if (!xProp.IsReadOnly) 
             { 
this.Write("    public: event ");

this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.XamlData)));

this.Write("::PropertyChangedEventHandler^ ");

this.Write(this.ToStringHelper.ToStringWithCulture(xProp.ChangedHandler));

this.Write(";\r\n");

             } 
this.Write("    public: property ::");

this.Write(this.ToStringHelper.ToStringWithCulture(Colonize(xProp.FullTypeName)));

this.Write("^ ");

this.Write(this.ToStringHelper.ToStringWithCulture(xProp.Name));

this.Write("\r\n    {\r\n        ::");

this.Write(this.ToStringHelper.ToStringWithCulture(Colonize(xProp.FullTypeName)));

this.Write("^ get() { return _");

this.Write(this.ToStringHelper.ToStringWithCulture(xProp.Name));

this.Write("; }\r\n");

             if (!xProp.IsReadOnly) 
             { 
this.Write("        void set(::");

this.Write(this.ToStringHelper.ToStringWithCulture(Colonize(xProp.FullTypeName)));

this.Write("^ value)\r\n        {\r\n            if (_");

this.Write(this.ToStringHelper.ToStringWithCulture(xProp.Name));

this.Write(" != value)\r\n            {\r\n                _");

this.Write(this.ToStringHelper.ToStringWithCulture(xProp.Name));

this.Write(" = value;\r\n                ");

this.Write(this.ToStringHelper.ToStringWithCulture(xProp.ChangedHandler));

this.Write("(this, ref new ");

this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.XamlData)));

this.Write("::PropertyChangedEventArgs(L\"");

this.Write(this.ToStringHelper.ToStringWithCulture(xProp.Name));

this.Write("\"));\r\n            }\r\n        }\r\n");

             } 
this.Write("    }\r\n\r\n");

         } 
     } 
    }
}
