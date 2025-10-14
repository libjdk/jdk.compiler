#ifndef _com_sun_tools_javac_code_Types$TypePair_h_
#define _com_sun_tools_javac_code_Types$TypePair_h_
//$ class com.sun.tools.javac.code.Types$TypePair
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
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

class $export Types$TypePair : public ::java::lang::Object {
	$class(Types$TypePair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Types$TypePair();
	void init$(::com::sun::tools::javac::code::Types* this$0, ::com::sun::tools::javac::code::Type* t1, ::com::sun::tools::javac::code::Type* t2);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
	::com::sun::tools::javac::code::Type* t1 = nullptr;
	::com::sun::tools::javac::code::Type* t2 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$TypePair_h_