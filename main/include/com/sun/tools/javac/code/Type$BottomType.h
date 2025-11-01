#ifndef _com_sun_tools_javac_code_Type$BottomType_h_
#define _com_sun_tools_javac_code_Type$BottomType_h_
//$ class com.sun.tools.javac.code.Type$BottomType
//$ extends com.sun.tools.javac.code.Type
//$ implements javax.lang.model.type.NullType

#include <com/sun/tools/javac/code/Type.h>
#include <javax/lang/model/type/NullType.h>

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

class $import Type$BottomType : public ::com::sun::tools::javac::code::Type, public ::javax::lang::model::type::NullType {
	$class(Type$BottomType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type, ::javax::lang::model::type::NullType)
public:
	Type$BottomType();
	using ::com::sun::tools::javac::code::Type::accept;
	virtual $Object* clone() override;
	virtual bool equals(Object$* t) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationType) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationType) override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Object* accept(::javax::lang::model::type::TypeVisitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::code::Type$BottomType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual ::com::sun::tools::javac::code::Type* constType(Object$* value) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::javax::lang::model::type::TypeKind* getKind() override;
	virtual ::com::sun::tools::javac::code::TypeTag* getTag() override;
	virtual bool isCompound() override;
	virtual bool isNullOrReference() override;
	virtual $String* stringValue() override;
	virtual $String* toString() override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$BottomType_h_