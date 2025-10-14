#ifndef _com_sun_tools_javac_code_Type$3_h_
#define _com_sun_tools_javac_code_Type$3_h_
//$ class com.sun.tools.javac.code.Type$3
//$ extends com.sun.tools.javac.code.Type$JCNoType

#include <com/sun/tools/javac/code/Type$JCNoType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Type$3 : public ::com::sun::tools::javac::code::Type$JCNoType {
	$class(Type$3, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$JCNoType)
public:
	Type$3();
	using ::com::sun::tools::javac::code::Type$JCNoType::accept;
	void init$();
	virtual $String* toString() override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$3_h_