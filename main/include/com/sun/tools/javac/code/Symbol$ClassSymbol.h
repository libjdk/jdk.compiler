#ifndef _com_sun_tools_javac_code_Symbol$ClassSymbol_h_
#define _com_sun_tools_javac_code_Symbol$ClassSymbol_h_
//$ class com.sun.tools.javac.code.Symbol$ClassSymbol
//$ extends com.sun.tools.javac.code.Symbol$TypeSymbol
//$ implements javax.lang.model.element.TypeElement

#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <java/lang/Array.h>
#include <javax/lang/model/element/TypeElement.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Compound;
					class Scope$WriteableScope;
					class Symbol;
					class Symbol$RecordComponent;
					class Symbol$VarSymbol;
					class Symbol$Visitor;
					class Type;
					class Types;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Annotate$AnnotationTypeMetadata;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCVariableDecl;
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
					class Name;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace annotation {
			class Annotation;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ElementKind;
				class ElementVisitor;
				class NestingKind;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Symbol$ClassSymbol : public ::com::sun::tools::javac::code::Symbol$TypeSymbol {
	$class(Symbol$ClassSymbol, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Symbol$TypeSymbol, ::javax::lang::model::element::TypeElement)
public:
	Symbol$ClassSymbol();
	using ::com::sun::tools::javac::code::Symbol$TypeSymbol::clone;
	virtual ::javax::lang::model::type::TypeMirror* asType() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annoType) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annoType) override;
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override;
	virtual ::javax::lang::model::element::Name* getSimpleName() override;
	virtual int32_t hashCode() override;
	void init$(int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* owner);
	void init$(int64_t flags, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol* owner);
	virtual $Object* accept(::javax::lang::model::element::ElementVisitor* v, Object$* p) override;
	virtual $Object* accept(::com::sun::tools::javac::code::Symbol$Visitor* v, Object$* p) override;
	virtual $String* className();
	virtual void clearAnnotationMetadata();
	virtual void complete() override;
	virtual ::com::sun::tools::javac::code::Type* erasure(::com::sun::tools::javac::code::Types* types) override;
	virtual int64_t flags() override;
	virtual ::com::sun::tools::javac::util::Name* flatName() override;
	virtual ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata* getAnnotationTypeMetadata() override;
	virtual ::com::sun::tools::javac::code::Attribute$Compound* getAttribute($Class* annoType) override;
	virtual ::java::util::List* getEnclosedElements() override;
	virtual $Array<::java::lang::annotation::Annotation>* getInheritedAnnotations($Class* annoType) override;
	virtual ::com::sun::tools::javac::util::List* getInterfaces();
	virtual ::javax::lang::model::element::ElementKind* getKind() override;
	virtual ::java::util::Set* getModifiers() override;
	virtual ::javax::lang::model::element::NestingKind* getNestingKind();
	virtual ::com::sun::tools::javac::util::List* getPermittedSubclasses();
	virtual ::com::sun::tools::javac::util::Name* getQualifiedName() override;
	virtual ::com::sun::tools::javac::util::List* getRawAttributes() override;
	virtual ::com::sun::tools::javac::util::List* getRawTypeAttributes() override;
	virtual ::com::sun::tools::javac::code::Symbol$RecordComponent* getRecordComponent(::com::sun::tools::javac::code::Symbol$VarSymbol* field);
	virtual ::com::sun::tools::javac::code::Symbol$RecordComponent* getRecordComponent(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* var, bool addIfMissing, ::com::sun::tools::javac::util::List* annotations);
	virtual ::com::sun::tools::javac::util::List* getRecordComponents();
	::com::sun::tools::javac::code::Symbol$ClassSymbol* getSuperClassToSearchForAnnotations();
	virtual ::com::sun::tools::javac::code::Type* getSuperclass();
	virtual ::com::sun::tools::javac::util::List* getTypeParameters() override;
	virtual bool isAnnotationType() override;
	virtual bool isRecord();
	virtual bool isSubClass(::com::sun::tools::javac::code::Symbol* base, ::com::sun::tools::javac::code::Types* types) override;
	static ::com::sun::tools::javac::code::Type* lambda$getPermittedSubclasses$0(::com::sun::tools::javac::code::Symbol* s);
	virtual void markAbstractIfNeeded(::com::sun::tools::javac::code::Types* types);
	virtual ::com::sun::tools::javac::code::Scope$WriteableScope* members() override;
	virtual void reset();
	virtual void setAnnotationTypeMetadata(::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata* a);
	virtual void setRecordComponents(::com::sun::tools::javac::util::List* recordComponents);
	virtual $String* toString() override;
	class $import MemberClass0$ : public ::javax::lang::model::element::TypeElement {
	public:
		MemberClass0$();
		virtual ::javax::lang::model::type::TypeMirror* asType() override;
		virtual ::java::util::List* getEnclosedElements() override;
		virtual ::javax::lang::model::element::NestingKind* getNestingKind() override;
		virtual ::javax::lang::model::element::Name* getQualifiedName() override;
		virtual ::javax::lang::model::element::Name* getSimpleName() override;
		virtual ::javax::lang::model::type::TypeMirror* getSuperclass() override;
		virtual ::java::util::List* getInterfaces() override;
		virtual ::java::util::List* getTypeParameters() override;
		virtual ::java::util::List* getRecordComponents() override;
		virtual ::java::util::List* getPermittedSubclasses() override;
		virtual ::javax::lang::model::element::Element* getEnclosingElement() override;
		virtual ::javax::lang::model::element::ElementKind* getKind() override;
		virtual ::java::util::Set* getModifiers() override;
		virtual bool equals(Object$* arg0) override;
		virtual int32_t hashCode() override;
		virtual ::java::util::List* getAnnotationMirrors() override;
		virtual ::java::lang::annotation::Annotation* getAnnotation($Class* arg0) override;
		virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* arg0) override;
		virtual $Object* accept(::javax::lang::model::element::ElementVisitor* arg0, Object$* arg1) override;
		virtual $Object* clone() override;
		virtual $String* toString() override;
		virtual void finalize() override;
	};
	MemberClass0$ memberClass0$;
	::javax::lang::model::element::TypeElement* as$(::javax::lang::model::element::TypeElement**) {
		return &memberClass0$;
	}
	::com::sun::tools::javac::code::Scope$WriteableScope* members_field = nullptr;
	::com::sun::tools::javac::util::Name* fullname = nullptr;
	::com::sun::tools::javac::util::Name* flatname = nullptr;
	::javax::tools::JavaFileObject* sourcefile = nullptr;
	::javax::tools::JavaFileObject* classfile = nullptr;
	::com::sun::tools::javac::util::List* trans_local = nullptr;
	::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata* annotationTypeMetadata = nullptr;
	::com::sun::tools::javac::util::List* recordComponents = nullptr;
	::com::sun::tools::javac::util::List* permitted = nullptr;
	bool isPermittedExplicit = false;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Symbol$ClassSymbol_h_