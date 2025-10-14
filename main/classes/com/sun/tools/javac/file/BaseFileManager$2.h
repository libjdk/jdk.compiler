#ifndef _com_sun_tools_javac_file_BaseFileManager$2_h_
#define _com_sun_tools_javac_file_BaseFileManager$2_h_
//$ class com.sun.tools.javac.file.BaseFileManager$2
//$ extends com.sun.tools.javac.main.OptionHelper$GrumpyHelper

#include <com/sun/tools/javac/main/OptionHelper$GrumpyHelper.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class BaseFileManager;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Option;
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
					class Log;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class BaseFileManager$2 : public ::com::sun::tools::javac::main::OptionHelper$GrumpyHelper {
	$class(BaseFileManager$2, $NO_CLASS_INIT, ::com::sun::tools::javac::main::OptionHelper$GrumpyHelper)
public:
	BaseFileManager$2();
	void init$(::com::sun::tools::javac::file::BaseFileManager* this$0, ::com::sun::tools::javac::util::Log* log);
	virtual $String* get(::com::sun::tools::javac::main::Option* option) override;
	virtual bool handleFileManagerOption(::com::sun::tools::javac::main::Option* option, $String* value) override;
	virtual void put($String* name, $String* value) override;
	virtual void remove($String* name) override;
	::com::sun::tools::javac::file::BaseFileManager* this$0 = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_BaseFileManager$2_h_