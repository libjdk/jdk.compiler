#ifndef _com_sun_tools_javac_comp_DeferredAttr$SwitchExpressionScanner_h_
#define _com_sun_tools_javac_comp_DeferredAttr$SwitchExpressionScanner_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$SwitchExpressionScanner
//$ extends com.sun.tools.javac.comp.DeferredAttr$FilterScanner

#include <com/sun/tools/javac/comp/DeferredAttr$FilterScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export DeferredAttr$SwitchExpressionScanner : public ::com::sun::tools::javac::comp::DeferredAttr$FilterScanner {
	$class(DeferredAttr$SwitchExpressionScanner, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::DeferredAttr$FilterScanner)
public:
	DeferredAttr$SwitchExpressionScanner();
	void init$();
	using ::com::sun::tools::javac::comp::DeferredAttr$FilterScanner::scan;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$SwitchExpressionScanner_h_