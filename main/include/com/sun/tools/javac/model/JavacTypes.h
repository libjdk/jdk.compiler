#ifndef _com_sun_tools_javac_model_JavacTypes_h_
#define _com_sun_tools_javac_model_JavacTypes_h_
//$ class com.sun.tools.javac.model.JavacTypes
//$ extends javax.lang.model.util.Types

#include <java/lang/Array.h>
#include <javax/lang/model/util/Types.h>

#pragma push_macro("EXEC_OR_PKG_OR_MOD")
#undef EXEC_OR_PKG_OR_MOD

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ClassSymbol;
					class Symtab;
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
				namespace util {
					class Context;
				}
			}
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
				class Element;
				class TypeElement;
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class ArrayType;
				class DeclaredType;
				class ExecutableType;
				class NoType;
				class NullType;
				class PrimitiveType;
				class TypeKind;
				class TypeMirror;
				class WildcardType;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

class $import JavacTypes : public ::javax::lang::model::util::Types {
	$class(JavacTypes, 0, ::javax::lang::model::util::Types)
public:
	JavacTypes();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::javax::lang::model::element::Element* asElement(::javax::lang::model::type::TypeMirror* t) override;
	virtual ::javax::lang::model::type::TypeMirror* asMemberOf(::javax::lang::model::type::DeclaredType* containing, ::javax::lang::model::element::Element* element) override;
	virtual ::javax::lang::model::element::TypeElement* boxedClass(::javax::lang::model::type::PrimitiveType* p) override;
	virtual ::javax::lang::model::type::TypeMirror* capture(::javax::lang::model::type::TypeMirror* t) override;
	static $Object* cast($Class* clazz, Object$* o);
	virtual bool contains(::javax::lang::model::type::TypeMirror* t1, ::javax::lang::model::type::TypeMirror* t2) override;
	virtual ::java::util::List* directSupertypes(::javax::lang::model::type::TypeMirror* t) override;
	virtual ::javax::lang::model::type::TypeMirror* erasure(::javax::lang::model::type::TypeMirror* t) override;
	virtual ::javax::lang::model::type::ArrayType* getArrayType(::javax::lang::model::type::TypeMirror* componentType) override;
	virtual ::javax::lang::model::type::DeclaredType* getDeclaredType(::javax::lang::model::element::TypeElement* typeElem, $Array<::javax::lang::model::type::TypeMirror>* typeArgs) override;
	virtual ::javax::lang::model::type::DeclaredType* getDeclaredType(::javax::lang::model::type::DeclaredType* enclosing, ::javax::lang::model::element::TypeElement* typeElem, $Array<::javax::lang::model::type::TypeMirror>* typeArgs) override;
	::javax::lang::model::type::DeclaredType* getDeclaredType0(::com::sun::tools::javac::code::Type* outer, ::com::sun::tools::javac::code::Symbol$ClassSymbol* sym, $Array<::javax::lang::model::type::TypeMirror>* typeArgs);
	virtual ::javax::lang::model::type::NoType* getNoType(::javax::lang::model::type::TypeKind* kind) override;
	virtual ::javax::lang::model::type::NullType* getNullType() override;
	virtual ::java::util::Set* getOverriddenMethods(::javax::lang::model::element::Element* elem);
	virtual ::javax::lang::model::type::PrimitiveType* getPrimitiveType(::javax::lang::model::type::TypeKind* kind) override;
	virtual ::javax::lang::model::type::WildcardType* getWildcardType(::javax::lang::model::type::TypeMirror* extendsBound, ::javax::lang::model::type::TypeMirror* superBound) override;
	static ::com::sun::tools::javac::model::JavacTypes* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isAssignable(::javax::lang::model::type::TypeMirror* t1, ::javax::lang::model::type::TypeMirror* t2) override;
	virtual bool isSameType(::javax::lang::model::type::TypeMirror* t1, ::javax::lang::model::type::TypeMirror* t2) override;
	virtual bool isSubsignature(::javax::lang::model::type::ExecutableType* m1, ::javax::lang::model::type::ExecutableType* m2) override;
	virtual bool isSubtype(::javax::lang::model::type::TypeMirror* t1, ::javax::lang::model::type::TypeMirror* t2) override;
	virtual ::javax::lang::model::type::PrimitiveType* unboxedType(::javax::lang::model::type::TypeMirror* t) override;
	void validateTypeNotIn(::javax::lang::model::type::TypeMirror* t, ::java::util::Set* invalidKinds);
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	static ::java::util::Set* EXEC_OR_PKG_OR_MOD;
};

				} // model
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EXEC_OR_PKG_OR_MOD")

#endif // _com_sun_tools_javac_model_JavacTypes_h_