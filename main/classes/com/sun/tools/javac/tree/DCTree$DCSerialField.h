#ifndef _com_sun_tools_javac_tree_DCTree$DCSerialField_h_
#define _com_sun_tools_javac_tree_DCTree$DCSerialField_h_
//$ class com.sun.tools.javac.tree.DCTree$DCSerialField
//$ extends com.sun.tools.javac.tree.DCTree$DCBlockTag
//$ implements com.sun.source.doctree.SerialFieldTree

#include <com/sun/source/doctree/SerialFieldTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocTree$Kind;
				class DocTreeVisitor;
				class IdentifierTree;
				class ReferenceTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class DCTree$DCIdentifier;
					class DCTree$DCReference;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $export DCTree$DCSerialField : public ::com::sun::tools::javac::tree::DCTree$DCBlockTag, public ::com::sun::source::doctree::SerialFieldTree {
	$class(DCTree$DCSerialField, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCBlockTag, ::com::sun::source::doctree::SerialFieldTree)
public:
	DCTree$DCSerialField();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getTagName() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::DCTree$DCIdentifier* name, ::com::sun::tools::javac::tree::DCTree$DCReference* type, ::java::util::List* description);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getDescription() override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual ::com::sun::source::doctree::IdentifierTree* getName() override;
	virtual ::com::sun::source::doctree::ReferenceTree* getType() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::DCTree$DCIdentifier* name = nullptr;
	::com::sun::tools::javac::tree::DCTree$DCReference* type = nullptr;
	::java::util::List* description = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCSerialField_h_