#ifndef _com_sun_tools_javac_model_JavacElements_h_
#define _com_sun_tools_javac_model_JavacElements_h_
//$ class com.sun.tools.javac.model.JavacElements
//$ extends javax.lang.model.util.Elements

#include <java/lang/Array.h>
#include <javax/lang/model/util/Elements.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class JavacTaskImpl;
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
					class Attribute;
					class Attribute$Compound;
					class Scope$WriteableScope;
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
					class Symbol$ModuleSymbol;
					class Symbol$PackageSymbol;
					class Symtab;
					class Type;
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
					class Enter;
					class Env;
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
				namespace main {
					class JavaCompiler;
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
					class JCTree;
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
					class Context;
					class List;
					class Log;
					class Names;
					class Pair;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class Writer;
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Optional;
		class Set;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			class AnnotatedConstruct;
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
				class ModuleElement;
				class ModuleElement$Directive;
				class Name;
				class PackageElement;
				class TypeElement;
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace util {
				class Elements$Origin;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {

class $export JavacElements : public ::javax::lang::model::util::Elements {
	$class(JavacElements, $NO_CLASS_INIT, ::javax::lang::model::util::Elements)
public:
	JavacElements();
	void init$(::com::sun::tools::javac::util::Context* context);
	void addMembers(::com::sun::tools::javac::code::Scope$WriteableScope* scope, ::com::sun::tools::javac::code::Type* type);
	static $Object* cast($Class* clazz, Object$* o);
	static bool containsAnnoOfType(::com::sun::tools::javac::util::List* annos, ::com::sun::tools::javac::code::Type* type);
	::com::sun::tools::javac::code::Symbol* doGetElement(::javax::lang::model::element::ModuleElement* module, $String* methodName, ::java::lang::CharSequence* name, $Class* clazz);
	::com::sun::tools::javac::code::Symbol$PackageSymbol* doGetPackageElement(::javax::lang::model::element::ModuleElement* module, ::java::lang::CharSequence* name);
	::com::sun::tools::javac::code::Symbol$ClassSymbol* doGetTypeElement(::javax::lang::model::element::ModuleElement* module, ::java::lang::CharSequence* name);
	void ensureEntered($String* methodName);
	virtual ::java::util::List* getAllAnnotationMirrors(::javax::lang::model::element::Element* e) override;
	virtual ::java::util::List* getAllMembers(::javax::lang::model::element::TypeElement* element) override;
	virtual ::java::util::Set* getAllModuleElements() override;
	virtual ::javax::lang::model::element::Name* getBinaryName(::javax::lang::model::element::TypeElement* type) override;
	virtual $String* getConstantExpression(Object$* value) override;
	virtual $String* getDocComment(::javax::lang::model::element::Element* e) override;
	virtual ::java::util::Map* getElementValuesWithDefaults(::javax::lang::model::element::AnnotationMirror* a) override;
	::com::sun::tools::javac::comp::Env* getEnterEnv(::com::sun::tools::javac::code::Symbol* sym);
	virtual ::javax::lang::model::element::ModuleElement* getModuleElement(::java::lang::CharSequence* name) override;
	virtual ::javax::lang::model::element::ModuleElement* getModuleOf(::javax::lang::model::element::Element* e) override;
	virtual ::javax::lang::model::element::Name* getName(::java::lang::CharSequence* cs) override;
	virtual ::javax::lang::model::util::Elements$Origin* getOrigin(::javax::lang::model::element::Element* e) override;
	virtual ::javax::lang::model::util::Elements$Origin* getOrigin(::javax::lang::model::AnnotatedConstruct* c, ::javax::lang::model::element::AnnotationMirror* a) override;
	virtual ::javax::lang::model::util::Elements$Origin* getOrigin(::javax::lang::model::element::ModuleElement* m, ::javax::lang::model::element::ModuleElement$Directive* directive) override;
	virtual ::javax::lang::model::element::PackageElement* getPackageElement(::java::lang::CharSequence* name) override;
	virtual ::javax::lang::model::element::PackageElement* getPackageElement(::javax::lang::model::element::ModuleElement* module, ::java::lang::CharSequence* name) override;
	virtual ::javax::lang::model::element::PackageElement* getPackageOf(::javax::lang::model::element::Element* e) override;
	virtual ::com::sun::tools::javac::tree::JCTree* getTree(::javax::lang::model::element::Element* e);
	::com::sun::tools::javac::util::Pair* getTreeAndTopLevel(::javax::lang::model::element::Element* e);
	virtual ::com::sun::tools::javac::util::Pair* getTreeAndTopLevel(::javax::lang::model::element::Element* e, ::javax::lang::model::element::AnnotationMirror* a, ::javax::lang::model::element::AnnotationValue* v);
	virtual ::javax::lang::model::element::TypeElement* getTypeElement(::java::lang::CharSequence* name) override;
	virtual ::javax::lang::model::element::TypeElement* getTypeElement(::javax::lang::model::element::ModuleElement* module, ::java::lang::CharSequence* name) override;
	virtual bool hides(::javax::lang::model::element::Element* hiderEl, ::javax::lang::model::element::Element* hideeEl) override;
	static ::com::sun::tools::javac::model::JavacElements* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isAutomaticModule(::javax::lang::model::element::ModuleElement* module) override;
	virtual bool isDeprecated(::javax::lang::model::element::Element* e) override;
	virtual bool isFunctionalInterface(::javax::lang::model::element::TypeElement* element) override;
	bool isInherited(::com::sun::tools::javac::code::Type* annotype);
	static ::com::sun::tools::javac::code::Symbol$ModuleSymbol* lambda$unboundNameToSymbol$0(::com::sun::tools::javac::code::Symbol* s);
	static $String* lambda$unboundNameToSymbol$1(::com::sun::tools::javac::code::Symbol$ModuleSymbol* m);
	::java::util::Optional* lambda$unboundNameToSymbol$2($String* nameStr, $Class* clazz, $String* methodName, ::com::sun::tools::javac::util::Pair* p);
	::com::sun::tools::javac::tree::JCTree* matchAnnoToTree(::javax::lang::model::element::AnnotationMirror* findme, ::javax::lang::model::element::Element* e, ::com::sun::tools::javac::tree::JCTree* tree);
	::com::sun::tools::javac::tree::JCTree* matchAnnoToTree(::com::sun::tools::javac::code::Attribute$Compound* findme, ::com::sun::tools::javac::util::List* annos, ::com::sun::tools::javac::util::List* trees);
	::com::sun::tools::javac::tree::JCTree* matchAttributeToTree(::com::sun::tools::javac::code::Attribute* findme, ::com::sun::tools::javac::code::Attribute* attr, ::com::sun::tools::javac::tree::JCTree* tree);
	::com::sun::tools::javac::code::Symbol* nameToSymbol(::com::sun::tools::javac::code::Symbol$ModuleSymbol* module, $String* nameStr, $Class* clazz);
	virtual void newRound();
	virtual bool overrides(::javax::lang::model::element::ExecutableElement* riderEl, ::javax::lang::model::element::ExecutableElement* rideeEl, ::javax::lang::model::element::TypeElement* typeEl) override;
	virtual void printElements(::java::io::Writer* w, $Array<::javax::lang::model::element::Element>* elements) override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* scanForAssign(::com::sun::tools::javac::code::Symbol$MethodSymbol* sym, ::com::sun::tools::javac::tree::JCTree* tree);
	::com::sun::tools::javac::code::Symbol* unboundNameToSymbol($String* methodName, $String* nameStr, $Class* clazz);
	::com::sun::tools::javac::main::JavaCompiler* javaCompiler = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::comp::Modules* modules = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::comp::Enter* enter = nullptr;
	::com::sun::tools::javac::comp::Resolve* resolve = nullptr;
	::com::sun::tools::javac::api::JavacTaskImpl* javacTaskImpl = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	bool allowModules = false;
	::java::util::Set* alreadyWarnedDuplicates = nullptr;
	::java::util::Map* resultCache = nullptr;
};

				} // model
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_model_JavacElements_h_