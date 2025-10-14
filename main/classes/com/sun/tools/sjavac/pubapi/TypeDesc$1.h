#ifndef _com_sun_tools_sjavac_pubapi_TypeDesc$1_h_
#define _com_sun_tools_sjavac_pubapi_TypeDesc$1_h_
//$ class com.sun.tools.sjavac.pubapi.TypeDesc$1
//$ extends javax.lang.model.util.SimpleTypeVisitor14

#include <javax/lang/model/util/SimpleTypeVisitor14.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {
					class TypeDesc;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class ArrayType;
				class DeclaredType;
				class ErrorType;
				class NoType;
				class PrimitiveType;
				class TypeVariable;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

class TypeDesc$1 : public ::javax::lang::model::util::SimpleTypeVisitor14 {
	$class(TypeDesc$1, $NO_CLASS_INIT, ::javax::lang::model::util::SimpleTypeVisitor14)
public:
	TypeDesc$1();
	void init$();
	virtual ::com::sun::tools::sjavac::pubapi::TypeDesc* visitArray(::javax::lang::model::type::ArrayType* t, ::java::lang::Void* p);
	virtual $Object* visitArray(::javax::lang::model::type::ArrayType* t, Object$* p) override;
	virtual ::com::sun::tools::sjavac::pubapi::TypeDesc* visitDeclared(::javax::lang::model::type::DeclaredType* t, ::java::lang::Void* p);
	virtual $Object* visitDeclared(::javax::lang::model::type::DeclaredType* t, Object$* p) override;
	virtual ::com::sun::tools::sjavac::pubapi::TypeDesc* visitError(::javax::lang::model::type::ErrorType* t, ::java::lang::Void* p);
	virtual $Object* visitError(::javax::lang::model::type::ErrorType* t, Object$* p) override;
	virtual ::com::sun::tools::sjavac::pubapi::TypeDesc* visitNoType(::javax::lang::model::type::NoType* t, ::java::lang::Void* p);
	virtual $Object* visitNoType(::javax::lang::model::type::NoType* t, Object$* p) override;
	virtual ::com::sun::tools::sjavac::pubapi::TypeDesc* visitPrimitive(::javax::lang::model::type::PrimitiveType* t, ::java::lang::Void* p);
	virtual $Object* visitPrimitive(::javax::lang::model::type::PrimitiveType* t, Object$* p) override;
	virtual ::com::sun::tools::sjavac::pubapi::TypeDesc* visitTypeVariable(::javax::lang::model::type::TypeVariable* t, ::java::lang::Void* p);
	virtual $Object* visitTypeVariable(::javax::lang::model::type::TypeVariable* t, Object$* p) override;
};

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_pubapi_TypeDesc$1_h_