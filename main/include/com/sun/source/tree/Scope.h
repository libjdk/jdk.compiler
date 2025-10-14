#ifndef _com_sun_source_tree_Scope_h_
#define _com_sun_source_tree_Scope_h_
//$ interface com.sun.source.tree.Scope
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ExecutableElement;
				class TypeElement;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $import Scope : public ::java::lang::Object {
	$interface(Scope, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::lang::model::element::TypeElement* getEnclosingClass() {return nullptr;}
	virtual ::javax::lang::model::element::ExecutableElement* getEnclosingMethod() {return nullptr;}
	virtual ::com::sun::source::tree::Scope* getEnclosingScope() {return nullptr;}
	virtual ::java::lang::Iterable* getLocalElements() {return nullptr;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_Scope_h_