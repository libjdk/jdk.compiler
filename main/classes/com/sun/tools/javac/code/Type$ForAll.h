#ifndef _com_sun_tools_javac_code_Type$ForAll_h_
#define _com_sun_tools_javac_code_Type$ForAll_h_
//$ class com.sun.tools.javac.code.Type$ForAll
//$ extends com.sun.tools.javac.code.Type$DelegatedType
//$ implements javax.lang.model.type.ExecutableType

#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <javax/lang/model/type/ExecutableType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$MethodType;
					class Type$Visitor;
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

class $export Type$ForAll : public ::com::sun::tools::javac::code::Type$DelegatedType {
	$class(Type$ForAll, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$DelegatedType, ::javax::lang::model::type::ExecutableType)
public:
	Type$ForAll();
	virtual $Object* clone() override;
	virtual bool equals(Object$* t) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationType) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationType) override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::List* tvars, ::com::sun::tools::javac::code::Type* qtype);
	virtual $Object* accept(::com::sun::tools::javac::code::Type$Visitor* v, Object$* s) override;
	virtual $Object* accept(::javax::lang::model::type::TypeVisitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::code::Type$MethodType* asMethodType() override;
	virtual ::com::sun::tools::javac::code::Type$ForAll* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual void complete() override;
	virtual bool contains(::com::sun::tools::javac::code::Type* elem) override;
	virtual ::javax::lang::model::type::TypeKind* getKind() override;
	virtual ::com::sun::tools::javac::util::List* getParameterTypes() override;
	virtual ::com::sun::tools::javac::code::Type* getReceiverType() override;
	virtual ::com::sun::tools::javac::code::Type* getReturnType() override;
	virtual ::com::sun::tools::javac::util::List* getThrownTypes() override;
	virtual ::com::sun::tools::javac::util::List* getTypeArguments() override;
	virtual ::com::sun::tools::javac::util::List* getTypeVariables();
	virtual bool isErroneous() override;
	virtual $String* toString() override;
	class $export MemberClass0$ : public ::javax::lang::model::type::ExecutableType {
	public:
		MemberClass0$();
		virtual ::java::util::List* getTypeVariables() override;
		virtual ::javax::lang::model::type::TypeMirror* getReturnType() override;
		virtual ::java::util::List* getParameterTypes() override;
		virtual ::javax::lang::model::type::TypeMirror* getReceiverType() override;
		virtual ::java::util::List* getThrownTypes() override;
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
	::javax::lang::model::type::ExecutableType* as$(::javax::lang::model::type::ExecutableType**) {
		return &memberClass0$;
	}
	::com::sun::tools::javac::util::List* tvars = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$ForAll_h_