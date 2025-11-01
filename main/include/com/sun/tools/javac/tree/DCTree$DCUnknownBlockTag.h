#ifndef _com_sun_tools_javac_tree_DCTree$DCUnknownBlockTag_h_
#define _com_sun_tools_javac_tree_DCTree$DCUnknownBlockTag_h_
//$ class com.sun.tools.javac.tree.DCTree$DCUnknownBlockTag
//$ extends com.sun.tools.javac.tree.DCTree$DCBlockTag
//$ implements com.sun.source.doctree.UnknownBlockTagTree

#include <com/sun/source/doctree/UnknownBlockTagTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>

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
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Name;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import DCTree$DCUnknownBlockTag : public ::com::sun::tools::javac::tree::DCTree$DCBlockTag, public ::com::sun::source::doctree::UnknownBlockTagTree {
	$class(DCTree$DCUnknownBlockTag, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCBlockTag, ::com::sun::source::doctree::UnknownBlockTagTree)
public:
	DCTree$DCUnknownBlockTag();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::lang::model::element::Name* name, ::java::util::List* content);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getContent() override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual $String* getTagName() override;
	virtual $String* toString() override;
	::javax::lang::model::element::Name* name = nullptr;
	::java::util::List* content = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCUnknownBlockTag_h_