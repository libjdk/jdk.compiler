#ifndef _com_sun_tools_javac_code_Type$UnknownType_h_
#define _com_sun_tools_javac_code_Type$UnknownType_h_
//$ class com.sun.tools.javac.code.Type$UnknownType
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
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeVisitor;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Type$UnknownType : public ::com::sun::tools::javac::code::Type {
	$class(Type$UnknownType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type)
public:
	Type$UnknownType();
	using ::com::sun::tools::javac::code::Type::accept;
	void init$();
	virtual $Object* accept(::javax::lang::model::type::TypeVisitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::code::Type$UnknownType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::com::sun::tools::javac::code::TypeTag* getTag() override;
	virtual bool isPartial() override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$UnknownType_h_