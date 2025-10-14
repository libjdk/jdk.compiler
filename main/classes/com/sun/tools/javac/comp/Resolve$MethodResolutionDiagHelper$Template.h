#ifndef _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper$Template_h_
#define _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper$Template_h_
//$ class com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$Template
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Resolve$MethodResolutionDiagHelper$Template : public ::java::lang::Object {
	$class(Resolve$MethodResolutionDiagHelper$Template, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Resolve$MethodResolutionDiagHelper$Template();
	void init$($String* key, $Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template>* subTemplates);
	virtual bool matches(Object$* o);
	$String* regex = nullptr;
	$Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template>* subTemplates = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper$Template_h_