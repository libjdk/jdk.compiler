#ifndef _com_sun_tools_javac_code_Types$23_h_
#define _com_sun_tools_javac_code_Types$23_h_
//$ class com.sun.tools.javac.code.Types$23
//$ extends com.sun.tools.javac.code.Types$MapVisitor

#include <com/sun/tools/javac/code/Types$MapVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ForAll;
					class Type$MethodType;
					class Types;
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

class Types$23 : public ::com::sun::tools::javac::code::Types$MapVisitor {
	$class(Types$23, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$MapVisitor)
public:
	Types$23();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	using ::com::sun::tools::javac::code::Types$MapVisitor::visit;
	virtual ::com::sun::tools::javac::code::Type* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, ::com::sun::tools::javac::code::Type* newReturn);
	virtual $Object* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, Object$* newReturn) override;
	virtual ::com::sun::tools::javac::code::Type* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, ::com::sun::tools::javac::code::Type* newReturn);
	virtual $Object* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, Object$* newReturn) override;
	virtual ::com::sun::tools::javac::code::Type* visitType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* newReturn);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* newReturn) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$23_h_