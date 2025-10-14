#ifndef _com_sun_tools_javac_comp_DeferredAttr$LambdaReturnScanner_h_
#define _com_sun_tools_javac_comp_DeferredAttr$LambdaReturnScanner_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$LambdaReturnScanner
//$ extends com.sun.tools.javac.comp.DeferredAttr$FilterScanner

#include <com/sun/tools/javac/comp/DeferredAttr$FilterScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export DeferredAttr$LambdaReturnScanner : public ::com::sun::tools::javac::comp::DeferredAttr$FilterScanner {
	$class(DeferredAttr$LambdaReturnScanner, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::DeferredAttr$FilterScanner)
public:
	DeferredAttr$LambdaReturnScanner();
	void init$();
	using ::com::sun::tools::javac::comp::DeferredAttr$FilterScanner::scan;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$LambdaReturnScanner_h_