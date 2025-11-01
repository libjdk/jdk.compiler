#ifndef _com_sun_tools_javac_code_Type$PackageType_h_
#define _com_sun_tools_javac_code_Type$PackageType_h_
//$ class com.sun.tools.javac.code.Type$PackageType
//$ extends com.sun.tools.javac.code.Type
//$ implements javax.lang.model.type.NoType

#include <com/sun/tools/javac/code/Type.h>
#include <javax/lang/model/type/NoType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$PackageSymbol;
					class Type$Visitor;
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

class $export Type$PackageType : public ::com::sun::tools::javac::code::Type, public ::javax::lang::model::type::NoType {
	$class(Type$PackageType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type, ::javax::lang::model::type::NoType)
public:
	Type$PackageType();
	virtual $Object* clone() override;
	virtual bool equals(Object$* t) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationType) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationType) override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::code::Symbol$PackageSymbol* tsym);
	virtual $Object* accept(::com::sun::tools::javac::code::Type$Visitor* v, Object$* s) override;
	virtual $Object* accept(::javax::lang::model::type::TypeVisitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::code::Type$PackageType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::javax::lang::model::type::TypeKind* getKind() override;
	virtual ::com::sun::tools::javac::code::TypeTag* getTag() override;
	virtual $String* toString() override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$PackageType_h_