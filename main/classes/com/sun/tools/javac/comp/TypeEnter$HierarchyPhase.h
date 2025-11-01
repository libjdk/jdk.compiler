#ifndef _com_sun_tools_javac_comp_TypeEnter$HierarchyPhase_h_
#define _com_sun_tools_javac_comp_TypeEnter$HierarchyPhase_h_
//$ class com.sun.tools.javac.comp.TypeEnter$HierarchyPhase
//$ extends com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase
//$ implements com.sun.tools.javac.code.Symbol$Completer

#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/comp/TypeEnter$AbstractHeaderPhase.h>

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
					class Env;
					class TypeEnter;
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
					class JCTree$JCExpression;
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
				namespace comp {

class TypeEnter$HierarchyPhase : public ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase, public ::com::sun::tools::javac::code::Symbol$Completer {
	$class(TypeEnter$HierarchyPhase, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase, ::com::sun::tools::javac::code::Symbol$Completer)
public:
	TypeEnter$HierarchyPhase();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::comp::TypeEnter* this$0);
	virtual ::com::sun::tools::javac::tree::JCTree$JCExpression* clearTypeParams(::com::sun::tools::javac::tree::JCTree$JCExpression* superType) override;
	virtual void complete(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual void doCompleteEnvs(::com::sun::tools::javac::util::List* envs) override;
	virtual void runPhase(::com::sun::tools::javac::comp::Env* env) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::TypeEnter* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter$HierarchyPhase_h_