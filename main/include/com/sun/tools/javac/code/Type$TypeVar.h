#ifndef _com_sun_tools_javac_code_Type$TypeVar_h_
#define _com_sun_tools_javac_code_Type$TypeVar_h_
//$ class com.sun.tools.javac.code.Type$TypeVar
//$ extends com.sun.tools.javac.code.Type
//$ implements javax.lang.model.type.TypeVariable

#include <com/sun/tools/javac/code/Type.h>
#include <javax/lang/model/type/TypeVariable.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$TypeSymbol;
					class Type$Visitor;
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
					class Name;
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

class $import Type$TypeVar : public ::com::sun::tools::javac::code::Type {
	$class(Type$TypeVar, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type, ::javax::lang::model::type::TypeVariable)
public:
	Type$TypeVar();
	virtual $Object* clone() override;
	virtual bool equals(Object$* t) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationType) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationType) override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol* owner, ::com::sun::tools::javac::code::Type* lower);
	void init$(::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::Type* bound, ::com::sun::tools::javac::code::Type* lower);
	void init$(::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::Type* bound, ::com::sun::tools::javac::code::Type* lower, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual $Object* accept(::com::sun::tools::javac::code::Type$Visitor* v, Object$* s) override;
	virtual $Object* accept(::javax::lang::model::type::TypeVisitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::code::Symbol$TypeSymbol* asElement() override;
	virtual ::com::sun::tools::javac::code::Type$TypeVar* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::javax::lang::model::type::TypeKind* getKind() override;
	virtual ::com::sun::tools::javac::code::Type* getLowerBound() override;
	virtual ::com::sun::tools::javac::code::TypeTag* getTag() override;
	virtual ::com::sun::tools::javac::code::Type* getUpperBound() override;
	virtual bool isCaptured();
	virtual bool isNullOrReference() override;
	virtual bool isReference() override;
	virtual void setUpperBound(::com::sun::tools::javac::code::Type* bound);
	virtual $String* toString() override;
	class $import MemberClass0$ : public ::javax::lang::model::type::TypeVariable {
	public:
		MemberClass0$();
		virtual ::javax::lang::model::element::Element* asElement() override;
		virtual ::javax::lang::model::type::TypeMirror* getUpperBound() override;
		virtual ::javax::lang::model::type::TypeMirror* getLowerBound() override;
		virtual ::javax::lang::model::type::TypeKind* getKind() override;
		virtual bool equals(Object$* arg0) override;
		virtual int32_t hashCode() override;
		virtual $String* toString() override;
		virtual ::java::util::List* getAnnotationMirrors() override;
		virtual ::java::lang::annotation::Annotation* getAnnotation($Class* arg0) override;
		virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* arg0) override;
		virtual $Object* accept(::javax::lang::model::type::TypeVisitor* arg0, Object$* arg1) override;
		virtual $Object* clone() override;
		virtual void finalize() override;
	};
	MemberClass0$ memberClass0$;
	::javax::lang::model::type::TypeVariable* as$(::javax::lang::model::type::TypeVariable**) {
		return &memberClass0$;
	}
	::com::sun::tools::javac::code::Type* _bound = nullptr;
	::com::sun::tools::javac::code::Type* lower = nullptr;
	int32_t rank_field = 0;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$TypeVar_h_