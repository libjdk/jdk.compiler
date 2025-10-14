#ifndef _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$3_h_
#define _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$3_h_
//$ class jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$3
//$ extends com.sun.source.util.TreePathScanner

#include <com/sun/source/util/TreePathScanner.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ClassTree;
				class MethodTree;
				class VariableTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class JavacTask;
				class Trees;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {
				class JavadocHelper$OnDemandJavadocHelper;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class JavadocHelper$OnDemandJavadocHelper$3 : public ::com::sun::source::util::TreePathScanner {
	$class(JavadocHelper$OnDemandJavadocHelper$3, $NO_CLASS_INIT, ::com::sun::source::util::TreePathScanner)
public:
	JavadocHelper$OnDemandJavadocHelper$3();
	void init$(::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper* this$0, ::com::sun::source::util::Trees* val$trees, ::com::sun::source::util::JavacTask* val$task);
	void handleDeclaration();
	using ::com::sun::source::util::TreePathScanner::scan;
	virtual ::java::lang::Void* visitClass(::com::sun::source::tree::ClassTree* node, ::java::lang::Void* p);
	virtual $Object* visitClass(::com::sun::source::tree::ClassTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitMethod(::com::sun::source::tree::MethodTree* node, ::java::lang::Void* p);
	virtual $Object* visitMethod(::com::sun::source::tree::MethodTree* node, Object$* p) override;
	virtual ::java::lang::Void* visitVariable(::com::sun::source::tree::VariableTree* node, ::java::lang::Void* p);
	virtual $Object* visitVariable(::com::sun::source::tree::VariableTree* node, Object$* p) override;
	::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper* this$0 = nullptr;
	::com::sun::source::util::JavacTask* val$task = nullptr;
	::com::sun::source::util::Trees* val$trees = nullptr;
};

			} // doc
		} // shellsupport
	} // internal
} // jdk

#endif // _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper$3_h_