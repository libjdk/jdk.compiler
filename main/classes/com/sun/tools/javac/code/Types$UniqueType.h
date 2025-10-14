#ifndef _com_sun_tools_javac_code_Types$UniqueType_h_
#define _com_sun_tools_javac_code_Types$UniqueType_h_
//$ class com.sun.tools.javac.code.Types$UniqueType
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

class $export Types$UniqueType : public ::java::lang::Object {
	$class(Types$UniqueType, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Types$UniqueType();
	void init$(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Types* types);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Type* type = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$UniqueType_h_