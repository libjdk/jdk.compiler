#ifndef _com_sun_tools_doclint_DocLint_h_
#define _com_sun_tools_doclint_DocLint_h_
//$ class com.sun.tools.doclint.DocLint
//$ extends com.sun.source.util.Plugin

#include <com/sun/source/util/Plugin.h>

#pragma push_macro("XCHECK_PACKAGE")
#undef XCHECK_PACKAGE
#pragma push_macro("XMSGS_CUSTOM_PREFIX")
#undef XMSGS_CUSTOM_PREFIX
#pragma push_macro("XMSGS_OPTION")
#undef XMSGS_OPTION

namespace java {
	namespace util {
		class ServiceLoader$Provider;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace doclint {

class $import DocLint : public ::com::sun::source::util::Plugin {
	$class(DocLint, 0, ::com::sun::source::util::Plugin)
public:
	DocLint();
	void init$();
	virtual bool isValidOption($String* opt) {return false;}
	static bool lambda$newDocLint$0(::java::util::ServiceLoader$Provider* p_);
	static ::com::sun::tools::doclint::DocLint* newDocLint();
	static $String* XMSGS_OPTION;
	static $String* XMSGS_CUSTOM_PREFIX;
	static $String* XCHECK_PACKAGE;
	static ::java::util::ServiceLoader$Provider* docLintProvider;
};

			} // doclint
		} // tools
	} // sun
} // com

#pragma pop_macro("XCHECK_PACKAGE")
#pragma pop_macro("XMSGS_CUSTOM_PREFIX")
#pragma pop_macro("XMSGS_OPTION")

#endif // _com_sun_tools_doclint_DocLint_h_