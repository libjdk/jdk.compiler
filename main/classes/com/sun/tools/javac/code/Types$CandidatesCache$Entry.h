#ifndef _com_sun_tools_javac_code_Types$CandidatesCache$Entry_h_
#define _com_sun_tools_javac_code_Types$CandidatesCache$Entry_h_
//$ class com.sun.tools.javac.code.Types$CandidatesCache$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$MethodSymbol;
					class Type;
					class Types$CandidatesCache;
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

class $export Types$CandidatesCache$Entry : public ::java::lang::Object {
	$class(Types$CandidatesCache$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Types$CandidatesCache$Entry();
	void init$(::com::sun::tools::javac::code::Types$CandidatesCache* this$1, ::com::sun::tools::javac::code::Type* site, ::com::sun::tools::javac::code::Symbol$MethodSymbol* msym);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	::com::sun::tools::javac::code::Types$CandidatesCache* this$1 = nullptr;
	::com::sun::tools::javac::code::Type* site = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* msym = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$CandidatesCache$Entry_h_