﻿// ------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version: 16.0.0.0
//  
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
// ------------------------------------------------------------------------------
namespace XamlGen.Templates.Code.Framework.Headers
{
    using System.Linq;
    using System.Text;
    using System.Collections.Generic;
    using OM;
    using System;
    
    /// <summary>
    /// Class to produce the template output
    /// </summary>
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.TextTemplating", "16.0.0.0")]
    public partial class UIAEnums : CppCodeGenerator<OMContextView>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Copyright>()));
            this.Write("\r\n\r\n#pragma once\r\n\r\n");
 foreach (var ns in Model.Namespaces) {
        foreach (var e in ns.Enums.Where(t => t.IsAutomationEnum)) { 
            this.Write("//------------------------------------------------------------------------\r\n//\r\n/" +
                    "/  Enum:  ");
            this.Write(this.ToStringHelper.ToStringWithCulture(e.UIAName));
            this.Write("\r\n//\r\n//------------------------------------------------------------------------\r" +
                    "\nenum ");
            this.Write(this.ToStringHelper.ToStringWithCulture(e.UIAName));
            this.Write("\r\n{\r\n");
          foreach (var value in e.Values) { 
            this.Write("    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(value.UIAName));
            this.Write(",\r\n");
          } 
            this.Write("};\r\n\r\n");
      }
   } 
            return this.GenerationEnvironment.ToString();
        }
    }
}
