#ifndef _com_sun_source_util_Trees_h_
#define _com_sun_source_util_Trees_h_
//$ class com.sun.source.util.Trees
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class CatchTree;
				class ClassTree;
				class CompilationUnitTree;
				class MethodTree;
				class Scope;
				class Tree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class SourcePositions;
				class TreePath;
			}
		}
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace javax {
	namespace annotation {
		namespace processing {
			class ProcessingEnvironment;
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class AnnotationMirror;
				class AnnotationValue;
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
				class DeclaredType;
				class ErrorType;
				class TypeMirror;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class Diagnostic$Kind;
		class JavaCompiler$CompilationTask;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class $import Trees : public ::java::lang::Object {
	$class(Trees, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Trees();
	void init$();
	virtual $String* getDocComment(::com::sun::source::util::TreePath* path) {return nullptr;}
	virtual ::javax::lang::model::element::Element* getElement(::com::sun::source::util::TreePath* path) {return nullptr;}
	static ::com::sun::source::util::Trees* getJavacTrees($Class* argType, Object$* arg);
	virtual ::javax::lang::model::type::TypeMirror* getLub(::com::sun::source::tree::CatchTree* tree) {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* getOriginalType(::javax::lang::model::type::ErrorType* errorType) {return nullptr;}
	virtual ::com::sun::source::util::TreePath* getPath(::com::sun::source::tree::CompilationUnitTree* unit, ::com::sun::source::tree::Tree* node) {return nullptr;}
	virtual ::com::sun::source::util::TreePath* getPath(::javax::lang::model::element::Element* e) {return nullptr;}
	virtual ::com::sun::source::util::TreePath* getPath(::javax::lang::model::element::Element* e, ::javax::lang::model::element::AnnotationMirror* a) {return nullptr;}
	virtual ::com::sun::source::util::TreePath* getPath(::javax::lang::model::element::Element* e, ::javax::lang::model::element::AnnotationMirror* a, ::javax::lang::model::element::AnnotationValue* v) {return nullptr;}
	virtual ::com::sun::source::tree::Scope* getScope(::com::sun::source::util::TreePath* path) {return nullptr;}
	virtual ::com::sun::source::util::SourcePositions* getSourcePositions() {return nullptr;}
	virtual ::com::sun::source::tree::Tree* getTree(::javax::lang::model::element::Element* element) {return nullptr;}
	virtual ::com::sun::source::tree::ClassTree* getTree(::javax::lang::model::element::TypeElement* element) {return nullptr;}
	virtual ::com::sun::source::tree::MethodTree* getTree(::javax::lang::model::element::ExecutableElement* method) {return nullptr;}
	virtual ::com::sun::source::tree::Tree* getTree(::javax::lang::model::element::Element* e, ::javax::lang::model::element::AnnotationMirror* a) {return nullptr;}
	virtual ::com::sun::source::tree::Tree* getTree(::javax::lang::model::element::Element* e, ::javax::lang::model::element::AnnotationMirror* a, ::javax::lang::model::element::AnnotationValue* v) {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* getTypeMirror(::com::sun::source::util::TreePath* path) {return nullptr;}
	static ::com::sun::source::util::Trees* instance(::javax::tools::JavaCompiler$CompilationTask* task);
	static ::com::sun::source::util::Trees* instance(::javax::annotation::processing::ProcessingEnvironment* env);
	virtual bool isAccessible(::com::sun::source::tree::Scope* scope, ::javax::lang::model::element::TypeElement* type) {return false;}
	virtual bool isAccessible(::com::sun::source::tree::Scope* scope, ::javax::lang::model::element::Element* member, ::javax::lang::model::type::DeclaredType* type) {return false;}
	virtual void printMessage(::javax::tools::Diagnostic$Kind* kind, ::java::lang::CharSequence* msg, ::com::sun::source::tree::Tree* t, ::com::sun::source::tree::CompilationUnitTree* root) {}
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_Trees_h_