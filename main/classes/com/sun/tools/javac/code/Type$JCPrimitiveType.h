#ifndef _com_sun_tools_javac_code_Type$JCPrimitiveType_h_
#define _com_sun_tools_javac_code_Type$JCPrimitiveType_h_
//$ class com.sun.tools.javac.code.Type$JCPrimitiveType
//$ extends com.sun.tools.javac.code.Type
//$ implements javax.lang.model.type.PrimitiveType

#include <com/sun/tools/javac/code/Type.h>
#include <javax/lang/model/type/PrimitiveType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
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

class $export Type$JCPrimitiveType : public ::com::sun::tools::javac::code::Type, public ::javax::lang::model::type::PrimitiveType {
	$class(Type$JCPrimitiveType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type, ::javax::lang::model::type::PrimitiveType)
public:
	Type$JCPrimitiveType();
	using ::com::sun::tools::javac::code::Type::accept;
	virtual $Object* clone() override;
	virtual bool equals(Object$* t) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationType) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationType) override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::code::TypeTag* tag, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym);
	void init$(::com::sun::tools::javac::code::TypeTag* tag, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual $Object* accept(::javax::lang::model::type::TypeVisitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::code::Type$JCPrimitiveType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual ::com::sun::tools::javac::code::Type* constType(Object$* constValue) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::javax::lang::model::type::TypeKind* getKind() override;
	virtual ::com::sun::tools::javac::code::TypeTag* getTag() override;
	virtual bool isFalse() override;
	virtual bool isIntegral() override;
	virtual bool isNumeric() override;
	virtual bool isPrimitive() override;
	virtual bool isPrimitiveOrVoid() override;
	virtual bool isTrue() override;
	virtual $String* stringValue() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::code::TypeTag* tag = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$JCPrimitiveType_h_