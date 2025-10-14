#ifndef _com_sun_tools_sjavac_server_CompilationSubResult_h_
#define _com_sun_tools_sjavac_server_CompilationSubResult_h_
//$ class com.sun.tools.sjavac.server.CompilationSubResult
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Main$Result;
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
			namespace sjavac {
				namespace server {

class CompilationSubResult : public ::java::io::Serializable {
	$class(CompilationSubResult, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	CompilationSubResult();
	void init$(::com::sun::tools::javac::main::Main$Result* result);
	virtual void setResult(::com::sun::tools::javac::main::Main$Result* result);
	static const int64_t serialVersionUID = (int64_t)0x0000000AE1DF4E39;
	::com::sun::tools::javac::main::Main$Result* result = nullptr;
	::java::util::Map* packageArtifacts = nullptr;
	::java::util::Map* packageDependencies = nullptr;
	::java::util::Map* packageCpDependencies = nullptr;
	::java::util::Map* packagePubapis = nullptr;
	::java::util::Map* dependencyPubapis = nullptr;
	$String* stdout = nullptr;
	$String* stderr = nullptr;
};

				} // server
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_server_CompilationSubResult_h_