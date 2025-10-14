#ifndef _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper$1_h_
#define _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper$1_h_
//$ class com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$1
//$ extends com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$Template

#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Resolve$MethodResolutionDiagHelper$1 : public ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template {
	$class(Resolve$MethodResolutionDiagHelper$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template)
public:
	Resolve$MethodResolutionDiagHelper$1();
	void init$($String* key, $Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template>* subTemplates);
	virtual bool matches(Object$* d) override;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper$1_h_