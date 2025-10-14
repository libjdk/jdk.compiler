#ifndef _com_sun_tools_javac_platform_JDKPlatformProvider$PlatformDescriptionImpl$1$1_h_
#define _com_sun_tools_javac_platform_JDKPlatformProvider$PlatformDescriptionImpl$1$1_h_
//$ class com.sun.tools.javac.platform.JDKPlatformProvider$PlatformDescriptionImpl$1$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {
					class JDKPlatformProvider$PlatformDescriptionImpl$1;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

class JDKPlatformProvider$PlatformDescriptionImpl$1$1 : public ::java::util::Iterator {
	$class(JDKPlatformProvider$PlatformDescriptionImpl$1$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	JDKPlatformProvider$PlatformDescriptionImpl$1$1();
	void init$(::com::sun::tools::javac::platform::JDKPlatformProvider$PlatformDescriptionImpl$1* this$1, ::java::lang::Iterable* val$listed, ::java::util::Set* val$kinds);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::com::sun::tools::javac::platform::JDKPlatformProvider$PlatformDescriptionImpl$1* this$1 = nullptr;
	::java::util::Set* val$kinds = nullptr;
	::java::lang::Iterable* val$listed = nullptr;
	::java::util::Iterator* original = nullptr;
	::javax::tools::JavaFileObject* next$ = nullptr;
};

				} // platform
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_platform_JDKPlatformProvider$PlatformDescriptionImpl$1$1_h_