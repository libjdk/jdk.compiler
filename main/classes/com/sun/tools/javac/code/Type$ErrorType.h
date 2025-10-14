#ifndef _com_sun_tools_javac_code_Type$ErrorType_h_
#define _com_sun_tools_javac_code_Type$ErrorType_h_
//$ class com.sun.tools.javac.code.Type$ErrorType
//$ extends com.sun.tools.javac.code.Type$ClassType

#include <com/sun/tools/javac/code/Type$ClassType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$TypeSymbol;
					class Type;
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
					class Name;
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

class $export Type$ErrorType : public ::com::sun::tools::javac::code::Type$ClassType {
	$class(Type$ErrorType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ClassType)
public:
	Type$ErrorType();
	void init$(::com::sun::tools::javac::code::Symbol$ClassSymbol* c, ::com::sun::tools::javac::code::Type* originalType);
	void init$(::com::sun::tools::javac::code::Type* originalType, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym);
	void init$(::com::sun::tools::javac::code::Type* originalType, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	void init$(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol$TypeSymbol* container, ::com::sun::tools::javac::code::Type* originalType);
	virtual $Object* accept(::com::sun::tools::javac::code::Type$Visitor* v, Object$* s) override;
	virtual $Object* accept(::javax::lang::model::type::TypeVisitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::util::List* allparams() override;
	virtual ::com::sun::tools::javac::code::Type* asSub(::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::code::Type$ErrorType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual ::com::sun::tools::javac::code::Type* constType(Object$* constValue) override;
	virtual ::com::sun::tools::javac::code::Type* getEnclosingType() override;
	virtual ::javax::lang::model::type::TypeKind* getKind() override;
	virtual ::com::sun::tools::javac::code::Type* getOriginalType() override;
	virtual ::com::sun::tools::javac::code::Type* getReturnType() override;
	virtual ::com::sun::tools::javac::code::TypeTag* getTag() override;
	virtual ::com::sun::tools::javac::util::List* getTypeArguments() override;
	virtual bool isCompound() override;
	virtual bool isErroneous() override;
	virtual bool isGenType(::com::sun::tools::javac::code::Type* t);
	virtual bool isInterface() override;
	virtual bool isNullOrReference() override;
	virtual bool isPartial() override;
	virtual bool isReference() override;
	::com::sun::tools::javac::code::Type* originalType = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$ErrorType_h_