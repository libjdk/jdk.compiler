#ifndef _com_sun_tools_javac_comp_Env_h_
#define _com_sun_tools_javac_comp_Env_h_
//$ class com.sun.tools.javac.comp.Env
//$ extends java.lang.Iterable

#include <java/lang/Iterable.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree;
					class JCTree$JCClassDecl;
					class JCTree$JCCompilationUnit;
					class JCTree$JCMethodDecl;
					class JCTree$Tag;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Env : public ::java::lang::Iterable {
	$class(Env, $NO_CLASS_INIT, ::java::lang::Iterable)
public:
	Env();
	void init$(::com::sun::tools::javac::tree::JCTree* tree, Object$* info);
	virtual ::com::sun::tools::javac::comp::Env* dup(::com::sun::tools::javac::tree::JCTree* tree, Object$* info);
	virtual ::com::sun::tools::javac::comp::Env* dup(::com::sun::tools::javac::tree::JCTree* tree);
	virtual ::com::sun::tools::javac::comp::Env* dupto(::com::sun::tools::javac::comp::Env* that);
	virtual ::com::sun::tools::javac::comp::Env* enclosing(::com::sun::tools::javac::tree::JCTree$Tag* tag);
	virtual ::java::util::Iterator* iterator() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Env* next = nullptr;
	::com::sun::tools::javac::comp::Env* outer = nullptr;
	::com::sun::tools::javac::tree::JCTree* tree = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCCompilationUnit* toplevel = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCClassDecl* enclClass = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCMethodDecl* enclMethod = nullptr;
	$Object* info = nullptr;
	bool baseClause = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Env_h_