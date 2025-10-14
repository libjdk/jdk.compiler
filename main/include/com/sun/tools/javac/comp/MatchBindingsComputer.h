#ifndef _com_sun_tools_javac_comp_MatchBindingsComputer_h_
#define _com_sun_tools_javac_comp_MatchBindingsComputer_h_
//$ class com.sun.tools.javac.comp.MatchBindingsComputer
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTY")
#undef EMPTY

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class MatchBindingsComputer$MatchBindings;
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
					class JCTree;
					class JCTree$JCGuardPattern;
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
					class JCDiagnostic$DiagnosticPosition;
					class List;
					class Log;
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

class $import MatchBindingsComputer : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(MatchBindingsComputer, 0, ::com::sun::tools::javac::tree::TreeScanner)
public:
	MatchBindingsComputer();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* andOperation(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* lhsBindings, ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* rhsBindings);
	virtual ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* binary(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* lhsBindings, ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* rhsBindings);
	virtual ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* conditional(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* condBindings, ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* trueBindings, ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* falseBindings);
	virtual ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* finishBindings(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* matchBindings);
	virtual ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* guardedPattern(::com::sun::tools::javac::tree::JCTree$JCGuardPattern* tree, ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* patternBindings, ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* guardBindings);
	static ::com::sun::tools::javac::comp::MatchBindingsComputer* instance(::com::sun::tools::javac::util::Context* context);
	::com::sun::tools::javac::util::List* intersection(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::List* lhsBindings, ::com::sun::tools::javac::util::List* rhsBindings);
	virtual ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* switchCase(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* prevBindings, ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* currentBindings);
	virtual ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* unary(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* bindings);
	::com::sun::tools::javac::util::List* union$(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::List* lhsBindings, $Array<::com::sun::tools::javac::util::List>* rhsBindings_s);
	static ::com::sun::tools::javac::comp::MatchBindingsComputer$MatchBindings* EMPTY;
	static ::com::sun::tools::javac::util::Context$Key* matchBindingsComputerKey;
	::com::sun::tools::javac::util::Log* log = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EMPTY")

#endif // _com_sun_tools_javac_comp_MatchBindingsComputer_h_