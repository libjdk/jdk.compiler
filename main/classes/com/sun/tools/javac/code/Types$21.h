#ifndef _com_sun_tools_javac_code_Types$21_h_
#define _com_sun_tools_javac_code_Types$21_h_
//$ class com.sun.tools.javac.code.Types$21
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
				namespace util {
					class List;
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

class Types$21 : public ::com::sun::tools::javac::code::Types$MapVisitor {
	$class(Types$21, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$MapVisitor)
public:
	Types$21();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	using ::com::sun::tools::javac::code::Types$MapVisitor::visit;
	virtual ::com::sun::tools::javac::code::Type* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, ::com::sun::tools::javac::util::List* newParams);
	virtual $Object* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, Object$* newParams) override;
	virtual ::com::sun::tools::javac::code::Type* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, ::com::sun::tools::javac::util::List* newParams);
	virtual $Object* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, Object$* newParams) override;
	virtual ::com::sun::tools::javac::code::Type* visitType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::util::List* newParams);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* newParams) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$21_h_