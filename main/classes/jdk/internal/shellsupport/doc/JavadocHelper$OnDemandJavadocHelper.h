#ifndef _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper_h_
#define _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper_h_
//$ class jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper
//$ extends jdk.internal.shellsupport.doc.JavadocHelper

#include <java/lang/Array.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocCommentTree;
				class DocTree;
				class ThrowsTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class CompilationUnitTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class JavacTask;
				class TreePath;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Pair;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
				class ExecutableElement;
				class TypeElement;
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeMirror;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class Diagnostic;
		class JavaFileManager;
		class StandardJavaFileManager;
	}
}

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class JavadocHelper$OnDemandJavadocHelper : public ::jdk::internal::shellsupport::doc::JavadocHelper {
	$class(JavadocHelper$OnDemandJavadocHelper, $NO_CLASS_INIT, ::jdk::internal::shellsupport::doc::JavadocHelper)
public:
	JavadocHelper$OnDemandJavadocHelper();
	void init$(::com::sun::source::util::JavacTask* mainTask, ::javax::tools::StandardJavaFileManager* fm);
	virtual void close() override;
	$String* elementSignature(::javax::lang::model::element::Element* el);
	void fillElementCache(::com::sun::source::util::JavacTask* task, ::com::sun::source::tree::CompilationUnitTree* cut);
	::com::sun::tools::javac::util::Pair* findSource($String* moduleName, $String* binaryName);
	virtual $String* getResolvedDocComment(::javax::lang::model::element::Element* forElement) override;
	$String* getResolvedDocComment(::com::sun::source::util::JavacTask* task, ::com::sun::source::util::TreePath* el);
	virtual ::javax::lang::model::element::Element* getSourceElement(::javax::lang::model::element::Element* forElement) override;
	::com::sun::tools::javac::util::Pair* getSourceElement(::com::sun::source::util::JavacTask* origin, ::javax::lang::model::element::Element* el);
	$String* getThrownException(::com::sun::source::util::JavacTask* task, ::com::sun::source::util::TreePath* rootOn, ::com::sun::source::doctree::DocCommentTree* comment, ::com::sun::source::doctree::ThrowsTree* tt);
	::java::util::stream::Stream* interfaces(::javax::lang::model::element::TypeElement* clazz);
	static void lambda$findSource$7(::javax::tools::Diagnostic* d);
	::java::util::Iterator* lambda$getResolvedDocComment$0(::com::sun::source::util::JavacTask* task, ::javax::lang::model::element::Element* element);
	static int32_t lambda$getResolvedDocComment$1($ints* span1, $ints* span2);
	static bool lambda$interfaces$5(::javax::lang::model::type::TypeMirror* tm);
	static ::javax::lang::model::element::Element* lambda$interfaces$6(::javax::lang::model::type::TypeMirror* tm);
	static ::java::util::stream::Stream* lambda$superMethodsForInheritDoc$2(::javax::lang::model::element::Element* sup);
	static bool lambda$superMethodsForInheritDoc$3(::com::sun::source::util::JavacTask* task, ::javax::lang::model::element::ExecutableElement* method, ::javax::lang::model::element::TypeElement* type, ::javax::lang::model::element::ExecutableElement* supMethod);
	::java::util::stream::Stream* lambda$superTypeForInheritDoc$4(::com::sun::source::util::JavacTask* task, ::javax::lang::model::element::Element* el);
	::com::sun::source::doctree::DocTree* parseBlockTag(::com::sun::source::util::JavacTask* task, $String* blockTag);
	::com::sun::tools::javac::util::Pair* parseDocComment(::com::sun::source::util::JavacTask* task, $String* javadoc);
	::java::util::stream::Stream* superMethodsForInheritDoc(::com::sun::source::util::JavacTask* task, ::javax::lang::model::element::ExecutableElement* method);
	::java::util::stream::Stream* superTypeForInheritDoc(::com::sun::source::util::JavacTask* task, ::javax::lang::model::element::Element* type);
	::javax::lang::model::element::TypeElement* topLevelType(::javax::lang::model::element::Element* el);
	::com::sun::source::util::JavacTask* mainTask = nullptr;
	::javax::tools::JavaFileManager* baseFileManager = nullptr;
	::javax::tools::StandardJavaFileManager* fm = nullptr;
	::java::util::Map* signature2Source = nullptr;
};

			} // doc
		} // shellsupport
	} // internal
} // jdk

#endif // _jdk_internal_shellsupport_doc_JavadocHelper$OnDemandJavadocHelper_h_