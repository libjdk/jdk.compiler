#ifndef _com_sun_tools_javac_code_Directive$ProvidesDirective_h_
#define _com_sun_tools_javac_code_Directive$ProvidesDirective_h_
//$ class com.sun.tools.javac.code.Directive$ProvidesDirective
//$ extends com.sun.tools.javac.code.Directive
//$ implements javax.lang.model.element.ModuleElement$ProvidesDirective

#include <com/sun/tools/javac/code/Directive.h>
#include <javax/lang/model/element/ModuleElement$ProvidesDirective.h>

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

class $export Directive$ProvidesDirective : public ::com::sun::tools::javac::code::Directive, public ::javax::lang::model::element::ModuleElement$ProvidesDirective {
	$class(Directive$ProvidesDirective, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Directive, ::javax::lang::model::element::ModuleElement$ProvidesDirective)
public:
	Directive$ProvidesDirective();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::com::sun::tools::javac::code::Symbol$ClassSymbol* service, ::com::sun::tools::javac::util::List* impls);
	virtual $Object* accept(::javax::lang::model::element::ModuleElement$DirectiveVisitor* v, Object$* p) override;
	virtual bool equals(Object$* obj) override;
	virtual ::java::util::List* getImplementations() override;
	virtual ::javax::lang::model::element::ModuleElement$DirectiveKind* getKind() override;
	virtual ::javax::lang::model::element::TypeElement* getService() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* service = nullptr;
	::com::sun::tools::javac::util::List* impls = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Directive$ProvidesDirective_h_