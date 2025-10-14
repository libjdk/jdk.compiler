#ifndef _com_sun_tools_javac_code_Types$SimpleVisitor_h_
#define _com_sun_tools_javac_code_Types$SimpleVisitor_h_
//$ class com.sun.tools.javac.code.Types$SimpleVisitor
//$ extends com.sun.tools.javac.code.Types$DefaultTypeVisitor

#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type$CapturedType;
					class Type$ForAll;
					class Type$UndetVar;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Types$SimpleVisitor : public ::com::sun::tools::javac::code::Types$DefaultTypeVisitor {
	$class(Types$SimpleVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$DefaultTypeVisitor)
public:
	Types$SimpleVisitor();
	void init$();
	virtual $Object* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, Object$* s) override;
	virtual $Object* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, Object$* s) override;
	virtual $Object* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, Object$* s) override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$SimpleVisitor_h_