#ifndef _com_sun_tools_javac_code_Directive$RequiresDirective_h_
#define _com_sun_tools_javac_code_Directive$RequiresDirective_h_
//$ class com.sun.tools.javac.code.Directive$RequiresDirective
//$ extends com.sun.tools.javac.code.Directive
//$ implements javax.lang.model.element.ModuleElement$RequiresDirective

#include <com/sun/tools/javac/code/Directive.h>
#include <javax/lang/model/element/ModuleElement$RequiresDirective.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ModuleSymbol;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ModuleElement;
				class ModuleElement$DirectiveKind;
				class ModuleElement$DirectiveVisitor;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Directive$RequiresDirective : public ::com::sun::tools::javac::code::Directive, public ::javax::lang::model::element::ModuleElement$RequiresDirective {
	$class(Directive$RequiresDirective, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Directive, ::javax::lang::model::element::ModuleElement$RequiresDirective)
public:
	Directive$RequiresDirective();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::code::Symbol$ModuleSymbol* module);
	void init$(::com::sun::tools::javac::code::Symbol$ModuleSymbol* module, ::java::util::Set* flags);
	virtual $Object* accept(::javax::lang::model::element::ModuleElement$DirectiveVisitor* v, Object$* p) override;
	virtual ::javax::lang::model::element::ModuleElement* getDependency() override;
	virtual ::javax::lang::model::element::ModuleElement$DirectiveKind* getKind() override;
	virtual bool isStatic() override;
	virtual bool isTransitive() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* module = nullptr;
	::java::util::Set* flags = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Directive$RequiresDirective_h_