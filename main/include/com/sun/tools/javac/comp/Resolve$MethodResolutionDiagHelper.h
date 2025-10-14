#ifndef _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper_h_
#define _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper_h_
//$ class com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Resolve$MethodResolutionDiagHelper$Template;
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
					class DiagnosticSource;
					class JCDiagnostic;
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$DiagnosticType;
					class JCDiagnostic$Factory;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Resolve$MethodResolutionDiagHelper : public ::java::lang::Object {
	$class(Resolve$MethodResolutionDiagHelper, 0, ::java::lang::Object)
public:
	Resolve$MethodResolutionDiagHelper();
	void init$();
	static ::com::sun::tools::javac::util::JCDiagnostic* rewrite(::com::sun::tools::javac::util::JCDiagnostic$Factory* diags, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::DiagnosticSource* source, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType* dkind, ::com::sun::tools::javac::util::JCDiagnostic* d);
	static ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template* skip;
	static ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template* argMismatchTemplate;
	static ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template* inferArgMismatchTemplate;
	static ::java::util::Map* rewriters;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$MethodResolutionDiagHelper_h_