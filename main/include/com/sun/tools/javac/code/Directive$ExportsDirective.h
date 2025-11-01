#ifndef _com_sun_tools_javac_code_Directive$ExportsDirective_h_
#define _com_sun_tools_javac_code_Directive$ExportsDirective_h_
//$ class com.sun.tools.javac.code.Directive$ExportsDirective
//$ extends com.sun.tools.javac.code.Directive
//$ implements javax.lang.model.element.ModuleElement$ExportsDirective

#include <com/sun/tools/javac/code/Directive.h>
#include <javax/lang/model/element/ModuleElement$ExportsDirective.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$PackageSymbol;
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
					class List;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ModuleElement$DirectiveKind;
				class ModuleElement$DirectiveVisitor;
				class PackageElement;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Directive$ExportsDirective : public ::com::sun::tools::javac::code::Directive, public ::javax::lang::model::element::ModuleElement$ExportsDirective {
	$class(Directive$ExportsDirective, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Directive, ::javax::lang::model::element::ModuleElement$ExportsDirective)
public:
	Directive$ExportsDirective();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::code::Symbol$PackageSymbol* packge, ::com::sun::tools::javac::util::List* modules);
	void init$(::com::sun::tools::javac::code::Symbol$PackageSymbol* packge, ::com::sun::tools::javac::util::List* modules, ::java::util::Set* flags);
	virtual $Object* accept(::javax::lang::model::element::ModuleElement$DirectiveVisitor* v, Object$* p) override;
	virtual ::javax::lang::model::element::ModuleElement$DirectiveKind* getKind() override;
	virtual ::javax::lang::model::element::PackageElement* getPackage() override;
	virtual ::java::util::List* getTargetModules() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Symbol$PackageSymbol* packge = nullptr;
	::com::sun::tools::javac::util::List* modules = nullptr;
	::java::util::Set* flags = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Directive$ExportsDirective_h_