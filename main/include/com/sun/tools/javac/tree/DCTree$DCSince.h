#ifndef _com_sun_tools_javac_tree_DCTree$DCSince_h_
#define _com_sun_tools_javac_tree_DCTree$DCSince_h_
//$ class com.sun.tools.javac.tree.DCTree$DCSince
//$ extends com.sun.tools.javac.tree.DCTree$DCBlockTag
//$ implements com.sun.source.doctree.SinceTree

#include <com/sun/source/doctree/SinceTree.h>
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import DCTree$DCSince : public ::com::sun::tools::javac::tree::DCTree$DCBlockTag, public ::com::sun::source::doctree::SinceTree {
	$class(DCTree$DCSince, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCBlockTag, ::com::sun::source::doctree::SinceTree)
public:
	DCTree$DCSince();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getTagName() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::List* body);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getBody() override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual $String* toString() override;
	::java::util::List* body = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCSince_h_