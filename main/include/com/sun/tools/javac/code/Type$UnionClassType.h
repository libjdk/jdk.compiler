#ifndef _com_sun_tools_javac_code_Type$UnionClassType_h_
#define _com_sun_tools_javac_code_Type$UnionClassType_h_
//$ class com.sun.tools.javac.code.Type$UnionClassType
//$ extends com.sun.tools.javac.code.Type$ClassType
//$ implements javax.lang.model.type.UnionType

#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <javax/lang/model/type/UnionType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
	namespace lang {
		class Iterable;
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
				class TypeKind;
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

class $import Type$UnionClassType : public ::com::sun::tools::javac::code::Type$ClassType, public ::javax::lang::model::type::UnionType {
	$class(Type$UnionClassType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ClassType, ::javax::lang::model::type::UnionType)
public:
	Type$UnionClassType();
	using ::com::sun::tools::javac::code::Type$ClassType::accept;
	virtual $Object* clone() override;
	virtual bool equals(Object$* t) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationType) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationType) override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::code::Type$ClassType* ct, ::com::sun::tools::javac::util::List* alternatives);
	virtual $Object* accept(::javax::lang::model::type::TypeVisitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::code::Type$UnionClassType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual ::java::lang::Iterable* getAlternativeTypes();
	virtual ::java::util::List* getAlternatives() override;
	virtual ::javax::lang::model::type::TypeKind* getKind() override;
	virtual ::com::sun::tools::javac::code::Type* getLub();
	virtual bool isCompound() override;
	virtual bool isUnion() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::util::List* alternatives_field = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$UnionClassType_h_