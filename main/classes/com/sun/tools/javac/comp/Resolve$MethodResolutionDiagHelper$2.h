#ifndef _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper$2_h_
#define _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper$2_h_
//$ class com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$2
//$ extends com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$Template

#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class JCDiagnostic;
					class List;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiPredicate;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Resolve$MethodResolutionDiagHelper$2 : public ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template {
	$class(Resolve$MethodResolutionDiagHelper$2, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template)
public:
	Resolve$MethodResolutionDiagHelper$2();
	void init$($String* key, $Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template>* subTemplates);
	virtual bool containsAny(::com::sun::tools::javac::util::JCDiagnostic* d, ::com::sun::tools::javac::util::List* ts);
	bool lambda$$0(Object$* o, ::com::sun::tools::javac::util::List* ts);
	bool lambda$containsAny$1(::com::sun::tools::javac::util::List* ts, Object$* o);
	virtual bool matches(Object$* o) override;
	::java::util::function::BiPredicate* containsPredicate = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper$2_h_