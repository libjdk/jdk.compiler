#ifndef _com_sun_tools_javac_tree_DCTree$DCErroneous_h_
#define _com_sun_tools_javac_tree_DCTree$DCErroneous_h_
//$ class com.sun.tools.javac.tree.DCTree$DCErroneous
//$ extends com.sun.tools.javac.tree.DCTree
//$ implements com.sun.source.doctree.ErroneousTree,com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition

#include <com/sun/source/doctree/ErroneousTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocTree$Kind;
				class DocTreeVisitor;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class EndPosTable;
					class JCTree;
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
					class DiagnosticSource;
					class JCDiagnostic;
					class JCDiagnostic$Factory;
				}
			}
		}
	}
}
namespace javax {
	namespace tools {
		class Diagnostic;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import DCTree$DCErroneous : public ::com::sun::tools::javac::tree::DCTree, public ::com::sun::source::doctree::ErroneousTree, public ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition {
	$class(DCTree$DCErroneous, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree, ::com::sun::source::doctree::ErroneousTree, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition)
public:
	DCTree$DCErroneous();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* body, ::com::sun::tools::javac::util::JCDiagnostic$Factory* diags, ::com::sun::tools::javac::util::DiagnosticSource* diagSource, $String* code, $ObjectArray* args);
	void init$($String* body, ::com::sun::tools::javac::util::JCDiagnostic* diag);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual $String* getBody() override;
	virtual ::javax::tools::Diagnostic* getDiagnostic() override;
	virtual int32_t getEndPosition(::com::sun::tools::javac::tree::EndPosTable* endPosTable) override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual int32_t getPreferredPosition() override;
	virtual int32_t getStartPosition() override;
	virtual ::com::sun::tools::javac::tree::JCTree* getTree() override;
	virtual $String* toString() override;
	$String* body = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic* diag = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCErroneous_h_