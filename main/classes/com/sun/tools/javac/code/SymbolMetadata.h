#ifndef _com_sun_tools_javac_code_SymbolMetadata_h_
#define _com_sun_tools_javac_code_SymbolMetadata_h_
//$ class com.sun.tools.javac.code.SymbolMetadata
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DECL_IN_PROGRESS")
#undef DECL_IN_PROGRESS
#pragma push_macro("DECL_NOT_STARTED")
#undef DECL_NOT_STARTED

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Compound;
					class Symbol;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export SymbolMetadata : public ::java::lang::Object {
	$class(SymbolMetadata, 0, ::java::lang::Object)
public:
	SymbolMetadata();
	void init$(::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::code::SymbolMetadata* append(::com::sun::tools::javac::util::List* l);
	virtual ::com::sun::tools::javac::code::SymbolMetadata* appendClassInitTypeAttributes(::com::sun::tools::javac::util::List* l);
	virtual ::com::sun::tools::javac::code::SymbolMetadata* appendInitTypeAttributes(::com::sun::tools::javac::util::List* l);
	virtual ::com::sun::tools::javac::code::SymbolMetadata* appendUniqueTypes(::com::sun::tools::javac::util::List* l);
	::com::sun::tools::javac::util::List* filterDeclSentinels(::com::sun::tools::javac::util::List* a);
	virtual ::com::sun::tools::javac::util::List* getClassInitTypeAttributes();
	virtual ::com::sun::tools::javac::util::List* getDeclarationAttributes();
	virtual ::com::sun::tools::javac::util::List* getInitTypeAttributes();
	virtual ::com::sun::tools::javac::util::List* getTypeAttributes();
	virtual bool isEmpty();
	bool isStarted();
	virtual bool isTypesEmpty();
	virtual bool pendingCompletion();
	virtual ::com::sun::tools::javac::code::SymbolMetadata* prepend(::com::sun::tools::javac::util::List* l);
	virtual void removeDeclarationMetadata(::com::sun::tools::javac::code::Attribute$Compound* compound);
	::com::sun::tools::javac::util::List* removeFromCompoundList(::com::sun::tools::javac::util::List* l, ::com::sun::tools::javac::code::Attribute$Compound* compound);
	virtual ::com::sun::tools::javac::code::SymbolMetadata* reset();
	virtual void setAttributes(::com::sun::tools::javac::code::SymbolMetadata* other);
	virtual void setClassInitTypeAttributes(::com::sun::tools::javac::util::List* a);
	virtual void setDeclarationAttributes(::com::sun::tools::javac::util::List* a);
	virtual void setInitTypeAttributes(::com::sun::tools::javac::util::List* a);
	virtual void setTypeAttributes(::com::sun::tools::javac::util::List* a);
	static ::com::sun::tools::javac::util::List* DECL_NOT_STARTED;
	static ::com::sun::tools::javac::util::List* DECL_IN_PROGRESS;
	::com::sun::tools::javac::util::List* attributes = nullptr;
	::com::sun::tools::javac::util::List* type_attributes = nullptr;
	::com::sun::tools::javac::util::List* init_type_attributes = nullptr;
	::com::sun::tools::javac::util::List* clinit_type_attributes = nullptr;
	::com::sun::tools::javac::code::Symbol* sym = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DECL_IN_PROGRESS")
#pragma pop_macro("DECL_NOT_STARTED")

#endif // _com_sun_tools_javac_code_SymbolMetadata_h_