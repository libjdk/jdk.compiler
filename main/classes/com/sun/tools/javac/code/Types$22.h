#ifndef _com_sun_tools_javac_code_Types$22_h_
#define _com_sun_tools_javac_code_Types$22_h_
//$ class com.sun.tools.javac.code.Types$22
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

class Types$22 : public ::com::sun::tools::javac::code::Types$MapVisitor {
	$class(Types$22, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$MapVisitor)
public:
	Types$22();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	using ::com::sun::tools::javac::code::Types$MapVisitor::visit;
	virtual ::com::sun::tools::javac::code::Type* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, ::com::sun::tools::javac::util::List* newThrown);
	virtual $Object* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, Object$* newThrown) override;
	virtual ::com::sun::tools::javac::code::Type* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, ::com::sun::tools::javac::util::List* newThrown);
	virtual $Object* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, Object$* newThrown) override;
	virtual ::com::sun::tools::javac::code::Type* visitType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::util::List* newThrown);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* newThrown) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$22_h_