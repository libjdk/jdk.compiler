#ifndef _com_sun_tools_javac_code_Directive$UsesDirective_h_
#define _com_sun_tools_javac_code_Directive$UsesDirective_h_
//$ class com.sun.tools.javac.code.Directive$UsesDirective
//$ extends com.sun.tools.javac.code.Directive
//$ implements javax.lang.model.element.ModuleElement$UsesDirective

#include <com/sun/tools/javac/code/Directive.h>
#include <javax/lang/model/element/ModuleElement$UsesDirective.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ClassSymbol;
				}
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ModuleElement$DirectiveKind;
				class ModuleElement$DirectiveVisitor;
				class TypeElement;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Directive$UsesDirective : public ::com::sun::tools::javac::code::Directive, public ::javax::lang::model::element::ModuleElement$UsesDirective {
	$class(Directive$UsesDirective, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Directive, ::javax::lang::model::element::ModuleElement$UsesDirective)
public:
	Directive$UsesDirective();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::com::sun::tools::javac::code::Symbol$ClassSymbol* service);
	virtual $Object* accept(::javax::lang::model::element::ModuleElement$DirectiveVisitor* v, Object$* p) override;
	virtual bool equals(Object$* obj) override;
	virtual ::javax::lang::model::element::ModuleElement$DirectiveKind* getKind() override;
	virtual ::javax::lang::model::element::TypeElement* getService() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* service = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Directive$UsesDirective_h_