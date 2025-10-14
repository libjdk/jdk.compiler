#ifndef _com_sun_tools_javac_code_Lint_h_
#define _com_sun_tools_javac_code_Lint_h_
//$ class com.sun.tools.javac.code.Lint
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Compound;
					class Lint$AugmentVisitor;
					class Lint$LintCategory;
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
					class Context;
					class Context$Key;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class EnumSet;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Lint : public ::java::lang::Object {
	$class(Lint, 0, ::java::lang::Object)
public:
	Lint();
	void init$(::com::sun::tools::javac::util::Context* context);
	void init$(::com::sun::tools::javac::code::Lint* other);
	virtual ::com::sun::tools::javac::code::Lint* augment(::com::sun::tools::javac::code::Attribute$Compound* attr);
	virtual ::com::sun::tools::javac::code::Lint* augment(::com::sun::tools::javac::code::Symbol* sym);
	static ::com::sun::tools::javac::code::Lint* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isEnabled(::com::sun::tools::javac::code::Lint$LintCategory* lc);
	virtual bool isSuppressed(::com::sun::tools::javac::code::Lint$LintCategory* lc);
	virtual ::com::sun::tools::javac::code::Lint* suppress($Array<::com::sun::tools::javac::code::Lint$LintCategory>* lc);
	virtual $String* toString() override;
	static ::com::sun::tools::javac::util::Context$Key* lintKey;
	::com::sun::tools::javac::code::Lint$AugmentVisitor* augmentor = nullptr;
	::java::util::EnumSet* values = nullptr;
	::java::util::EnumSet* suppressedValues = nullptr;
	static ::java::util::Map* map;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Lint_h_