#ifndef _com_sun_tools_javac_code_Type$ClassType$2_h_
#define _com_sun_tools_javac_code_Type$ClassType$2_h_
//$ class com.sun.tools.javac.code.Type$ClassType$2
//$ extends com.sun.tools.javac.code.Type$ClassType

#include <com/sun/tools/javac/code/Type$ClassType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
					class Type;
					class TypeMetadata;
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
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Type$ClassType$2 : public ::com::sun::tools::javac::code::Type$ClassType {
	$class(Type$ClassType$2, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ClassType)
public:
	Type$ClassType$2();
	void init$(::com::sun::tools::javac::code::Type$ClassType* this$0, ::com::sun::tools::javac::code::Type* outer, ::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::TypeMetadata* metadata, Object$* val$value);
	virtual ::com::sun::tools::javac::code::Symbol$TypeSymbol* asElement() override;
	virtual ::com::sun::tools::javac::code::Type* baseType() override;
	virtual ::com::sun::tools::javac::code::Type$ClassType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual $Object* constValue() override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::com::sun::tools::javac::code::Type* getEnclosingType() override;
	virtual ::com::sun::tools::javac::util::List* getTypeArguments() override;
	::com::sun::tools::javac::code::Type$ClassType* this$0 = nullptr;
	$Object* val$value = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$ClassType$2_h_