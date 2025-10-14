#ifndef _com_sun_tools_javac_api_JavacTrees_h_
#define _com_sun_tools_javac_api_JavacTrees_h_
//$ class com.sun.tools.javac.api.JavacTrees
//$ extends com.sun.source.util.DocTrees

#include <com/sun/source/util/DocTrees.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocCommentTree;
				class DocTree;
				class EntityTree;
			}
		}
	}
}
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
				class DocTreeFactory;
				class DocTreePath;
				class SourcePositions;
				class TreePath;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class JavacTaskImpl;
					class JavacTrees$Copier;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
					class Symbol$PackageSymbol;
					class Symbol$VarSymbol;
					class Symtab;
					class Type;
					class Type$ClassType;
					class Types;
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
					class Attr;
					class Check;
					class Enter;
					class Env;
					class MemberEnter;
					class Modules;
					class Resolve;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {
					class JavacElements;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {
					class ParserFactory;
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
					class DCTree$DCParam;
					class DCTree$DCReference;
					class DocTreeMaker;
					class JCTree;
					class JCTree$JCExpression;
					class TreeMaker;
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
					class Context;
					class JCDiagnostic$DiagnosticPosition;
					class List;
					class Log;
					class Name;
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace text {
		class BreakIterator;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
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
				class PackageElement;
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
		class FileObject;
		class JavaCompiler$CompilationTask;
		class JavaFileManager;
		class JavaFileObject;
		class JavaFileObject$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $export JavacTrees : public ::com::sun::source::util::DocTrees {
	$class(JavacTrees, $NO_CLASS_INIT, ::com::sun::source::util::DocTrees)
public:
	JavacTrees();
	void init$(::com::sun::tools::javac::util::Context* context);
	static ::javax::tools::JavaFileObject* asJavaFileObject(::javax::tools::FileObject* fileObject);
	::com::sun::tools::javac::comp::Env* attribExprToTree(::com::sun::tools::javac::tree::JCTree$JCExpression* expr, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* tree, ::java::util::Map* copiedClasses);
	::com::sun::tools::javac::comp::Env* attribStatToTree(::com::sun::tools::javac::tree::JCTree* stat, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree* tree, ::java::util::Map* copiedClasses);
	::com::sun::tools::javac::code::Symbol* attributeDocReference(::com::sun::source::util::TreePath* path, ::com::sun::tools::javac::tree::DCTree$DCReference* ref);
	::com::sun::tools::javac::code::Symbol* attributeParamIdentifier(::com::sun::source::util::TreePath* path, ::com::sun::tools::javac::tree::DCTree$DCParam* paramTag);
	static void checkHtmlKind(::javax::tools::FileObject* fileObject);
	static void checkHtmlKind(::javax::tools::FileObject* fileObject, ::javax::tools::JavaFileObject$Kind* kind);
	virtual ::com::sun::tools::javac::api::JavacTrees$Copier* createCopier(::com::sun::tools::javac::tree::TreeMaker* maker);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* findConstructor(::com::sun::tools::javac::code::Symbol$ClassSymbol* tsym, ::com::sun::tools::javac::util::List* paramTypes);
	::com::sun::tools::javac::code::Symbol$VarSymbol* findField(::com::sun::tools::javac::code::Symbol$ClassSymbol* tsym, ::com::sun::tools::javac::util::Name* fieldName);
	::com::sun::tools::javac::code::Symbol$MethodSymbol* findMethod(::com::sun::tools::javac::code::Symbol$ClassSymbol* tsym, ::com::sun::tools::javac::util::Name* methodName, ::com::sun::tools::javac::util::List* paramTypes);
	void fixLocalClassNames(::java::util::Map* copiedClasses, ::com::sun::tools::javac::comp::Env* lastEnv);
	::com::sun::tools::javac::comp::Env* getAttrContext(::com::sun::source::util::TreePath* path);
	virtual ::java::text::BreakIterator* getBreakIterator() override;
	virtual $String* getCharacters(::com::sun::source::doctree::EntityTree* tree) override;
	virtual $String* getDocComment(::com::sun::source::util::TreePath* path) override;
	virtual ::com::sun::source::doctree::DocCommentTree* getDocCommentTree(::com::sun::source::util::TreePath* path) override;
	virtual ::com::sun::source::doctree::DocCommentTree* getDocCommentTree(::javax::lang::model::element::Element* e) override;
	virtual ::com::sun::source::doctree::DocCommentTree* getDocCommentTree(::javax::lang::model::element::Element* e, $String* relativeFileName) override;
	virtual ::com::sun::source::doctree::DocCommentTree* getDocCommentTree(::javax::tools::FileObject* fileObject) override;
	virtual ::com::sun::source::util::DocTreeFactory* getDocTreeFactory() override;
	virtual ::com::sun::source::util::DocTreePath* getDocTreePath(::javax::tools::FileObject* fileObject, ::javax::lang::model::element::PackageElement* packageElement) override;
	virtual ::javax::lang::model::element::Element* getElement(::com::sun::source::util::TreePath* path) override;
	virtual ::javax::lang::model::element::Element* getElement(::com::sun::source::util::DocTreePath* path) override;
	virtual ::java::util::List* getFirstSentence(::java::util::List* list) override;
	::com::sun::source::doctree::DocTree* getLastChild(::com::sun::source::doctree::DocTree* tree);
	virtual ::javax::lang::model::type::TypeMirror* getLub(::com::sun::source::tree::CatchTree* tree) override;
	virtual ::javax::lang::model::type::TypeMirror* getOriginalType(::javax::lang::model::type::ErrorType* errorType) override;
	virtual ::com::sun::source::util::TreePath* getPath(::com::sun::source::tree::CompilationUnitTree* unit, ::com::sun::source::tree::Tree* node) override;
	virtual ::com::sun::source::util::TreePath* getPath(::javax::lang::model::element::Element* e) override;
	virtual ::com::sun::source::util::TreePath* getPath(::javax::lang::model::element::Element* e, ::javax::lang::model::element::AnnotationMirror* a) override;
	virtual ::com::sun::source::util::TreePath* getPath(::javax::lang::model::element::Element* e, ::javax::lang::model::element::AnnotationMirror* a, ::javax::lang::model::element::AnnotationValue* v) override;
	virtual ::com::sun::source::tree::Scope* getScope(::com::sun::source::util::TreePath* path) override;
	virtual ::com::sun::source::util::SourcePositions* getSourcePositions() override;
	virtual ::com::sun::source::tree::ClassTree* getTree(::javax::lang::model::element::TypeElement* element) override;
	virtual ::com::sun::source::tree::MethodTree* getTree(::javax::lang::model::element::ExecutableElement* method) override;
	virtual ::com::sun::source::tree::Tree* getTree(::javax::lang::model::element::Element* element) override;
	virtual ::com::sun::source::tree::Tree* getTree(::javax::lang::model::element::Element* e, ::javax::lang::model::element::AnnotationMirror* a) override;
	virtual ::com::sun::source::tree::Tree* getTree(::javax::lang::model::element::Element* e, ::javax::lang::model::element::AnnotationMirror* a, ::javax::lang::model::element::AnnotationValue* v) override;
	virtual ::javax::lang::model::type::TypeMirror* getType(::com::sun::source::util::DocTreePath* path) override;
	virtual ::javax::lang::model::type::TypeMirror* getTypeMirror(::com::sun::source::util::TreePath* path) override;
	bool hasParameterTypes(::com::sun::tools::javac::code::Symbol$MethodSymbol* method, ::com::sun::tools::javac::util::List* paramTypes);
	void init(::com::sun::tools::javac::util::Context* context);
	static ::com::sun::tools::javac::api::JavacTrees* instance(::javax::tools::JavaCompiler$CompilationTask* task);
	static ::com::sun::tools::javac::api::JavacTrees* instance(::javax::annotation::processing::ProcessingEnvironment* env);
	static ::com::sun::tools::javac::api::JavacTrees* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isAccessible(::com::sun::source::tree::Scope* scope, ::javax::lang::model::element::TypeElement* type) override;
	virtual bool isAccessible(::com::sun::source::tree::Scope* scope, ::javax::lang::model::element::Element* member, ::javax::lang::model::type::DeclaredType* type) override;
	::com::sun::tools::javac::code::Type* lambda$getOriginalType$1(::com::sun::tools::javac::code::Type$ClassType* classType, ::com::sun::tools::javac::code::Type* tt);
	void lambda$prepareFlatnameForClass$0(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	::com::sun::source::util::TreePath* makeTreePath(::com::sun::tools::javac::code::Symbol$PackageSymbol* psym, ::javax::tools::JavaFileObject* jfo, ::com::sun::source::doctree::DocCommentTree* dcTree);
	::java::util::Map* prepareFlatnameForClass(::com::sun::tools::javac::comp::Env* env);
	virtual void printMessage(::javax::tools::Diagnostic$Kind* kind, ::java::lang::CharSequence* msg, ::com::sun::source::tree::Tree* t, ::com::sun::source::tree::CompilationUnitTree* root) override;
	virtual void printMessage(::javax::tools::Diagnostic$Kind* kind, ::java::lang::CharSequence* msg, ::com::sun::source::doctree::DocTree* t, ::com::sun::source::doctree::DocCommentTree* c, ::com::sun::source::tree::CompilationUnitTree* root) override;
	void printMessage(::javax::tools::Diagnostic$Kind* kind, ::java::lang::CharSequence* msg, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::source::tree::CompilationUnitTree* root);
	::com::sun::tools::javac::code::Symbol$VarSymbol* searchField(::com::sun::tools::javac::code::Symbol$ClassSymbol* tsym, ::com::sun::tools::javac::util::Name* fieldName, ::java::util::Set* searched);
	::com::sun::tools::javac::code::Symbol$MethodSymbol* searchMethod(::com::sun::tools::javac::code::Symbol$ClassSymbol* tsym, ::com::sun::tools::javac::util::Name* methodName, ::com::sun::tools::javac::util::List* paramTypes, ::java::util::Set* searched);
	virtual void setBreakIterator(::java::text::BreakIterator* breakiterator) override;
	virtual void updateContext(::com::sun::tools::javac::util::Context* context);
	::com::sun::tools::javac::comp::Modules* modules = nullptr;
	::com::sun::tools::javac::comp::Resolve* resolve = nullptr;
	::com::sun::tools::javac::comp::Enter* enter = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::comp::MemberEnter* memberEnter = nullptr;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
	::com::sun::tools::javac::comp::Check* chk = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* treeMaker = nullptr;
	::com::sun::tools::javac::model::JavacElements* elements = nullptr;
	::com::sun::tools::javac::api::JavacTaskImpl* javacTaskImpl = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::tree::DocTreeMaker* docTreeMaker = nullptr;
	::java::text::BreakIterator* breakIterator = nullptr;
	::javax::tools::JavaFileManager* fileManager = nullptr;
	::com::sun::tools::javac::parser::ParserFactory* parser = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::java::util::Map* extraType2OriginalMap = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTrees_h_