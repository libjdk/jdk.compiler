#ifndef _com_sun_tools_javac_comp_Check$CycleChecker_h_
#define _com_sun_tools_javac_comp_Check$CycleChecker_h_
//$ class com.sun.tools.javac.comp.Check$CycleChecker
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
				namespace comp {
					class Check;
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
					class JCTree$JCArrayTypeTree;
					class JCTree$JCClassDecl;
					class JCTree$JCFieldAccess;
					class JCTree$JCIdent;
					class JCTree$JCTypeApply;
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
					class JCDiagnostic$DiagnosticPosition;
					class List;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Check$CycleChecker : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Check$CycleChecker, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Check$CycleChecker();
	void init$(::com::sun::tools::javac::comp::Check* this$0);
	virtual void checkClass(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* c, ::com::sun::tools::javac::util::List* supertypes);
	void checkSymbol(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol* sym);
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* tree) override;
	virtual void visitTypeApply(::com::sun::tools::javac::tree::JCTree$JCTypeApply* tree) override;
	virtual void visitTypeArray(::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree* tree) override;
	::com::sun::tools::javac::comp::Check* this$0 = nullptr;
	::java::util::Set* seenClasses = nullptr;
	bool errorFound = false;
	bool partialCheck = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Check$CycleChecker_h_