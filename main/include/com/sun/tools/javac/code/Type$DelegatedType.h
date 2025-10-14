#ifndef _com_sun_tools_javac_code_Type$DelegatedType_h_
#define _com_sun_tools_javac_code_Type$DelegatedType_h_
//$ class com.sun.tools.javac.code.Type$DelegatedType
//$ extends com.sun.tools.javac.code.Type

#include <com/sun/tools/javac/code/Type.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class TypeMetadata;
					class TypeTag;
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

class $import Type$DelegatedType : public ::com::sun::tools::javac::code::Type {
	$class(Type$DelegatedType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type)
public:
	Type$DelegatedType();
	void init$(::com::sun::tools::javac::code::TypeTag* tag, ::com::sun::tools::javac::code::Type* qtype);
	void init$(::com::sun::tools::javac::code::TypeTag* tag, ::com::sun::tools::javac::code::Type* qtype, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual ::com::sun::tools::javac::util::List* allparams() override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::com::sun::tools::javac::code::Type* getEnclosingType() override;
	virtual ::com::sun::tools::javac::util::List* getParameterTypes() override;
	virtual ::com::sun::tools::javac::code::Type* getReceiverType() override;
	virtual ::com::sun::tools::javac::code::Type* getReturnType() override;
	virtual ::com::sun::tools::javac::code::TypeTag* getTag() override;
	virtual ::com::sun::tools::javac::util::List* getThrownTypes() override;
	virtual ::com::sun::tools::javac::util::List* getTypeArguments() override;
	virtual ::com::sun::tools::javac::code::Type* getUpperBound() override;
	virtual bool isErroneous() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Type* qtype = nullptr;
	::com::sun::tools::javac::code::TypeTag* tag = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$DelegatedType_h_