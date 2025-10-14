#ifndef _com_sun_tools_sjavac_PubApiExtractor_h_
#define _com_sun_tools_sjavac_PubApiExtractor_h_
//$ class com.sun.tools.sjavac.PubApiExtractor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Context;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {
					class SmartFileManager;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {
					class Options;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {
					class PubApi;
				}
			}
		}
	}
}
namespace javax {
	namespace tools {
		class JavaCompiler$CompilationTask;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class PubApiExtractor : public ::java::lang::Object {
	$class(PubApiExtractor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PubApiExtractor();
	void init$(::com::sun::tools::sjavac::options::Options* options);
	virtual void close();
	virtual ::com::sun::tools::sjavac::pubapi::PubApi* getPubApi($String* fullyQualifiedClassName);
	::com::sun::tools::javac::util::Context* context = nullptr;
	::javax::tools::JavaCompiler$CompilationTask* task = nullptr;
	::com::sun::tools::sjavac::comp::SmartFileManager* fileManager = nullptr;
};

			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_PubApiExtractor_h_