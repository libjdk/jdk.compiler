#ifndef _com_sun_tools_javac_code_Type$ClassType_h_
#define _com_sun_tools_javac_code_Type$ClassType_h_
//$ class com.sun.tools.javac.code.Type$ClassType
//$ extends com.sun.tools.javac.code.Type
//$ implements com.sun.tools.javac.jvm.PoolConstant$LoadableConstant,javax.lang.model.type.ErrorType

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <javax/lang/model/type/ErrorType.h>

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

class $export Type$ClassType : public ::com::sun::tools::javac::code::Type, public ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant {
	$class(Type$ClassType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type, ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant, ::javax::lang::model::type::ErrorType)
public:
	Type$ClassType();
	virtual $Object* clone() override;
	virtual bool equals(Object$* t) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationType) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationType) override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::code::Type* outer, ::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym);
	void init$(::com::sun::tools::javac::code::Type* outer, ::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual $Object* accept(::com::sun::tools::javac::code::Type$Visitor* v, Object$* s) override;
	virtual $Object* accept(::javax::lang::model::type::TypeVisitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::util::List* allparams() override;
	virtual ::com::sun::tools::javac::code::Symbol$TypeSymbol* asElement() override;
	$String* className(::com::sun::tools::javac::code::Symbol* sym, bool longform);
	virtual ::com::sun::tools::javac::code::Type$ClassType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual void complete() override;
	virtual ::com::sun::tools::javac::code::Type* constType(Object$* constValue) override;
	virtual bool contains(::com::sun::tools::javac::code::Type* elem) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::com::sun::tools::javac::code::Type* getEnclosingType() override;
	virtual ::javax::lang::model::type::TypeKind* getKind() override;
	virtual ::com::sun::tools::javac::code::TypeTag* getTag() override;
	virtual ::com::sun::tools::javac::util::List* getTypeArguments() override;
	virtual bool hasErasedSupertypes();
	virtual bool isErroneous() override;
	virtual bool isNullOrReference() override;
	virtual bool isParameterized() override;
	virtual bool isRaw() override;
	virtual bool isReference() override;
	virtual $Object* poolKey(::com::sun::tools::javac::code::Types* types) override;
	virtual int32_t poolTag() override;
	virtual void setEnclosingType(::com::sun::tools::javac::code::Type* outer);
	virtual $String* toString() override;
	class $export MemberClass0$ : public ::javax::lang::model::type::ErrorType {
	public:
		MemberClass0$();
		virtual ::javax::lang::model::element::Element* asElement() override;
		virtual ::javax::lang::model::type::TypeMirror* getEnclosingType() override;
		virtual ::java::util::List* getTypeArguments() override;
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
	::javax::lang::model::type::ErrorType* as$(::javax::lang::model::type::ErrorType**) {
		return &memberClass0$;
	}
	::com::sun::tools::javac::code::Type* outer_field = nullptr;
	::com::sun::tools::javac::util::List* typarams_field = nullptr;
	::com::sun::tools::javac::util::List* allparams_field = nullptr;
	::com::sun::tools::javac::code::Type* supertype_field = nullptr;
	::com::sun::tools::javac::util::List* interfaces_field = nullptr;
	::com::sun::tools::javac::util::List* all_interfaces_field = nullptr;
	int32_t rank_field = 0;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$ClassType_h_