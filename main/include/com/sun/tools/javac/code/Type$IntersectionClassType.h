#ifndef _com_sun_tools_javac_code_Type$IntersectionClassType_h_
#define _com_sun_tools_javac_code_Type$IntersectionClassType_h_
//$ class com.sun.tools.javac.code.Type$IntersectionClassType
//$ extends com.sun.tools.javac.code.Type$ClassType
//$ implements javax.lang.model.type.IntersectionType

#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <javax/lang/model/type/IntersectionType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ClassSymbol;
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

class $import Type$IntersectionClassType : public ::com::sun::tools::javac::code::Type$ClassType, public ::javax::lang::model::type::IntersectionType {
	$class(Type$IntersectionClassType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ClassType, ::javax::lang::model::type::IntersectionType)
public:
	Type$IntersectionClassType();
	using ::com::sun::tools::javac::code::Type$ClassType::accept;
	virtual $Object* clone() override;
	virtual bool equals(Object$* t) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationType) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationType) override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::List* bounds, ::com::sun::tools::javac::code::Symbol$ClassSymbol* csym, bool allInterfaces);
	virtual $Object* accept(::javax::lang::model::type::TypeVisitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::code::Type$IntersectionClassType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual ::java::util::List* getBounds() override;
	virtual ::com::sun::tools::javac::util::List* getComponents();
	virtual ::com::sun::tools::javac::util::List* getExplicitComponents();
	virtual ::javax::lang::model::type::TypeKind* getKind() override;
	virtual bool isCompound() override;
	virtual bool isIntersection() override;
	virtual $String* toString() override;
	bool allInterfaces = false;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$IntersectionClassType_h_