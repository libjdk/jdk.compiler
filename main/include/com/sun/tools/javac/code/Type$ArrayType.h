#ifndef _com_sun_tools_javac_code_Type$ArrayType_h_
#define _com_sun_tools_javac_code_Type$ArrayType_h_
//$ class com.sun.tools.javac.code.Type$ArrayType
//$ extends com.sun.tools.javac.code.Type
//$ implements com.sun.tools.javac.jvm.PoolConstant$LoadableConstant,javax.lang.model.type.ArrayType

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <javax/lang/model/type/ArrayType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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

class $import Type$ArrayType : public ::com::sun::tools::javac::code::Type, public ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant, public ::javax::lang::model::type::ArrayType {
	$class(Type$ArrayType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type, ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant, ::javax::lang::model::type::ArrayType)
public:
	Type$ArrayType();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationType) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationType) override;
	void init$(::com::sun::tools::javac::code::Type* elemtype, ::com::sun::tools::javac::code::Symbol$TypeSymbol* arrayClass);
	void init$(::com::sun::tools::javac::code::Type* elemtype, ::com::sun::tools::javac::code::Symbol$TypeSymbol* arrayClass, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	void init$(::com::sun::tools::javac::code::Type$ArrayType* that);
	virtual $Object* accept(::com::sun::tools::javac::code::Type$Visitor* v, Object$* s) override;
	virtual $Object* accept(::javax::lang::model::type::TypeVisitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::util::List* allparams() override;
	virtual ::com::sun::tools::javac::code::Type$ArrayType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual void complete() override;
	virtual bool contains(::com::sun::tools::javac::code::Type* elem) override;
	virtual bool equals(Object$* obj) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::javax::lang::model::type::TypeMirror* getComponentType() override;
	virtual ::javax::lang::model::type::TypeKind* getKind() override;
	virtual ::com::sun::tools::javac::code::TypeTag* getTag() override;
	virtual int32_t hashCode() override;
	virtual bool isErroneous() override;
	virtual bool isNullOrReference() override;
	virtual bool isParameterized() override;
	virtual bool isRaw() override;
	virtual bool isReference() override;
	virtual bool isVarargs();
	virtual ::com::sun::tools::javac::code::Type$ArrayType* makeVarargs();
	virtual $Object* poolKey(::com::sun::tools::javac::code::Types* types) override;
	virtual int32_t poolTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Type* elemtype = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$ArrayType_h_