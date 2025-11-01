#ifndef _com_sun_tools_javac_code_Type$WildcardType_h_
#define _com_sun_tools_javac_code_Type$WildcardType_h_
//$ class com.sun.tools.javac.code.Type$WildcardType
//$ extends com.sun.tools.javac.code.Type
//$ implements javax.lang.model.type.WildcardType

#include <com/sun/tools/javac/code/Type.h>
#include <javax/lang/model/type/WildcardType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class BoundKind;
					class Symbol$TypeSymbol;
					class Type$TypeVar;
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
				class TypeMirror;
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

class $import Type$WildcardType : public ::com::sun::tools::javac::code::Type, public ::javax::lang::model::type::WildcardType {
	$class(Type$WildcardType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type, ::javax::lang::model::type::WildcardType)
public:
	Type$WildcardType();
	virtual $Object* clone() override;
	virtual bool equals(Object$* t) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationType) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationType) override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::BoundKind* kind, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym);
	void init$(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::BoundKind* kind, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	void init$(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::BoundKind* kind, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::Type$TypeVar* bound);
	void init$(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::BoundKind* kind, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::Type$TypeVar* bound, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual $Object* accept(::com::sun::tools::javac::code::Type$Visitor* v, Object$* s) override;
	virtual $Object* accept(::javax::lang::model::type::TypeVisitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::code::Type$WildcardType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual bool contains(::com::sun::tools::javac::code::Type* t) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::javax::lang::model::type::TypeMirror* getExtendsBound() override;
	virtual ::javax::lang::model::type::TypeKind* getKind() override;
	virtual ::javax::lang::model::type::TypeMirror* getSuperBound() override;
	virtual ::com::sun::tools::javac::code::TypeTag* getTag() override;
	virtual bool isExtendsBound() override;
	virtual bool isNullOrReference() override;
	virtual bool isReference() override;
	virtual bool isSuperBound() override;
	virtual bool isUnbound() override;
	virtual $String* toString() override;
	virtual ::com::sun::tools::javac::code::Type* withTypeVar(::com::sun::tools::javac::code::Type* t) override;
	::com::sun::tools::javac::code::Type* type = nullptr;
	::com::sun::tools::javac::code::BoundKind* kind = nullptr;
	::com::sun::tools::javac::code::Type$TypeVar* bound = nullptr;
	bool isPrintingBound = false;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$WildcardType_h_