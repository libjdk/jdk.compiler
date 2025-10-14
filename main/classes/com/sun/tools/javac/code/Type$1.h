#ifndef _com_sun_tools_javac_code_Type$1_h_
#define _com_sun_tools_javac_code_Type$1_h_
//$ class com.sun.tools.javac.code.Type$1
//$ extends com.sun.tools.javac.code.Type$JCNoType

#include <com/sun/tools/javac/code/Type$JCNoType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Type$1 : public ::com::sun::tools::javac::code::Type$JCNoType {
	$class(Type$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$JCNoType)
public:
	Type$1();
	using ::com::sun::tools::javac::code::Type$JCNoType::accept;
	void init$();
	virtual $String* toString() override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$1_h_